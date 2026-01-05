class   Something_Gotta_Give_Radio_Sound extends BuildingSuper
{
        protected ref EffectSound m_Something_Gotta_Give_RadioLoop;

    void Something_Gotta_Give_Radio_Sound()
    {
                if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
                {
                        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitSomething_Gotta_Give_Radio_Sound, 15, false);
                }
    }

        void ~Something_Gotta_Give_Radio_Sound()
        {
                StopSound();
        }

        void InitSomething_Gotta_Give_Radio_Sound()
        {
                PlaySoundSetLoop( m_Something_Gotta_Give_RadioLoop, "Something_Gotta_Give_Radio_SoundSet", 0, 0 );
                m_Something_Gotta_Give_RadioLoop.SetSoundLoop(true);
                m_Something_Gotta_Give_RadioLoop.SetSoundAutodestroy( true );
        }

        void StopSound()
        {
                if ( m_Something_Gotta_Give_RadioLoop )
                {
                        StopSoundSet( m_Something_Gotta_Give_RadioLoop );
                        m_Something_Gotta_Give_RadioLoop = null;
                }
        }
};
