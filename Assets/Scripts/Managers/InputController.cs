using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
public class InputController : MonoBehaviour, IDragHandler, IPointerUpHandler
{
    [SerializeField] private Transform playerTransform;

    private Quaternion targetRotation; // Hedef dönme açýsý
    private float rotationSpeed = 5f; // Dönme hýzý
    private float moveSpeed = 7.5f; // Ýleri hareket hýzý
    private bool isDragging;

    private void Start()
    {
        targetRotation = playerTransform.rotation;
    }

    private void Update()
    {
        if (isDragging)
        {
            float rotationAmount = Input.GetAxis("Mouse X") * rotationSpeed;

            targetRotation = Quaternion.Euler(targetRotation.eulerAngles.x,
                                          targetRotation.eulerAngles.y + rotationAmount,
                                          targetRotation.eulerAngles.z);
        }

        playerTransform.rotation = Quaternion.Lerp(playerTransform.rotation, targetRotation, Time.deltaTime * rotationSpeed);

        playerTransform.Translate(Vector3.forward * moveSpeed * Time.deltaTime);

    }

    public void OnDrag(PointerEventData eventData)
    {
        isDragging = true;
    }
    public void OnPointerUp(PointerEventData eventData)
    {
        isDragging = false;
    }
}
