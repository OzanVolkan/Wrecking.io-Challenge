using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Dissolve : MonoBehaviour
{
    private Material material;
    private bool isDissolving = false;
    private float dissolveValue = 0f;
    private float dissolveSpeed;

    private void Start()
    {
        Renderer renderer = GetComponent<Renderer>();
        material = renderer.material;
        dissolveSpeed = Random.Range(0.1f, 0.9f);
    }

    private void Update()
    {
        if (isDissolving)
        {
            dissolveValue += dissolveSpeed * Time.deltaTime;
            material.SetFloat("_Dissolve", dissolveValue);

            if (dissolveValue >= 6f)
            {
                Destroy(gameObject); // Objeyi yok et
            }
        }
    }

    public void StartDissolve()
    {
        isDissolving = true;
    }

    private void OnEnable()
    {
        StartDissolve();
    }
}
