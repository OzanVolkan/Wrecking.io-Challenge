using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class ParticleManager : MonoBehaviour
{
    [SerializeField] private ParticleSystem winPrt;
    [SerializeField] private GameObject hitPrt;

    private void OnEnable()
    {
        EventManager.AddHandler(GameEvent.OnWin, new Action(OnWin));
        EventManager.AddHandler(GameEvent.OnBallHit, new Action<Vector3>(OnBallHit));
    }

    private void OnDisable()
    {
        EventManager.RemoveHandler(GameEvent.OnWin, new Action(OnWin));
        EventManager.RemoveHandler(GameEvent.OnBallHit, new Action<Vector3>(OnBallHit));
    }

    private void OnWin()
    {
        winPrt.Play();
    }

    private void OnBallHit(Vector3 _pos)
    {
        Instantiate(hitPrt, _pos, Quaternion.identity);
    }
}
