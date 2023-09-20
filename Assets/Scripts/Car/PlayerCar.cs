using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;
public sealed class PlayerCar : Car
{
    [Inject]
    GameManager gameManager;

    private void Start()
    {
        nameCanvas = GetCanvasTransform();
    }

    private void Update()
    {
        SetCanvasRotation(nameCanvas);
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
