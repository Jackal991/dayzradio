class 	Trader_Sound extends BuildingSuper
{
	protected ref EffectSound m_TraderRadioLoop;
	
    void Trader_Sound()
    {
		if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
		{		
			GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitTrader_Sound, 15, false);
		}   
    }
	
	void ~Trader_Sound()
	{
		StopSound();
	}

	void InitTrader_Sound()
	{
		PlaySoundSetLoop( m_TraderRadioLoop, "Trader_SoundSet", 0, 0 );
		m_TraderRadioLoop.SetSoundLoop(true);
		m_TraderRadioLoop.SetSoundAutodestroy( true );
	}
	
	void StopSound()
	{
		if ( m_TraderRadioLoop )
		{
			StopSoundSet( m_TraderRadioLoop );
			m_TraderRadioLoop = null;
		}
	}
};