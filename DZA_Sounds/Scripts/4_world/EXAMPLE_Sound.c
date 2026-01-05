class 	EXAMPLE_Sound extends BuildingSuper
{
	protected ref EffectSound m_EXAMPLERadioLoop;
	
    void EXAMPLE_Sound()
    {
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{		
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitEXAMPLE_Sound, 15, false);
		}   
    }
	
	void ~EXAMPLE_Sound()
	{
		StopSound();
	}

	void InitEXAMPLE_Sound()
	{
		PlaySoundSetLoop( m_EXAMPLERadioLoop, "EXAMPLE_SoundSet", 0, 0 );
		m_EXAMPLERadioLoop.SetSoundLoop(true);
		m_EXAMPLERadioLoop.SetSoundAutodestroy( true );
	}
	
	void StopSound()
	{
		if ( m_EXAMPLERadioLoop )
		{
			StopSoundSet( m_EXAMPLERadioLoop );
			m_EXAMPLERadioLoop = null;
		}
	}
};

// REPLACE ALL INSTANCES OF "EXAMPLE" WITH YOUR OWN CUSTOM WORD WHICH MATCHES 
// ALL OF THE CONFIG AND YOU WILL BE GOLDEN!