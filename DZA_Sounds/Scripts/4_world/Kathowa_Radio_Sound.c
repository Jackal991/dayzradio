class 	Kathowa_Radio_Sound extends BuildingSuper
{
	protected ref EffectSound m_Kathowa_RadioLoop;
	
    void Kathowa_Radio_Sound()
    {
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{		
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitKathowa_Radio_Sound, 15, false);
		}   
    }
	
	void ~Kathowa_Radio_Sound()
	{
		StopSound();
	}

	void InitKathowa_Radio_Sound()
	{
		PlaySoundSetLoop( m_Kathowa_RadioLoop, "Kathowa_Radio_SoundSet", 0, 0 );
		m_Kathowa_RadioLoop.SetSoundLoop(true);
		m_Kathowa_RadioLoop.SetSoundAutodestroy( true );
	}
	
	void StopSound()
	{
		if ( m_Kathowa_RadioLoop )
		{
			StopSoundSet( m_Kathowa_RadioLoop );
			m_Kathowa_RadioLoop = null;
		}
	}
};