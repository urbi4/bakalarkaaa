using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class PlacementManager : MonoBehaviour
{
    [SerializeField]
    public Canvas[] canvases;

    private GameObject placedPrefab;

    [SerializeField]
    private Button confirmButton;

    private Camera arCamera;

    private float rotationSpeed = 10f;

    //[SerializeField]
    //private PlacementObject[] placementObjects;

    private Vector2 touchPosition = default;

    private ARRaycastManager aRRaycastManager;

    private static List<ARRaycastHit> hits = new List<ARRaycastHit>();

    private PlacementObject lastSelectedObject;
    void Awake()
    {
        aRRaycastManager = GetComponent<ARRaycastManager>();
        //confirmButton.onClick.AddListener(ConfirmPlace);
        placedPrefab = null;
        lastSelectedObject = null;
    }


    void Update()
    {

        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);

            touchPosition = touch.position;

            if (touch.phase == TouchPhase.Began)
            {
                RaycastHit hit;
                Ray ray = arCamera.ScreenPointToRay(Input.GetTouch(0).position);

                if (Physics.Raycast(ray, out hit))
                {
                    lastSelectedObject = hit.transform.GetComponent<PlacementObject>();

                    if (lastSelectedObject != null)
                    {
                        PlacementObject[] allOtherObjects = FindObjectsOfType<PlacementObject>();
                        foreach (PlacementObject placementObject in allOtherObjects)
                        {
                            placementObject.Selected = placementObject == lastSelectedObject;
                        }
                        ManageLastSelectedObject(lastSelectedObject, true);
                        //ChangeSelectedObject(lastSelectedObject);

                    }
                }
            }
            if (touch.phase == TouchPhase.Ended)
            {
                placedPrefab = null;
            }
        }

        if (aRRaycastManager.Raycast(touchPosition, hits, TrackableType.Planes))
        {
            Pose hitPose = hits[0].pose;

            if (lastSelectedObject == null && placedPrefab != null)
            {
                lastSelectedObject = Instantiate(placedPrefab, hitPose.position, hitPose.rotation).GetComponent<PlacementObject>();
            }
            else
            {
                if (lastSelectedObject.Selected)
                {
                    lastSelectedObject.transform.position = hitPose.position;
                    lastSelectedObject.transform.rotation = hitPose.rotation;
                }
            }
        }
    }

    private void ManageLastSelectedObject(PlacementObject lastSelectedObject, bool state)
    {
        GameObject child = lastSelectedObject.transform.GetChild(0).gameObject;
        child.SetActive(state);
    }

    private void ChangeSelectedObject(PlacementObject selected)
    {
        PlacementObject[] allOtherObjects = FindObjectsOfType<PlacementObject>();
        foreach (PlacementObject current in allOtherObjects)
        {
            MeshRenderer meshRenderer = current.GetComponent<MeshRenderer>();
            if (selected != current)
            {
                current.Selected = false;
                meshRenderer.material.color = Color.red;
            }
            else
            {
                current.Selected = true;
                meshRenderer.material.color = Color.white;
            }

        }
    }


    public void ConfirmPlace()
    {
        if (placedPrefab != null && lastSelectedObject != null)
        {
            ManageLastSelectedObject(lastSelectedObject, false);
            string layerNumber = placedPrefab.layer.ToString();
            lastSelectedObject.Selected = false;
            popup(layerNumber);
        }
    }


    public void SetPrefabType(GameObject prefabType)
    {
        placedPrefab = prefabType;
    }

    public void popup(string name)
    {
        foreach (Canvas canvas in canvases)
        {
            if (canvas.name == name || canvas.gameObject.layer.ToString() == name)
            {
                canvas.enabled = true;
            }
            else
            {
                canvas.enabled = false;
            }

        }
    }

    public void RotateXplus()
    {
        if (lastSelectedObject.Selected && placedPrefab != null)
        {
            lastSelectedObject.transform.Rotate(Vector3.down, rotationSpeed * Time.deltaTime);
        }


    }
    public void RotateXminus()
    {
        if (lastSelectedObject.Selected && placedPrefab != null)
        {
            lastSelectedObject.transform.Rotate(Vector3.up, rotationSpeed * Time.deltaTime);
        }

    }
}
