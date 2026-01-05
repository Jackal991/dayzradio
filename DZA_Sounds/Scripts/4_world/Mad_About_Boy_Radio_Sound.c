class   Mad_About_Boy_Radio_Sound extends BuildingSuper
{
        protected ref EffectSound m_Mad_About_Boy_RadioLoop;

    void Mad_About_Boy_Radio_Sound()
    {
                if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
                {
                        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitMad_About_Boy_Radio_Sound, 15, false);
                }
    }

        void ~Mad_About_Boy_Radio_Sound()
        {
                StopSound();
        }

        void InitMad_About_Boy_Radio_Sound()
        {
                PlaySoundSetLoop( m_Mad_About_Boy_RadioLoop, "Mad_About_Boy_Radio_SoundSet", 0, 0 );
                m_Mad_About_Boy_RadioLoop.SetSoundLoop(true);
                m_Mad_About_Boy_RadioLoop.SetSoundAutodestroy( true );
        }

        void StopSound()
        {
                if ( m_Mad_About_Boy_RadioLoop )
                {
                        StopSoundSet( m_Mad_About_Boy_RadioLoop );
                        m_Mad_About_Boy_RadioLoop = null;
                }
        }
};
