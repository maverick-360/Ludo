using UnityEngine;
using System.Collections;

public class RedPlayerIII_Script : MonoBehaviour
{

    public static string redPlayerIII_ColName;

    void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.tag == "Blocks")
        {
            redPlayerIII_ColName = col.gameObject.name;
            if (col.gameObject.name.Contains("Red House"))
            {
                SoundManagerScript.safeHouseAudioSource.Play();
            }
        }
    }

    void Start()
    {
        redPlayerIII_ColName = "none";
    }
}