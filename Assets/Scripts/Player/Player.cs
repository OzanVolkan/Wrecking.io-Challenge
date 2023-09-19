using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    #region Properties
    private bool hasPowerUp;
    public bool HasPowerUp
    {
        get { return hasPowerUp; }
        private set { hasPowerUp = value; }
    }

    #endregion

    [SerializeField] private Transform carLinePos;

    private Rigidbody rb;
    private TrailRenderer trailRenderer;
    private LineRenderer lineRenderer;
    private ConfigurableJoint joint;
    private GameObject ball;

    void Start()
    {
        lineRenderer = GetComponentInChildren<LineRenderer>();
        ball = GetComponentInChildren<Ball>().gameObject;
    }

    void Update()
    {
        SetLinePos();
    }

   



    private void SetLinePos()
    {
        lineRenderer.SetPosition(0, carLinePos.position);
        lineRenderer.SetPosition(1, ball.transform.position);
    }
}
