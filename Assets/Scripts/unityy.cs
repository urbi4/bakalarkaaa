using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class unityy : MonoBehaviour
{

    List<ARRaycastHit> hits = new List<ARRaycastHit>();
    //[SerializeField]
    GameObject spawnableObject;
    Camera arCam;
    //public Canvas[] canvases;
    GameObject spawnedObject;
    private ARRaycastManager aRRaycastManager;



    private void Awake()
    {
        aRRaycastManager = GetComponent<ARRaycastManager>();
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

        RaycastHit hit;
        Ray ray = arCam.ScreenPointToRay(Input.GetTouch(0).position);

        if (aRRaycastManager.Raycast(touchPosition, hits, TrackableType.PlaneWithinPolygon))
        {
            //foreach (var plane in aRPlaneManager.trackables)
            //{
            //    plane.gameObject.SetActive(false);
            //}
            //aRPlaneManager.enabled = false;

            if (Input.GetTouch(0).phase == TouchPhase.Began && spawnedObject == null)
            {
                if (Physics.Raycast(ray, out hit))
                {

                    if (hit.collider.gameObject.tag == "Spawnable")
                    {
                        spawnedObject = hit.collider.gameObject;
                        //MananageObjectPositionRotation(spawnedObject);


                    }
                    else 
                    {
                        SpawnPrefab(hits[0].pose.position, hits[0].pose.rotation);
                    }
                }

            }
            if (Input.GetTouch(0).phase == TouchPhase.Moved && spawnedObject != null)
            {
                spawnedObject.transform.position = hits[0].pose.position;
                //spawnedObject.transform.rotation = hits[0].pose.rotation;
            }
            if (Input.GetTouch(0).phase == TouchPhase.Ended)
            {
                // if (UIactive...){
                //    spawnedObject = něcooo;
                //}
                spawnedObject = null;
                spawnableObject = null;
            }
        }

    }

    private void MananageObjectPositionRotation(GameObject spawnedObject)
    {
        // enabled UII

    }

    public void SetPrefabType(GameObject prefabType)
    {
        spawnableObject = prefabType;
        Debug.Log("prirazeno");

    }


    private void SpawnPrefab(Vector3 spawnPosition, Quaternion spawnRotation)
    {
        spawnedObject = Instantiate(spawnableObject, spawnPosition, spawnRotation);
    }

    public void RotateXplus()
    {
        //if(rotateCanvas.enabled = true)
        {

            //spawnedObject.transform.r
        }

    }
    public void RotateXminus()
    {
        //if (rotateCanvas.enabled = true)
        {

            //spawnedObject.transform.r
        }

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

}
