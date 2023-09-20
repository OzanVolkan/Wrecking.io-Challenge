using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public abstract class Car : MonoBehaviour
{
    private Ball ball;
    protected Transform nameCanvas;

    private void Start()
    {
        ball = transform.parent.GetComponentInChildren<Ball>();
    }
    private void OnTriggerEnter(Collider other)
    {
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

    protected Transform GetCanvasTransform()
    {
        return transform.GetComponentInChildren<Canvas>().transform;
    }

    protected void SetCanvasRotation(Transform transform)
    {
        nameCanvas.rotation = Quaternion.LookRotation(nameCanvas.position - Camera.main.transform.position);
    }
}
