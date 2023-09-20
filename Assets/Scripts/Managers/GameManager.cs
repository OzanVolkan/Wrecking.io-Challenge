using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class GameManager : MonoBehaviour
{
    public GameData gameData;

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

    private void Awake()
    {
        //OnLoad();
    }
    private void Start()
    {
        GameObject[] enemyObj = GameObject.FindGameObjectsWithTag("Enemy");
        currentEnemies.AddRange(enemyObj);

    }
    private void Update()
    {
        
    }

    #region EVENTS
    private void OnEnable()
    {
        EventManager.AddHandler(GameEvent.OnWin, new Action(OnWin));
        EventManager.AddHandler(GameEvent.OnFail, new Action(OnFail));
    }

    private void OnDisable()
    {
        EventManager.RemoveHandler(GameEvent.OnWin, new Action(OnWin));
        EventManager.RemoveHandler(GameEvent.OnFail, new Action(OnFail));
    }

    private void OnWin()
    {
        isPlaying = false;
    }

    private void OnFail()
    {
        isPlaying = false;
    }

    #endregion

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
}
