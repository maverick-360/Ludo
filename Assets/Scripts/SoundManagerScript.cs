using UnityEngine;
using System.Collections;

public class SoundManagerScript : MonoBehaviour {

	public AudioClip buttonAudioClip;
	public AudioClip dismissalAudioClip;
	public AudioClip diceAudioClip;
	public AudioClip winAudioClip;
	public AudioClip safeHouseAudioClip;
	public AudioClip playerAudioClip;

	public static AudioSource buttonAudioSource;
	public static AudioSource dismissalAudioSource;
	public static AudioSource diceAudioSource;
	public static AudioSource winAudioSource;
	public static AudioSource safeHouseAudioSource;
	public static AudioSource playerAudioSource;

	AudioSource AddAudio(AudioClip clip, bool playOnAwake, bool loop, float  volume)
	{
		AudioSource audioSource = gameObject.AddComponent<AudioSource> ();
		audioSource.clip = clip;
		audioSource.playOnAwake = playOnAwake;
		audioSource.loop = loop;
		audioSource.volume = volume;
		return audioSource;
	}

	void Start () 
	{
		buttonAudioSource = AddAudio (buttonAudioClip,false, false, 1.0f);
		dismissalAudioSource = AddAudio (dismissalAudioClip,false, false, 1.0f);
		diceAudioSource = AddAudio (diceAudioClip,false, false, 1.0f);
		winAudioSource = AddAudio (winAudioClip,false, false, 1.0f);
		safeHouseAudioSource = AddAudio (safeHouseAudioClip,false, false, 1.0f);
		playerAudioSource = AddAudio (playerAudioClip,false, false, 1.0f);
	}	
}
