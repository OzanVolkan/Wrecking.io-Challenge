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
