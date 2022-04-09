using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotator : MonoBehaviour
{

    [SerializeField]
    public Vector3 speed;

    void Update()
    {
        transform.Rotate(speed * Time.deltaTime, Space.Self);
    }

}
