using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour, IDrawLine
{
    [SerializeField] private Transform carLinePos;

    private LineRenderer lineRenderer;
    private Transform ball;

    void Start()
    {
        lineRenderer = GetComponentInChildren<LineRenderer>();
        ball = GetComponentInChildren<Ball>().transform;
    }

    void Update()
    {
        IDrawLine();
    }

    public void IDrawLine()
    {
        lineRenderer.SetPosition(0, carLinePos.position);
        lineRenderer.SetPosition(1, ball.position);
    }
}
