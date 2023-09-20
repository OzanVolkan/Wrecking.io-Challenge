using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using Zenject;
public class InputController : MonoBehaviour, IDragHandler, IPointerUpHandler
{
    [Inject]
    GameManager gameManager;

    [SerializeField] private Transform playerTransform;

    private Quaternion targetRotation; // Hedef dönme açýsý
    private float rotationSpeed = 5f; // Dönme hýzý
    private float moveSpeed = 15f; // Ýleri hareket hýzý
    private bool isDragging;

    private float rotationAmount;
    public float RotationAmount
    {
        get { return rotationAmount; }
        private set { rotationAmount = value; }
    }


    private bool canMove;
    public bool CanMove
    {
        get { return canMove; }
        set { canMove = value; }
    }


    private void Start()
    {
        canMove = true;
        targetRotation = playerTransform.rotation;
    }

    private void Update()
    {
        if (!canMove || !gameManager.IsPlaying)
            return;

        if (isDragging)
        {
            rotationAmount = Input.GetAxis("Mouse X") * rotationSpeed;

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
