using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class MainMenuScript : MonoBehaviour 
{
	public static int howManyPlayers;

	public void two_player()
	{
		SoundManagerScript.buttonAudioSource.Play ();
		howManyPlayers = 2;
		SceneManager.LoadScene ("Ludo");
	}

	public void three_player()
	{
		SoundManagerScript.buttonAudioSource.Play ();
		howManyPlayers = 3;
		SceneManager.LoadScene ("Ludo");
	}

	public void four_player()
	{
		SoundManagerScript.buttonAudioSource.Play ();
		howManyPlayers = 4;
		SceneManager.LoadScene ("Ludo");
	}

	public void quit()
	{
		SoundManagerScript.buttonAudioSource.Play ();
		Application.Quit ();
	}
}
