using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[CreateAssetMenu(fileName ="GameData",menuName ="Data/GameData", order =1)]
public class GameData : ScriptableObject
{
    [SerializeField] private int money;
    public int Money
    {
        get { return money; }
        set { money = value; }
    }

    [SerializeField] private int upgradeAmount;
    public int UpgradeAmount
    {
        get { return upgradeAmount; }
        set { upgradeAmount = value; }
    }


    [SerializeField] private int speed;
    public int Speed
    {
        get { return speed; }
        set { speed = value; }
    }


    public void SetDefault()
    {

    }
}
