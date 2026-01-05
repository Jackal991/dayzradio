class 	Knetka_Radio_Sound extends BuildingSuper
{
	protected ref EffectSound m_Knetka_RadioLoop;
	
    void Knetka_Radio_Sound()
    {
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{		
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitKnetka_Radio_Sound, 15, false);
		}   
    }
	
	void ~Knetka_Radio_Sound()
	{
		StopSound();
	}

	void InitKnetka_Radio_Sound()
	{
		PlaySoundSetLoop( m_Knetka_RadioLoop, "Knetka_Radio_SoundSet", 0, 0 );
		m_Knetka_RadioLoop.SetSoundLoop(true);
		m_Knetka_RadioLoop.SetSoundAutodestroy( true );
	}
	
	void StopSound()
	{
		if ( m_Knetka_RadioLoop )
		{
			StopSoundSet( m_Knetka_RadioLoop );
			m_Knetka_RadioLoop = null;
		}
	}
};