using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;
public class ParticleManager : MonoBehaviour
{
    [SerializeField] private ParticleSystem winPrt;
    [SerializeField] private GameObject hitPrt;
    [SerializeField] private Sprite[] happyEmojis;
    [SerializeField] private Sprite[] sadEmojis;

    private void OnEnable()
    {
        EventManager.AddHandler(GameEvent.OnWin, new Action(OnWin));
        EventManager.AddHandler(GameEvent.OnBallHit, new Action<Vector3, Transform, Transform>(OnBallHit));
    }

    private void OnDisable()
    {
        EventManager.RemoveHandler(GameEvent.OnWin, new Action(OnWin));
        EventManager.RemoveHandler(GameEvent.OnBallHit, new Action<Vector3, Transform, Transform>(OnBallHit));
    }

    private void OnWin()
    {
        winPrt.Play();
    }

    private void OnBallHit(Vector3 _pos, Transform _happy, Transform _sad)
    {
        Instantiate(hitPrt, _pos, Quaternion.identity);
        StartCoroutine(ShowEmoji(_happy, _sad));
    }

    private IEnumerator ShowEmoji(Transform _happyCar, Transform _sadCar)
    {
        GameObject _happyImg = _happyCar.GetComponentInChildren<Canvas>().transform.GetChild(1).gameObject;
        _happyImg.SetActive(true);

        GameObject _sadImg = _sadCar.GetComponentInChildren<Canvas>().transform.GetChild(1).gameObject;
        _sadImg.SetActive(true);

        int rand = UnityEngine.Random.Range(0, happyEmojis.Length);

        _happyImg.GetComponent<Image>().sprite = happyEmojis[rand];
        _sadImg.GetComponent<Image>().sprite = sadEmojis[rand];

        yield return new WaitForSeconds(2.75f);

        if (_happyImg != null)
            _happyImg.SetActive(false);

        if (_sadImg != null)
            _sadImg.SetActive(false);
    }
}
