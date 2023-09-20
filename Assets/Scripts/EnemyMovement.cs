using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using Zenject;
public class EnemyMovement : MonoBehaviour, IDrawLine
{
    [Inject]
    GameManager gameManager;

    private bool canMove;
    public bool CanMove
    {
        get { return canMove; }
        set { canMove = value; }
    }


    [SerializeField] private Transform front, right, left;
    [SerializeField] private Transform carLinePos;

    private LineRenderer lineRenderer;
    private Transform ball;

    private int groundLayer = 1 << 7;
    private float hitRange = 10f;
    private float moveSpeed = 15f;

    private void Start()
    {
        canMove = true;
        lineRenderer = transform.parent.GetComponentInChildren<LineRenderer>();
        ball = transform.parent.GetComponentInChildren<Ball>().transform;
    }
    private void Update()
    {
        IDrawLine();

        if (!canMove || !gameManager.IsPlaying)
            return;


        RaycastHit hit;

        if (!Physics.Raycast(front.position, -transform.up, out hit, hitRange, groundLayer))
        {
            float ranRot = Random.Range(180f, 290f);
            transform.Rotate(Vector3.up, ranRot * Time.deltaTime);
        }
        else if (!Physics.Raycast(right.position, -transform.up, out hit, hitRange, groundLayer))
        {
            float ranRot = Random.Range(180f, 290f);
            transform.Rotate(Vector3.up, -ranRot * Time.deltaTime);
        }
        else if (!Physics.Raycast(left.position, -transform.up, out hit, hitRange, groundLayer))
        {
            float ranRot = Random.Range(180f, 290f);
            transform.Rotate(Vector3.up, ranRot * Time.deltaTime);
        }
        
        transform.Translate(Vector3.forward * moveSpeed * Time.deltaTime);
    }

    public void IDrawLine()
    {
        lineRenderer.SetPosition(0, carLinePos.position);
        lineRenderer.SetPosition(1, ball.position);
    }

}
