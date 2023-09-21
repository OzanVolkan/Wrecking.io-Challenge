using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataManager : SingletonManager<DataManager>
{
    [SerializeField] private GameData gameData;
    public GameData GameData
    {
        get { return gameData; }
        set { gameData = value; }
    }

}
