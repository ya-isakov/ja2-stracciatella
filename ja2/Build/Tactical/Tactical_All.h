#ifndef __TACTICAL_ALL_H
#define __TACTICAL_ALL_H

#pragma message("GENERATED PCH FOR TACTICAL PROJECT.")

#include "SGP.h"
#include "Air_Raid.h"
#include "Game_Event_Hook.h"
#include "Game_Clock.h"
#include "Auto_Bandage.h"
#include "StrategicMap.h"
#include "ScreenIDs.h"
#include "JAScreens.h"
#include "Random.h"
#include "Overhead_Types.h"
#include "Sound_Control.h"
#include "Timer_Control.h"
#include "Dialogue_Control.h"
#include "Overhead.h"
#include "Message.h"
#include "Isometric_Utils.h"
#include "Soldier_Macros.h"
#include "WorldMan.h"
#include "LOS.h"
#include "math.h"
#include "Explosion_Control.h"
#include "Interface.h"
#include "Music_Control.h"
#include "Campaign_Types.h"
#include "GameSettings.h"
#include "Text.h"
#include "Morale.h"
#include "Map_Screen_Helicopter.h"
#include <stdio.h>
#include <string.h>
#include "Types.h"
#include "WCheck.h"
#include <stdlib.h>
#include "Animation_Cache.h"
#include "Animation_Data.h"
#include "Animation_Control.h"
#include "Sys_Globals.h"
#include "Debug_Control.h"
#include "FileMan.h"
#include "Weapons.h"
#include "Structure.h"
#include "WorldDef.h"
#include "Rotting_Corpses.h"
#include "Points.h"
#include "Soldier_Control.h"
#include "TileDef.h"
#include "Utilities.h"
#include "Arms_Dealer_Init.h"
#include "ArmsDealerInvInit.h"
#include "Soldier_Profile.h"
#include "Handle_Items.h"
#include "Item_Types.h"
#include "MessageBoxScreen.h"
#include "Handle_UI.h"
#include "Items.h"
#include "MercTextBox.h"
#include "RenderWorld.h"
#include "Strategic_Turns.h"
#include "Event_Pump.h"
#include "AI.h"
#include "Interface_Control.h"
#include "Map_Screen_Interface.h"
#include "Map_Screen_Interface_Bottom.h"
#include "Assignments.h"
#include "WordWrap.h"
#include "Cursors.h"
#include "English.h"
#include "Boxing.h"
#include "Render_Fun.h"
#include "NPC.h"
#include "OppList.h"
#include <errno.h>
#include "VSurface.h"
#include "Render_Dirty.h"
#include "SysUtil.h"
#include "Container.h"
#include "Video.h"
#include "VObject_Blitters.h"
#include "Faces.h"
#include "Gap.h"
#include "Bullets.h"
#include <wchar.h>
#include "MemMan.h"
#include "Campaign.h"
#include "Strategic_Mines.h"
#include "Strategic_Status.h"
#include "Encrypted_File.h"
#include "Mercs.h"
#include "Interface_Dialogue.h"
#include "Squads.h"
#include "Interface_Utils.h"
#include "Quests.h"
#include "GameScreen.h"
#include "ShopKeeper_Interface.h"
#include "Merc_Contract.h"
#include "History.h"
#include "Town_Militia.h"
#include "Meanwhile.h"
#include "SkillCheck.h"
#include "Finances.h"
#include "Drugs_And_Alcohol.h"
#include "TeamTurns.h"
#include "Font_Control.h"
#include "Line.h"
#include "Structure_Wrap.h"
#include "PathAI.h"
#include "Smell.h"
#include "FOV.h"
#include "Keys.h"
#include "Input.h"
#include "Exit_Grids.h"
#include "Environment.h"
#include "Fog_Of_War.h"
#include "SoundMan.h"
#include <stdarg.h>
#include <time.h>
#include "Tile_Animation.h"
#include "Interactive_Tiles.h"
#include "Handle_Doors.h"
#include "Action_Items.h"
#include "World_Items.h"
#include "Interface_Items.h"
#include "Physics.h"
#include "Interface_Panels.h"
#include "Strategic_Town_Loyalty.h"
#include "Soldier_Functions.h"
#include "SaveLoadMap.h"
#include "Soldier_Add.h"
#include "Soldier_Ani.h"
#include "QArray.h"
#include "Handle_UI_Plan.h"
#include "Soldier_Create.h"
#include "MouseSystem.h"
#include "Cursor_Control.h"
#include "Interface_Cursors.h"
#include "UI_Cursors.h"
#include "Strategic_Pathing.h"
#include "Strategic_Movement.h"
#include "Strategic.h"
#include "Vehicles.h"
#include "Gameloop.h"
#include "HImage.h"
#include "VObject.h"
#include "Button_System.h"
#include "Radar_Screen.h"
#include "Lighting.h"
#include "Strategic_Exit_GUI.h"
#include "PopUpBox.h"
#include "Spread_Burst.h"
#include "Tactical_Save.h"
#include "Fade_Screen.h"
#include "Strategic_AI.h"
#include "MapScreen.h"
#include "LaptopSave.h"
#include "Map_Screen_Interface_Map.h"
#include "Map_Screen_Interface_Map_Inventory.h"
#include "Overhead_Map.h"
#include "Options_Screen.h"
#include <memory.h>
#include "Inventory_Choosing.h"
#include "Smoothing_Utils.h"
#include "TileDat.h"
#include <math.h>
#include "Phys_Math.h"
#include "Map_Information.h"
#include "Soldier_Init_List.h"
#include "EditorMercs.h"
#include "JA2.h"
#include "Road_Smoothing.h"
#include "Tile_Cache.h"
#include "Merc_Entering.h"
#include "Merc_Hiring.h"
#include "Strategic_Merc_Handler.h"
#include "Militia_Control.h"
#include "Queen_Command.h"
#include "EditScreen.h"
#include "Soldier_Tile.h"
#ifdef  NETWORKED
	#include "Networking.h"
	#include "NetworkEvent.h"
#endif
#include "Player_Command.h"
#include "Game_Init.h"
#include "Buildings.h"
#include "RT_Time_Defines.h"
#include	"GameSettings.h"
#include "Text_Input.h"
#include "ShopKeeper_Quotes.h"
#include "Personnel.h"
#include "Pits.h"
#include "Win_Util.h"
#include "SmokeEffects.h"
#include "SaveLoadGame.h"
#include "Scheduling.h"
#include "Auto_Resolve.h"
#include "Soldier_Find.h"
#include "AIM.h"
#include "Strategic_Town_Reputation.h"
#include "Tactical_Turns.h"
#include "LightEffects.h"
#include "Timer.h"
#include "Soldier_Profile_Type.h"
#include "AIList.h"
#include "QuestDebug.h"
#include "Game_Events.h"
#include "BobbyR.h"

#ifdef JA2BETAVERSION
	#include	"Quest_Debug_System.h"
#endif

#include "GameVersion.h"
#include "SaveLoadScreen.h"
#include "Cheats.h"
#include "Animated_ProgressBar.h"
#include "civ quotes.h"
#include "AIMMembers.h"
#include "BobbyRMailOrder.h"
#include "End_Game.h"
#include "DisplayCover.h"

#endif
