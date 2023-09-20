using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;

public sealed class EnemyCar : Car
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
            gameManager.CurrentEnemies.Remove(transform.parent.gameObject);
            Destroy(transform.root.gameObject, 1f);

            //DROWNED HER VS!!

            gameManager.CheckIfWin();

        }
    }
}
