using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBorderRotate : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        iTween.RotateBy(this.gameObject, iTween.Hash("z", 20, "time", 0.5f, "speed", 120, "easetype", iTween.EaseType.linear, "looptype", iTween.LoopType.loop));
    }
}