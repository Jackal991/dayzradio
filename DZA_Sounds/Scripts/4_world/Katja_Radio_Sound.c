class 	Katja_Radio_Sound extends BuildingSuper
{
	protected ref EffectSound m_Katja_RadioLoop;
	
    void Katja_Radio_Sound()
    {
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{		
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitKatja_Radio_Sound, 15, false);
		}   
    }
	
	void ~Katja_Radio_Sound()
	{
		StopSound();
	}

	void InitKatja_Radio_Sound()
	{
		PlaySoundSetLoop( m_Katja_RadioLoop, "Katja_Radio_SoundSet", 0, 0 );
		m_Katja_RadioLoop.SetSoundLoop(true);
		m_Katja_RadioLoop.SetSoundAutodestroy( true );
	}
	
	void StopSound()
	{
		if ( m_Katja_RadioLoop )
		{
			StopSoundSet( m_Katja_RadioLoop );
			m_Katja_RadioLoop = null;
		}
	}
};