class   Shadow_Valley_Radio_Sound extends BuildingSuper
{
        protected ref EffectSound m_Shadow_Valley_RadioLoop;

    void Shadow_Valley_Radio_Sound()
    {
                if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
                {
                        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitShadow_Valley_Radio_Sound, 15, false);
                }
    }

        void ~Shadow_Valley_Radio_Sound()
        {
                StopSound();
        }

        void InitShadow_Valley_Radio_Sound()
        {
                PlaySoundSetLoop( m_Shadow_Valley_RadioLoop, "Shadow_Valley_Radio_SoundSet", 0, 0 );
                m_Shadow_Valley_RadioLoop.SetSoundLoop(true);
                m_Shadow_Valley_RadioLoop.SetSoundAutodestroy( true );
        }

        void StopSound()
        {
                if ( m_Shadow_Valley_RadioLoop )
                {
                        StopSoundSet( m_Shadow_Valley_RadioLoop );
                        m_Shadow_Valley_RadioLoop = null;
                }
        }
};
