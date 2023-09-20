using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;
public class PlayerCar : Car
{
    [Inject]
    GameManager gameManager;
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Water"))
        {
            if (gameManager.CurrentEnemies.Count <= 0)
                return;


            //FAIL!
        }
    }
}
