using UnityEngine;
using System.Collections;

public class YellowPlayerIV_Script : MonoBehaviour
{

    public static string yellowPlayerIV_ColName;

    void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.tag == "Blocks")
        {
            yellowPlayerIV_ColName = col.gameObject.name;
            if (col.gameObject.name.Contains("Yellow House"))
            {
                SoundManagerScript.safeHouseAudioSource.Play();
            }
        }
    }

    void Start()
    {
        yellowPlayerIV_ColName = "none";
    }
}
