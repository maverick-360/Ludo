using UnityEngine;
using System.Collections;

public class BluePlayerIII_Script : MonoBehaviour
{

    public static string bluePlayerIII_ColName;

    void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.tag == "Blocks")
        {
            bluePlayerIII_ColName = col.gameObject.name;
            if (col.gameObject.name.Contains("Blue House"))
            {
                SoundManagerScript.safeHouseAudioSource.Play();
            }
        }
    }

    void Start()
    {
        bluePlayerIII_ColName = "none";
    }
}
