using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Zenject;
public class Ball : MonoBehaviour, IPowerUp
{
    [Inject]
    InputController inputController;

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
        if (collision.transform.CompareTag("EnemyCar"))
        {
            bool _canMove = collision.transform.GetComponent<EnemyMovement>().CanMove;
            OnCarHit(collision, _canMove);
        }
        if (collision.transform.CompareTag("Car"))
        {
            bool _canMove = inputController.CanMove;
            OnCarHit(collision, _canMove);
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

    private void OnCarHit(Collision collision, bool canMove)
    {
        canMove = false;

        float randomAngle = Random.Range(0f, 360f);
        float randomAngleRad = randomAngle * Mathf.Deg2Rad;

        Transform centerPoint = collision.transform;
        Vector3 randomPosition = centerPoint.position + new Vector3(Mathf.Cos(randomAngleRad), 0f, Mathf.Sin(randomAngleRad)) * Random.Range(20f, 25f);

        float jumpPower = Random.Range(3f, 5f);
        float duration = Random.Range(2f, 3.25f);
        int numJumps = Random.Range(1, 3);

        centerPoint.DOJump(randomPosition, jumpPower, numJumps, 1f).OnComplete(() =>
        {
            canMove = true;
        });
    }
}
