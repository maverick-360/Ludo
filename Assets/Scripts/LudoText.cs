using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LudoText : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        iTween.RotateTo(this.gameObject, iTween.Hash("rotation", new Vector3(0, 180, 0), "time", 1, "easetype", iTween.EaseType.linear, "looptype", iTween.LoopType.pingPong));
    }
}