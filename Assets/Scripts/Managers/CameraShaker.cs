using UnityEngine;
using Cinemachine;
using System;
public class CameraShaker : MonoBehaviour
{
    private CinemachineVirtualCamera cinemachineVirtualCamera;
    private CinemachineBasicMultiChannelPerlin cinemachineBasicMultiChannelPerlin;
    private float shakeTimer;

    private void OnEnable()
    {
        EventManager.AddHandler(GameEvent.OnCameraShake, new Action<float, float>(OnCameraShake));
    }

    private void OnDisable()
    {
        EventManager.RemoveHandler(GameEvent.OnCameraShake, new Action<float, float>(OnCameraShake));
    }

    private void Start()
    {
        cinemachineVirtualCamera = GetComponent<CinemachineVirtualCamera>();
        shakeTimer = 0.001f;
    }

    public void OnCameraShake(float intensity, float time)
    {
        cinemachineBasicMultiChannelPerlin =
                     cinemachineVirtualCamera.GetCinemachineComponent<CinemachineBasicMultiChannelPerlin>();

        cinemachineBasicMultiChannelPerlin.m_AmplitudeGain = intensity;

        shakeTimer = time;
    }

    void Update()
    {
        if (shakeTimer > 0f)
        {
            shakeTimer -= Time.deltaTime;
            if (shakeTimer <= 0f)
            {
                cinemachineBasicMultiChannelPerlin =
                     cinemachineVirtualCamera.GetCinemachineComponent<CinemachineBasicMultiChannelPerlin>();

                cinemachineBasicMultiChannelPerlin.m_AmplitudeGain = 0f;

            }
        }
    }
}
