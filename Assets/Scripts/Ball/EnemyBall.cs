using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Zenject;
public sealed class EnemyBall : Ball
{
    [Inject]
    InputController inputController;

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.CompareTag("EnemyCar"))
        {
            bool _canMove = collision.transform.GetComponent<EnemyMovement>().CanMove;
            OnCarHit(collision, _canMove);
        }
        if (collision.transform.CompareTag("Car"))
        {
            bool _canMove = inputController.CanMove;
            OnCarHit(collision, _canMove);
            Vibration.VibratePop();
        }
    }
}
