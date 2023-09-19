using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DissolveChildren : MonoBehaviour
{
    private List<Material> materials = new List<Material>();
    private Renderer[] renderers;
    private bool isDissolving = false;
    private float dissolveValue = 0f;
    private float dissolveSpeed = 0.25f;

    void Start()
    {
        renderers = GetComponentsInChildren<Renderer>();

        for (int i = 0; i < renderers.Length; i++)
        {
            materials.AddRange(renderers[i].materials);
        }
    }

    void Update()
    {
        if (isDissolving)
        {
            dissolveValue += dissolveSpeed * Time.deltaTime;

            for (int i = 0; i < materials.Count; i++)
            {
                materials[i].SetFloat("_Dissolve", dissolveValue);
            }
        }
    }

    private void StartDissolve()
    {
        isDissolving = true;

        Destroy(gameObject, 5f);
    }

    private void OnEnable()
    {
        StartDissolve();
    }
}
