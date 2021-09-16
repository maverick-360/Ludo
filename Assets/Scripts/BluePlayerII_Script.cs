using UnityEngine;
using System.Collections;

public class BluePlayerII_Script : MonoBehaviour {

	public static string bluePlayerII_ColName;

	void OnTriggerEnter2D(Collider2D col)
	{
		if (col.gameObject.tag == "blocks") 
		{
			bluePlayerII_ColName = col.gameObject.name;
			if (col.gameObject.name.Contains("Safe House")) {
				SoundManagerScript.safeHouseAudioSource.Play ();
			}
		}
	}

	void Start () 
	{
		bluePlayerII_ColName = "none";
	}
}
