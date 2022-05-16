using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SelectionManager : MonoBehaviour
{
    [SerializeField]
    private bool IsSelected { get; set; }

    public bool Selected
    {
        get
        {
            return this.IsSelected;
        }
        set
        {
            IsSelected = value;
        }
    }

    [SerializeField]
    private TextMesh OverlayText { get; set; }
}
