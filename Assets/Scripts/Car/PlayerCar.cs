using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;
public sealed class PlayerCar : Car
{
    [Inject]
    GameManager gameManager;

    private Transform nameCanvas;
    private void Start()
    {
        nameCanvas = transform.GetChild(1);
    }

    private void Update()
    {
        nameCanvas.rotation = Quaternion.LookRotation(nameCanvas.position - Camera.main.transform.position);
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Water"))
        {
            if (gameManager.CurrentEnemies.Count <= 0)
                return;

            EventManager.Broadcast(GameEvent.OnFail);
        }
    }
}
