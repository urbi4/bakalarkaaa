using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeHandler : MonoBehaviour
{


    [SerializeField]
    private GameObject cube;

    [SerializeField]
    private Vector3 scaleChange;

    [SerializeField]
    private float difference;

    private Vector3 coordinate;

    private float result = 0;

     void Awake()
    {
        coordinate = cube.transform.localScale;
    }



    void Update()
    {
        cube.transform.localScale += scaleChange;
        CalculateDifference();

        if (Math.Abs(result) > difference)
        {
            scaleChange = -scaleChange;
        }
    }

    private void CalculateDifference()
    {
        result = cube.transform.localScale.y - coordinate.y;
    }
}
