using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
public class ArenaManager : MonoBehaviour
{
    [SerializeField] private GameObject[] collapseLayers;
    [SerializeField] private GameObject[] visualLayers;
    [SerializeField] private Renderer[] colorLayers;

    private int layerIndex;

    void Start()
    {
        layerIndex = 0;
        StartCoroutine(CollapseTheArena());
    }

    private IEnumerator CollapseTheArena()
    {
        yield return new WaitForSeconds(14f);

        Renderer rend = colorLayers[layerIndex].GetComponent<Renderer>();

        DOTween.To(() => rend.material.GetFloat("_Arc1"), x => rend.material.SetFloat("_Arc1", x), 0f, 5f)
       .SetEase(Ease.Linear);

        DOTween.To(() => rend.material.GetFloat("_Arc2"), x => rend.material.SetFloat("_Arc2", x), 0f, 5f)
       .SetEase(Ease.Linear)
       .OnComplete(() => StartCoroutine(OnColorChangeCompleted(rend)));
    }

    private IEnumerator OnColorChangeCompleted(Renderer _rend)
    {
        GameObject go = _rend.gameObject;
        bool isOpen = true;

        for (int i = 0; i < 10; i++)
        {
            if (isOpen)
            {
                go.SetActive(false);
                isOpen = false;
            }
            else
            {
                go.SetActive(true);
                isOpen = true;
            }

            yield return new WaitForSeconds(0.1f);

            if (i >= 9) 
            {
                go.SetActive(false);
                SetNewLayers();
            }
        }

        if (layerIndex > collapseLayers.Length)
            yield break;

        StartCoroutine(CollapseTheArena());
    }

    private void SetNewLayers()
    {
        visualLayers[layerIndex].SetActive(false);
        collapseLayers[layerIndex].SetActive(true);
        layerIndex++;

        if (layerIndex > collapseLayers.Length)
            return;

        colorLayers[layerIndex].gameObject.SetActive(true);
    }
    //BAKEEEEEEEEEEEEEEEEEE!!!!!!!!


}
