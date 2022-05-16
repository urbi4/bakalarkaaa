using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ARManager : MonoBehaviour
{
    [SerializeField]
    public Canvas[] canvases;
    [SerializeField]
    public Text textMesh;
    List<ARRaycastHit> hits = new List<ARRaycastHit>();
    private SelectionManager objectToSpawn;
    Camera arCam;
    SelectionManager spawnedObject;
    private ARRaycastManager aRRaycastManager;
    [SerializeField]
    private Button confirmButton;
    private float rotationSpeed = 100f;
    private bool isMoving;



    void Awake()
    {
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

        bool overlap = touchPosition.PositionOverUIElement();

        if (overlap) return;

        if (aRRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
        {

            if (Input.GetTouch(0).phase == TouchPhase.Began && spawnedObject == null)
            {

                RaycastHit hit;
                Ray ray = arCam.ScreenPointToRay(Input.GetTouch(0).position);
                if (Physics.Raycast(ray, out hit))
                {
                        if (hit.collider.gameObject.tag == "ARObject")
                        {
                            spawnedObject = hit.transform.GetComponent<SelectionManager>();
                            DisplaySelectedObject(spawnedObject);
                        }

                    if (spawnedObject != null)
                    {
                        SelectionManager[] allOtherObjects = FindObjectsOfType<SelectionManager>();
                        foreach (SelectionManager placementObject in allOtherObjects)
                        {
                            if (placementObject != spawnedObject)
                            {
                                placementObject.Selected = false;
                            }
                            else
                            {
                                placementObject.Selected = true;
                            }
                        }
                        ManageLastSelectedObject(spawnedObject, true);

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
                    isMoving = true;
                    DisplaySelectedObject(spawnedObject);
                    spawnedObject.transform.position = hits[0].pose.position;
                }
            }
            if (Input.GetTouch(0).phase == TouchPhase.Ended)
            {
                isMoving = false;
                DisplaySelectedObject(spawnedObject);
            }

        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        
    }
    public void DisplaySelectedObject(SelectionManager spawnableObject)
    {
        string gameObjectName;
        if (spawnableObject == null)
        {
            gameObjectName = "none";
        }
        else if(spawnableObject.gameObject.name.Length == 0)
        {
            gameObjectName = "object";
        }
        else
        {
            gameObjectName = spawnableObject.gameObject.name;
        }

        if (isMoving)
        {
            gameObjectName = "moving object";
            textMesh.text = "currently " + gameObjectName;
            textMesh.enabled = true;
        }
        else
        {
            textMesh.text = "currently selected " + gameObjectName;
            textMesh.enabled = true;
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
        isMoving = false;
        DisplaySelectedObject(spawnedObject);    
        //spawnableObject = null;
        //isSelected = false;
        return;
    }

    public void ConfirmPlace()
    {
        if (spawnedObject != null)
        {
            ManageLastSelectedObject(spawnedObject, false);
            spawnedObject = null;
            isMoving = false;
            DisplaySelectedObject(spawnedObject);
            //spawnableObject = null;
            //isSelected = false;
        }
        return;
    }
    private void ManageLastSelectedObject(SelectionManager spawnedObject, bool state)
    {
        GameObject child = spawnedObject.transform.Find("Cube").gameObject;
        if (child == null)
        {
            GameObject children = spawnedObject.transform.GetChild(0).gameObject;
            GameObject finalChild = children.transform.Find("Cube").gameObject;
            finalChild = child;
        }
        //foreach(GameObject object in )
        //GameObject child = spawnedObject.transform.GetChild(0).gameObject;
        //GameObject.Find()
        spawnedObject.Selected = state;
        isMoving = state;
        //isSelected = state;
        child.SetActive(state);
    }

    private void SpawnPrefab(Vector3 position, Quaternion rotation)
    {
        spawnedObject = Instantiate(objectToSpawn, position, rotation).GetComponent<SelectionManager>();
        spawnedObject = null;
        objectToSpawn = null;
       //isSelected = false;
        DisplaySelectedObject(spawnedObject);
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

    public void SelectPrefab(SelectionManager prefabType)
    {
        objectToSpawn = prefabType;
        DisplaySelectedObject(objectToSpawn);
    }

    public void popup(string name)
    {
        foreach (Canvas canvas in canvases)
        {
            if (canvas.name.Equals(name) || canvas.gameObject.layer.ToString() == name)
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
