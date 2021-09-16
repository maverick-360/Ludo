using UnityEngine;
using System.Collections;

public class YellowPlayerII_Script : MonoBehaviour
{

    public static string yellowPlayerII_ColName;

    void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.tag == "Blocks")
        {
            yellowPlayerII_ColName = col.gameObject.name;
            if (col.gameObject.name.Contains("Yellow House"))
            {
                SoundManagerScript.safeHouseAudioSource.Play();
            }
        }
    }

    void Start()
    {
        yellowPlayerII_ColName = "none";
    }
}
