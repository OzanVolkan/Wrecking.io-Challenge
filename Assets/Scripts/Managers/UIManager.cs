using UnityEngine;
using System;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using DG.Tweening;
public class UIManager : MonoBehaviour
{
    [SerializeField] private Button upgradeButton;

    [Header("Panels")]
    [SerializeField] private GameObject winPanel;
    [SerializeField] private GameObject failPanel;
    [SerializeField] private GameObject moneyImg;

    [Header("Texts")]
    [SerializeField] private TextMeshProUGUI moneyAmount;
    [SerializeField] private TextMeshProUGUI speedLevel;
    [SerializeField] private TextMeshProUGUI upgradeAmount;


    private void Start()
    {
        InvokeRepeating("UIChecker", 0.1f, 0.1f);
    }

    private void UIChecker()
    {
        if (speedLevel.IsActive())
            speedLevel.text = "LEVEL " + DataManager.Instance.GameData.Speed;

        if (moneyAmount.IsActive())
            moneyAmount.text = DataManager.Instance.GameData.Money.ToString();

        if (upgradeAmount.IsActive())
            upgradeAmount.text = DataManager.Instance.GameData.UpgradeAmount.ToString();

        if (upgradeButton.IsActive())
        {
            if (DataManager.Instance.GameData.UpgradeAmount >= 10)
            {
                speedLevel.text = "MAX LEVEL";
                upgradeButton.interactable = false;
                return;
            }

            if (DataManager.Instance.GameData.Money < DataManager.Instance.GameData.UpgradeAmount)
                upgradeButton.interactable = false;

            else
                upgradeButton.interactable = true;
        }
    }

    #region BUTTONS

    public void NextButton()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    public void RefreshButton()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    public void StartButton()
    {
        EventManager.Broadcast(GameEvent.OnGameStart);
    }

    public void SpeedUpgrade()
    {
        if (DataManager.Instance.GameData.Money < DataManager.Instance.GameData.UpgradeAmount)
            return;

        DataManager.Instance.GameData.Money -= DataManager.Instance.GameData.UpgradeAmount;
        DataManager.Instance.GameData.UpgradeAmount += 50;
        DataManager.Instance.GameData.Speed++;
        OnMoneyChanged();
    }

    #endregion

    #region EVENTS
    private void OnEnable()
    {
        EventManager.AddHandler(GameEvent.OnWin, new Action(OnWin));
        EventManager.AddHandler(GameEvent.OnFail, new Action(OnFail));
        EventManager.AddHandler(GameEvent.OnMoneyChanged, new Action(OnMoneyChanged));
    }

    private void OnDisable()
    {
        EventManager.RemoveHandler(GameEvent.OnWin, new Action(OnWin));
        EventManager.RemoveHandler(GameEvent.OnFail, new Action(OnFail));
        EventManager.RemoveHandler(GameEvent.OnMoneyChanged, new Action(OnMoneyChanged));
    }

    private void OnWin()
    {
        winPanel.SetActive(true);
    }

    private void OnFail()
    {
        failPanel.SetActive(true);
    }

    private void OnMoneyChanged()
    {
        if (upgradeButton.IsActive())
            upgradeButton.interactable = false;

        moneyImg.transform.DOPunchScale(moneyImg.transform.localScale * 1.1f, 0.5f).OnComplete(() =>
        {
            if (upgradeButton.IsActive())
                upgradeButton.interactable = true;
        });


    }

    #endregion

}
