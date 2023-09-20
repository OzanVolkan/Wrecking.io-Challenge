using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class PowerUpDrop : MonoBehaviour
{
    private Transform parachute;

    private void Start()
    {
        parachute = transform.GetChild(0);
    }
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.CompareTag("Ground"))
        {
            GetComponent<Rigidbody>().isKinematic = true;
            GetComponent<Rigidbody>().useGravity = false;
            GetComponent<Collider>().isTrigger = true;

            parachute.DOScale(Vector3.zero, 1f);
        }
    }
  
}
