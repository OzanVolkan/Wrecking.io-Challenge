using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class UIManager : MonoBehaviour
{
    //public TextMeshProUGUI levelCounter;

    [SerializeField] GameObject winPanel;
    [SerializeField] GameObject failPanel;
    //[SerializeField] GameObject buttonsPanel;
    //[SerializeField] GameObject greenBut, blueBut, redBut, hand;

    private void Start()
    {
        //InvokeRepeating("UIChecker", 0f, 0.1f);
    }

    private void UIChecker()
    {
        //levelCounter.text = "Level " + GameManager.Instance.gameData.levelCounter;
    }

    #region BUTTONS

    //public void NextButton()
    //{
    //    SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    //    EventManager.Broadcast(GameEvent.OnNext);
    //    EventManager.Broadcast(GameEvent.OnSave);
    //}

    //public void RefreshButton()
    //{
    //    SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    //}
    #endregion

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
        winPanel.SetActive(true);
    }

    private void OnFail()
    {
        failPanel.SetActive(true);
    }

    #endregion

}
