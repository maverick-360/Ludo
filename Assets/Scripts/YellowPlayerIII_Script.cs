using UnityEngine;
using System.Collections;

public class YellowPlayerIII_Script : MonoBehaviour
{

    public static string yellowPlayerIII_ColName;

    void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.tag == "Blocks")
        {
            yellowPlayerIII_ColName = col.gameObject.name;
            if (col.gameObject.name.Contains("Yellow House"))
            {
                SoundManagerScript.safeHouseAudioSource.Play();
            }
        }
    }

    void Start()
    {
        yellowPlayerIII_ColName = "none";
    }
}
