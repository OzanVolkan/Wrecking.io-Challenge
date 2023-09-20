using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;
public sealed class PlayerCar : Car
{
    [Inject]
    GameManager gameManager;

    [Inject]
    InputController inputController;

    [Header("PlayerCarEffects")]
    [SerializeReference] private ParticleSystem smokeEffect;
    [SerializeReference] private GameObject fireEffect;

    private void Start()
    {
        nameCanvas = GetCanvasTransform();
        ball = transform.parent.GetComponentInChildren<Ball>();

    }

    private void Update()
    {
        SetCanvasRotation(nameCanvas);
        SharpTurnEffect();
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Water"))
        {
            if (gameManager.CurrentEnemies.Count <= 0)
                return;

            EventManager.Broadcast(GameEvent.OnFail);
            fireEffect.SetActive(true);
        }

        if (other.CompareTag("PowerUp"))
        {
            StartCoroutine(ball.PowerUp());
            Destroy(other.gameObject);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.CompareTag("PowerUp"))
        {
            StartCoroutine(ball.PowerUp());
            Destroy(collision.gameObject);
        }
    }

    private void SharpTurnEffect()
    {
        if (inputController.RotationAmount > 3.75f && !smokeEffect.isPlaying)
        {
            smokeEffect.Play();
        }
    }
}
