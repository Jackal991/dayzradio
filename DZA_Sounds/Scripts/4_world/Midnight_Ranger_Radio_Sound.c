class   Midnight_Ranger_Radio_Sound extends BuildingSuper
{
        protected ref EffectSound m_Midnight_Ranger_RadioLoop;

    void Midnight_Ranger_Radio_Sound()
    {
                if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
                {
                        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitMidnight_Ranger_Radio_Sound, 15, false);
                }
    }

        void ~Midnight_Ranger_Radio_Sound()
        {
                StopSound();
        }

        void InitMidnight_Ranger_Radio_Sound()
        {
                PlaySoundSetLoop( m_Midnight_Ranger_RadioLoop, "Midnight_Ranger_Radio_SoundSet", 0, 0 );
                m_Midnight_Ranger_RadioLoop.SetSoundLoop(true);
                m_Midnight_Ranger_RadioLoop.SetSoundAutodestroy( true );
        }

        void StopSound()
        {
                if ( m_Midnight_Ranger_RadioLoop )
                {
                        StopSoundSet( m_Midnight_Ranger_RadioLoop );
                        m_Midnight_Ranger_RadioLoop = null;
                }
        }
};
