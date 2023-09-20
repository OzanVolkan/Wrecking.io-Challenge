using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class GameManager : MonoBehaviour
{
    public GameData gameData;

    [SerializeField] private GameObject powerUp;
    [SerializeField] private Transform[] powerUpPoints;

    private bool isPlaying;
    public bool IsPlaying
    {
        get { return isPlaying; }
        set { isPlaying = value; }
    }


    [SerializeField] private List<GameObject> currentEnemies = new List<GameObject>();
    public List<GameObject> CurrentEnemies
    {
        get { return currentEnemies; }
        private set { currentEnemies = value; }
    }

    private float randomTime;

    private void Awake()
    {
        //OnLoad();
    }
    private void Start()
    {
        GameObject[] enemyObj = GameObject.FindGameObjectsWithTag("Enemy");
        currentEnemies.AddRange(enemyObj);
        StartCoroutine(RandomPowerUp());
    }

    private IEnumerator RandomPowerUp()
    {
        randomTime = UnityEngine.Random.Range(10f, 20f);
        yield return new WaitForSeconds(randomTime);

        int rand = UnityEngine.Random.Range(0, powerUpPoints.Length);
        Instantiate(powerUp, powerUpPoints[rand].position, Quaternion.identity);

        if (!isPlaying)
            yield break;

        StartCoroutine(RandomPowerUp());
    }

    public void CheckIfWin()
    {
        if (currentEnemies.Count <= 0)
        {
            EventManager.Broadcast(GameEvent.OnWin);
        }
    }

    #region EVENTS
    private void OnEnable()
    {
        EventManager.AddHandler(GameEvent.OnWin, new Action(OnWin));
        EventManager.AddHandler(GameEvent.OnFail, new Action(OnFail));
        EventManager.AddHandler(GameEvent.OnGameStart, new Action(OnGameStart));
    }

    private void OnDisable()
    {
        EventManager.RemoveHandler(GameEvent.OnWin, new Action(OnWin));
        EventManager.RemoveHandler(GameEvent.OnFail, new Action(OnFail));
        EventManager.RemoveHandler(GameEvent.OnGameStart, new Action(OnGameStart));
    }

    private void OnWin()
    {
        isPlaying = false;
    }

    private void OnFail()
    {
        isPlaying = false;
    }

    private void OnGameStart()
    {
        isPlaying = true;
    }

    #endregion

    #region Save/Load
    void OnSave()
    {
        _ = SaveManager.SaveData(gameData);
    }

    void OnLoad()
    {
#if !UNITY_EDITOR
        SaveManager.LoadData(gameData);
#endif
    }
    public void OnApplicationQuit()
    {
        OnSave();
    }
    public void OnApplicationFocus(bool focus)
    {
        if (focus == false) OnSave();
    }
    public void OnApplicationPause(bool pause)
    {
        if (pause == true) OnSave();
    }

    #endregion
}
