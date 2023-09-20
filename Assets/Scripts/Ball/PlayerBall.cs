using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public sealed class PlayerBall : Ball
{
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.CompareTag("EnemyCar"))
        {
            bool _canMove = collision.transform.GetComponent<EnemyMovement>().CanMove;
            OnCarHit(collision, _canMove);
            Vibration.VibratePeek();
        }
    }
}
