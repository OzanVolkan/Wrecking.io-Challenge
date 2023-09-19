using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour, IPowerUp
{
    private Rigidbody carRb;
    private Rigidbody rb;
    private TrailRenderer trailRenderer;
    private LineRenderer lineRenderer;
    private ConfigurableJoint joint;
    private float powerUpTime = 3f;
    private bool hasPowerUp;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        trailRenderer = GetComponent<TrailRenderer>();
        joint = GetComponent<ConfigurableJoint>();
        lineRenderer = transform.root.GetComponentInChildren<LineRenderer>();
        carRb = transform.root.GetChild(0).GetComponent<Rigidbody>();
    }

    void Update()
    {
        if (hasPowerUp)
        {
            transform.RotateAround(transform.root.GetChild(0).transform.position, Vector3.up, 720 * Time.deltaTime);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.CompareTag("PowerUp"))
        {
            StartCoroutine(PowerUp());
            Destroy(collision.gameObject);
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("PowerUp"))
        {
            StartCoroutine(PowerUp());
            Destroy(other.gameObject);
        }
    }

    public IEnumerator PowerUp()
    {
        hasPowerUp = true;

        trailRenderer.enabled = true;
        lineRenderer.enabled = false;
        rb.isKinematic = true;
        joint.connectedBody = null;

        yield return new WaitForSeconds(powerUpTime);

        hasPowerUp = false;
        trailRenderer.enabled = false;
        lineRenderer.enabled = true;
        rb.isKinematic = false;
        joint.connectedBody = carRb;
    }

}
