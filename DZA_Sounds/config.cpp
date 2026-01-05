class CfgPatches
{
	class DZ_Buildings
	{
                units[]=
                {
                        "Trader_Sound",
                        "Kathowa_Radio_Sound",
                        "Katja_Radio_Sound",
                        "Knetka_Radio_Sound",
                        "Soviet_War_Radio_Sound",
                        "Johnny_Gutair_Radio_Sound",
                        "Shadow_Valley_Radio_Sound",
                        "Mad_About_Boy_Radio_Sound",
                        "Something_Gotta_Give_Radio_Sound",
                        "Midnight_Ranger_Radio_Sound",
                        "Do_It_Right_Radio_Sound",
                };
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class CfgDestroy
{
	class BuildingHit
	{
		sound[]={};
	};
};
class CfgVehicles
{	
	class HouseNoDestruct;
	class Trader_Sound: HouseNoDestruct
	{
		scope=2;
		model="DZ\gear\radio\unitra_wilga.p3d";
	};
	
	class Kathowa_Radio_Sound: HouseNoDestruct
	{
		scope=2;
		model="DZ\gear\radio\unitra_wilga.p3d";
	};
	
	class Katja_Radio_Sound: HouseNoDestruct
	{
		scope=2;
		model="DZ\gear\radio\unitra_wilga.p3d";
	};
	
	class Knetka_Radio_Sound: HouseNoDestruct
	{
		scope=2;
		model="DZ\gear\radio\unitra_wilga.p3d";
	};
	
        class Soviet_War_Radio_Sound: HouseNoDestruct
        {
                scope=2;
                model="DZ\gear\radio\unitra_wilga.p3d";
        };

        class Johnny_Gutair_Radio_Sound: HouseNoDestruct
        {
                scope=2;
                model="DZ\gear\radio\unitra_wilga.p3d";
        };

        class Shadow_Valley_Radio_Sound: HouseNoDestruct
        {
                scope=2;
                model="DZ\gear\radio\unitra_wilga.p3d";
        };

        class Mad_About_Boy_Radio_Sound: HouseNoDestruct
        {
                scope=2;
                model="DZ\gear\radio\unitra_wilga.p3d";
        };

        class Something_Gotta_Give_Radio_Sound: HouseNoDestruct
        {
                scope=2;
                model="DZ\gear\radio\unitra_wilga.p3d";
        };

        class Midnight_Ranger_Radio_Sound: HouseNoDestruct
        {
                scope=2;
                model="DZ\gear\radio\unitra_wilga.p3d";
        };

        class Do_It_Right_Radio_Sound: HouseNoDestruct
        {
                scope=2;
                model="DZ\gear\radio\unitra_wilga.p3d";
        };
};

// Add your custom class above, each section above is creating an item which will play music
// SCOPE 2 means the item can be held etc, the model path is just declaring where the mod should get the model from
// BELOW you will need to define your sounds which includes adding two small blocks of code


class CfgSoundShaders
{
	class Trader_SoundShader
	{
		samples[]=
		{
			
			{
				"DZA_Sounds\Sounds\Trader_Sound_Effects.ogg",
				1
			}
		};
		range=20;
		volume=2;
	};

	class Kathowa_Radio_SoundShader
	{
		samples[]=
		{
			
			{
				"DZA_Sounds\Sounds\Kathowa.ogg",
				1
			}
		};
		range=20;
		volume=2;
	};

	class Katja_Radio_SoundShader
	{
		samples[]=
		{
			
			{
				"DZA_Sounds\Sounds\Katja.ogg",
				1
			}
		};
		range=20;
		volume=2;
	};

	class Knetka_Radio_SoundShader
	{
		samples[]=
		{
			
			{
				"DZA_Sounds\Sounds\Knetka.ogg",
				1
			}
		};
		range=20;
		volume=2;
	};

        class Soviet_War_Radio_SoundShader
        {
                samples[]=
                {

			{
				"DZA_Sounds\Sounds\Soviet_War_Song.ogg",
				1
			}
                };
                range=20;
                volume=2;
        };

        class Johnny_Gutair_Radio_SoundShader
        {
                samples[]=
                {

                        {
                                "DZA_Sounds\Sounds\johnny_gutair.ogg",
                                1
                        }
                };
                range=20;
                volume=2;
        };

        class Shadow_Valley_Radio_SoundShader
        {
                samples[]=
                {

                        {
                                "DZA_Sounds\Sounds\shadow_valley.ogg",
                                1
                        }
                };
                range=20;
                volume=2;
        };

        class Mad_About_Boy_Radio_SoundShader
        {
                samples[]=
                {

                        {
                                "DZA_Sounds\Sounds\mad_about_boy.ogg",
                                1
                        }
                };
                range=20;
                volume=2;
        };

        class Something_Gotta_Give_Radio_SoundShader
        {
                samples[]=
                {

                        {
                                "DZA_Sounds\Sounds\something_gotta_give.ogg",
                                1
                        }
                };
                range=20;
                volume=2;
        };

        class Midnight_Ranger_Radio_SoundShader
        {
                samples[]=
                {

                        {
                                "DZA_Sounds\Sounds\midnight_ranger.ogg",
                                1
                        }
                };
                range=20;
                volume=2;
        };

        class Do_It_Right_Radio_SoundShader
        {
                samples[]=
                {

                        {
                                "DZA_Sounds\Sounds\do_it_right.ogg",
                                1
                        }
                };
                range=20;
                volume=2;
        };
};

// So above you are making a soundshader which basically just tells the game "this sound shader plays this song"




class CfgSoundSets
{
	class Trader_SoundSet
	{
		soundShaders[]=
		{
			"Trader_SoundShader"
		};
	};

	class Kathowa_Radio_SoundSet
	{
		soundShaders[]=
		{
			"Kathowa_Radio_SoundShader"
		};
	};

	class Katja_Radio_SoundSet
	{
		soundShaders[]=
		{
			"Katja_Radio_SoundShader"
		};
	};

	class Knetka_Radio_SoundSet
	{
		soundShaders[]=
		{
			"Knetka_Radio_SoundShader"
		};
	};

        class Soviet_War_Radio_SoundSet
        {
                soundShaders[]=
                {
                        "Soviet_War_Radio_SoundShader"
                };
        };

        class Johnny_Gutair_Radio_SoundSet
        {
                soundShaders[]=
                {
                        "Johnny_Gutair_Radio_SoundShader"
                };
        };

        class Shadow_Valley_Radio_SoundSet
        {
                soundShaders[]=
                {
                        "Shadow_Valley_Radio_SoundShader"
                };
        };

        class Mad_About_Boy_Radio_SoundSet
        {
                soundShaders[]=
                {
                        "Mad_About_Boy_Radio_SoundShader"
                };
        };

        class Something_Gotta_Give_Radio_SoundSet
        {
                soundShaders[]=
                {
                        "Something_Gotta_Give_Radio_SoundShader"
                };
        };

        class Midnight_Ranger_Radio_SoundSet
        {
                soundShaders[]=
                {
                        "Midnight_Ranger_Radio_SoundShader"
                };
        };

        class Do_It_Right_Radio_SoundSet
        {
                soundShaders[]=
                {
                        "Do_It_Right_Radio_SoundShader"
                };
        };
};

// Above here you can then create the soundset which basically just says to the game
// "Soundshader which plays the sound is linked to this soundset"
// Next you will need to make a custom script which is easy
// for example use Knetka_Radio_SoundSet and in the script just replace all Knetka words for your own custom one.
// This is VERY asimple scripting so if it doesn't work just start again and keep trying.