using UnityEngine;
using System.Collections;

public class GreenPlayerI_Script : MonoBehaviour
{

    public static string greenPlayerI_ColName;

    void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.tag == "Blocks")
        {
            greenPlayerI_ColName = col.gameObject.name;
            if (col.gameObject.name.Contains("Green House"))
            {
                SoundManagerScript.safeHouseAudioSource.Play();
            }
        }
    }

    void Start()
    {
        greenPlayerI_ColName = "none";
    }
}
