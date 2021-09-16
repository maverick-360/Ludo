using UnityEngine;
using System.Collections;

public class RedPlayerI_Script : MonoBehaviour
{

    public static string redPlayerI_ColName;

    void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.tag == "Blocks")
        {
            redPlayerI_ColName = col.gameObject.name;
            if (col.gameObject.name.Contains("Red House"))
            {
                SoundManagerScript.safeHouseAudioSource.Play();
            }
        }
    }

    void Start()
    {
        redPlayerI_ColName = "none";
    }
}
