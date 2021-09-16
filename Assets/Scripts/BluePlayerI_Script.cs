using UnityEngine;
using System.Collections;

public class BluePlayerI_Script : MonoBehaviour {

	public static string bluePlayerI_ColName;

	void OnTriggerEnter2D(Collider2D col)
	{
		if (col.gameObject.tag == "Blocks") 
		{			
			bluePlayerI_ColName = col.gameObject.name;
			if (col.gameObject.name.Contains("Blue House")) {
				SoundManagerScript.safeHouseAudioSource.Play ();
			}
		}
	}

	void Start () 
	{
		bluePlayerI_ColName = "none";
	}
}
