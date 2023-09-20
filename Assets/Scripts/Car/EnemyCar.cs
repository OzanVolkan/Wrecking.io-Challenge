using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;

public sealed class EnemyCar : Car
{
    [Inject]
    GameManager gameManager;

    [Inject]
    ParticleManager particleManager;

    [Inject]
    PlayerCar playerCar;

    private bool hitByPlayer;

    private void Start()
    {
        nameCanvas = GetCanvasTransform();
        ball = transform.parent.GetComponentInChildren<Ball>();

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
            Destroy(transform.root.gameObject, 2.1f);

            if(hitByPlayer)
                StartCoroutine(particleManager.KillTextCheck(playerCar.transform));

            gameManager.CheckIfWin();
        }

        if (other.CompareTag("PowerUp"))
        {
            StartCoroutine(ball.PowerUp());
            Destroy(other.gameObject);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.CompareTag("PlayerBall"))
        {
            hitByPlayer = true;
        }
        if (collision.transform.CompareTag("EnemyBall"))
        {
            hitByPlayer = false;
        }
        if (collision.transform.CompareTag("PowerUp"))
        {
            StartCoroutine(ball.PowerUp());
            Destroy(collision.gameObject);
        }
    }
}
