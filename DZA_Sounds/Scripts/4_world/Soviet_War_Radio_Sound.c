class 	Soviet_War_Radio_Sound extends BuildingSuper
{
	protected ref EffectSound m_Soviet_War_RadioLoop;
	
    void Soviet_War_Radio_Sound()
    {
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{		
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitSoviet_War_Radio_Sound, 15, false);
		}   
    }
	
	void ~Soviet_War_Radio_Sound()
	{
		StopSound();
	}

	void InitSoviet_War_Radio_Sound()
	{
		PlaySoundSetLoop( m_Soviet_War_RadioLoop, "Soviet_War_Radio_SoundSet", 0, 0 );
		m_Soviet_War_RadioLoop.SetSoundLoop(true);
		m_Soviet_War_RadioLoop.SetSoundAutodestroy( true );
	}
	
	void StopSound()
	{
		if ( m_Soviet_War_RadioLoop )
		{
			StopSoundSet( m_Soviet_War_RadioLoop );
			m_Soviet_War_RadioLoop = null;
		}
	}
};