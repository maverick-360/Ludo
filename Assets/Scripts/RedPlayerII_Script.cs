using UnityEngine;
using System.Collections;

public class RedPlayerII_Script : MonoBehaviour
{

    public static string redPlayerII_ColName;

    void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.tag == "Blocks")
        {
            redPlayerII_ColName = col.gameObject.name;
            if (col.gameObject.name.Contains("Red House"))
            {
                SoundManagerScript.safeHouseAudioSource.Play();
            }
        }
    }

    void Start()
    {
        redPlayerII_ColName = "none";
    }
}