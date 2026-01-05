class   Do_It_Right_Radio_Sound extends BuildingSuper
{
        protected ref EffectSound m_Do_It_Right_RadioLoop;

    void Do_It_Right_Radio_Sound()
    {
                if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
                {
                        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitDo_It_Right_Radio_Sound, 15, false);
                }
    }

        void ~Do_It_Right_Radio_Sound()
        {
                StopSound();
        }

        void InitDo_It_Right_Radio_Sound()
        {
                PlaySoundSetLoop( m_Do_It_Right_RadioLoop, "Do_It_Right_Radio_SoundSet", 0, 0 );
                m_Do_It_Right_RadioLoop.SetSoundLoop(true);
                m_Do_It_Right_RadioLoop.SetSoundAutodestroy( true );
        }

        void StopSound()
        {
                if ( m_Do_It_Right_RadioLoop )
                {
                        StopSoundSet( m_Do_It_Right_RadioLoop );
                        m_Do_It_Right_RadioLoop = null;
                }
        }
};
