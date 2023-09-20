using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public abstract class Car : MonoBehaviour
{
    protected Ball ball;
    protected Transform nameCanvas;

    private void Start()
    {
    }
    private void OnTriggerEnter(Collider other)
    {
        
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
