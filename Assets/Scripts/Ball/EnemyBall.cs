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
            float jumpPower = Random.Range(3f, 5f);

            OnCarHit(collision, _canMove, jumpPower);
        }
        if (collision.transform.CompareTag("Car"))
        {
            bool _canMove = inputController.CanMove;
            float jumpPower = Random.Range(1f, 2.5f);

            OnCarHit(collision, _canMove, jumpPower);
            Vibration.VibratePop();
        }
    }
}
