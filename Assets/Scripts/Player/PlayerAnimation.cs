using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class PlayerAnimation : MonoBehaviour
{
    [SerializeField] private Animator animator;

    private void OnEnable()
    {
        EventManager.AddHandler(GameEvent.OnWin, new Action (OnWin));
    }

    private void OnDisable()
    {
        EventManager.RemoveHandler(GameEvent.OnWin, new Action (OnWin));
    }

    private void OnWin()
    {
        animator.SetTrigger("Cheer");
    }
}
