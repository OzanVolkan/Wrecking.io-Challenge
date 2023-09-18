using System;
using System.IO;
using System.Threading.Tasks;
using UnityEngine;

public class SaveManager
{
    private static readonly string filePath = Path.Combine(Application.persistentDataPath, "GameData.txt");

    public static async Task SaveData(GameData gameData)
    {
        var json = JsonUtility.ToJson(gameData);
        try
        {
            await File.WriteAllTextAsync(filePath, json);
        }
        catch (Exception e)
        {
            Debug.LogError(e.Message);
        }
    }

    public static async Task LoadData(GameData gameData)
    {
        if (File.Exists(filePath))
        {
            try
            {
                var json = await File.ReadAllTextAsync(filePath);
                JsonUtility.FromJsonOverwrite(json, gameData);
            }
            catch (Exception e)
            {
                Debug.LogError(e.Message);
            }
        }
        else
        {
            await SaveData(gameData);
        }
    }
}