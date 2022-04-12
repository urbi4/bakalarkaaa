using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class basic : MonoBehaviour
{
    [SerializeField]
    public Canvas[] canvases;
    List<ARRaycastHit> hits = new List<ARRaycastHit>();
    private PlacementObject spawnableObject;
    Camera arCam;
    PlacementObject spawnedObject;
    private ARRaycastManager aRRaycastManager;
    //private ARPlaneManager aRPlaneManager;
    [SerializeField]
    private Button confirmButton;
    private float rotationSpeed = 100f;


    void Awake()
    {
        //aRPlaneManager = GetComponent<ARPlaneManager>();
        aRRaycastManager = GetComponent<ARRaycastManager>();
        confirmButton.onClick.AddListener(ConfirmPlace);
    
    }

    void Start()
    {
        spawnedObject = null;
        arCam = GameObject.Find("AR Camera").GetComponent<Camera>();
    }


    void Update()
    {
        if (!TryGetTouchPosition(out Vector2 touchPosition))
            return;

        bool isOverUI = touchPosition.IsPointOverUIObject();

        if (isOverUI) return;

        if (aRRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
        {

            if (Input.GetTouch(0).phase == TouchPhase.Began && spawnedObject == null)
            {

                RaycastHit hit;
                Ray ray = arCam.ScreenPointToRay(Input.GetTouch(0).position);
                if (Physics.Raycast(ray, out hit))
                {
                    if (hit.collider.gameObject.tag == "Spawnable")
                    {
                        //spawnedObject = hit.collider.gameObject;
                        spawnedObject = hit.transform.GetComponent<PlacementObject>();
                    }

                    if (spawnedObject != null)
                    {
                        PlacementObject[] allOtherObjects = FindObjectsOfType<PlacementObject>();
                        foreach (PlacementObject placementObject in allOtherObjects)
                        {
                            if (placementObject != spawnedObject)
                            {
                                placementObject.Selected = false;
                            }
                            else
                            {
                                placementObject.Selected = true;
                            }
                            //placementObject.Selected = placementObject == lastSelectedObject;
                        }
                        ManageLastSelectedObject(spawnedObject, true);
                        //ChangeSelectedObject(lastSelectedObject);

                    }
                    else
                    {
                        SpawnPrefab(hits[0].pose.position, hits[0].pose.rotation);
                    }
                }
            }
            if (Input.GetTouch(0).phase == TouchPhase.Moved && spawnedObject != null)
            {
                if (spawnedObject.Selected)
                {
                    spawnedObject.transform.position = hits[0].pose.position;
                }
            }
            if (Input.GetTouch(0).phase == TouchPhase.Ended)
            {
                //spawnedObject = null;
            }

        }
    }
    public void Destroy()
    {
        if(spawnedObject != null)
        {
            if (spawnedObject.Selected)
            {
                Destroy(spawnedObject.gameObject);
            }
        }
        spawnedObject = null;
        return;
    }

    public void ConfirmPlace()
    {
        if (spawnedObject != null)
        {
            ManageLastSelectedObject(spawnedObject, false);
            //string layerNumber = spawnableObject.gameObject.layer.ToString();
            spawnedObject = null;
            //popup(layerNumber);
        }
    }
    private void ManageLastSelectedObject(PlacementObject spawnedObject, bool state)
    {
        GameObject child = spawnedObject.transform.GetChild(0).gameObject;
        spawnedObject.Selected = state;
        child.SetActive(state);
    }

    private void SpawnPrefab(Vector3 position, Quaternion rotation)
    {
        spawnedObject = Instantiate(spawnableObject, position, rotation).GetComponent<PlacementObject>();
        spawnedObject = null;
    }

    bool TryGetTouchPosition(out Vector2 touchPosition)
    {
        if (Input.touchCount > 0)
        {
            touchPosition = Input.GetTouch(0).position;
            return true;
        }

        touchPosition = default;
        return false;
    }

    public void SetPrefabType(PlacementObject prefabType)
    {
        spawnableObject = prefabType;
        Debug.Log("selected");
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
        if (spawnedObject != null)
        {
            if (!spawnedObject.Selected) return;
            spawnedObject.transform.Rotate(Vector3.down, rotationSpeed * Time.deltaTime);
        }
        return;

    }
    public void RotateXminus()
    {
        if (spawnedObject != null)
        {
            if (!spawnedObject.Selected) return;
            spawnedObject.transform.Rotate(Vector3.up, rotationSpeed * Time.deltaTime);
        }
        return;
    }
}
