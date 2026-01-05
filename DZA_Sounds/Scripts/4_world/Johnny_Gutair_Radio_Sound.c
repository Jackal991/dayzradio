class   Johnny_Gutair_Radio_Sound extends BuildingSuper
{
        protected ref EffectSound m_Johnny_Gutair_RadioLoop;

    void Johnny_Gutair_Radio_Sound()
    {
                if ( GetGame().IsClient()  ||  !GetGame().IsMultiplayer() )
                {
                        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(InitJohnny_Gutair_Radio_Sound, 15, false);
                }
    }

        void ~Johnny_Gutair_Radio_Sound()
        {
                StopSound();
        }

        void InitJohnny_Gutair_Radio_Sound()
        {
                PlaySoundSetLoop( m_Johnny_Gutair_RadioLoop, "Johnny_Gutair_Radio_SoundSet", 0, 0 );
                m_Johnny_Gutair_RadioLoop.SetSoundLoop(true);
                m_Johnny_Gutair_RadioLoop.SetSoundAutodestroy( true );
        }

        void StopSound()
        {
                if ( m_Johnny_Gutair_RadioLoop )
                {
                        StopSoundSet( m_Johnny_Gutair_RadioLoop );
                        m_Johnny_Gutair_RadioLoop = null;
                }
        }
};
