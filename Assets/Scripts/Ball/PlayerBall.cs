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
            float jumpPower = Random.Range(3f, 5f);

            OnCarHit(collision, _canMove,jumpPower);
            Vibration.VibratePeek();
        }
    }
}
