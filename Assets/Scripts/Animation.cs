using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Animation : MonoBehaviour
{
    public GameObject canvas;
    public Button button;


    private void Awake()
    {
        button.onClick.AddListener(AnimationPlay);
    }
    public void AnimationPlay()
    {
        canvas.GetComponent<Animator>().Play("MainMenu");
    }
}
