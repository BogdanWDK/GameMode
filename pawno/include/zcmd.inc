/**********************************
 *                                *
 *   @Author:      ZeeX           *
 *   @Version:     0.3.1          *
 *   @Released:    31/10/2009     *
 *                                *
 **********************************/

#if defined _zcmd_included
	#endinput
#endif	
#define _zcmd_included

#define MAX_FUNC_NAME (32)

#define COMMAND:%1(%2)          \
			forward cmd_%1(%2); \
			public cmd_%1(%2)		
			
#define CMD:%1(%2) \
			COMMAND:%1(%2)

#define command(%1,%2,%3) \
			COMMAND:%1(%2, %3)      
      
#define cmd(%1,%2,%3) \
			COMMAND:%1(%2, %3)

#if !defined isnull
	#define isnull(%1) \
				((!(%1[0])) || (((%1[0]) == '\1') && (!(%1[1]))))
#endif

#define ELEVATOR_SPEED      (5.0)   // Movement speed of the elevator.
#define DOORS_SPEED         (5.0)   // Movement speed of the doors.
#define ELEVATOR_WAIT_TIME  (5000)  // Time in ms that the elevator will wait in each floor before continuing with the queue.
#define X_DOOR_CLOSED       (1786.627685)
#define X_DOOR_R_OPENED     (1785.027685)
#define X_DOOR_L_OPENED     (1788.227685)
#define GROUND_Z_COORD      (14.511476)
#define ELEVATOR_OFFSET     (0.059523)
#define ELEVATOR_STATE_IDLE     (0)
#define ELEVATOR_STATE_WAITING  (1)
#define ELEVATOR_STATE_MOVING   (2)
#define INVALID_FLOOR           (-1)
#define DIALOG_ID           (874)// Be sure to give enough time for doors to open.
//===============
#define DIALOG_IDD           (877)
#define X_DOOR_CCLOSED       (-1951.603027)
#define X_DDOOR_CCLOSED     X_DOOR_CCLOSED + 1.6
#define X_DDOOR_R_OPENED     X_DOOR_CCLOSED - 1.6
#define GROUNDD_Z_COORD      (47.451492)
#define X_ELEVATOR_POS      (-1951.603027)
#define Y_ELEVATOR_POS      (636.418334)
#define         MAX_Z_FISH_THRESHOLD            4.0
#define         WATER_CHECK_RADIUS              5.0
#define ACCEL_RATE              0.03
#define CAMERA_MODE_NONE    	0
#define CAMERA_MODE_FLY     	1
#define MOVE_FORWARD    		1
#define MOVE_BACK       		2
#define MOVE_LEFT       		3
#define MOVE_RIGHT      		4
#define MOVE_FORWARD_LEFT       5
#define MOVE_FORWARD_RIGHT      6
#define MOVE_BACK_LEFT          7
#define MOVE_BACK_RIGHT         8
#define ARMEDBODY_USE_HEAVY_WEAPON (false)
#define SetPlayerHoldingObject(%1,%2,%3,%4,%5,%6,%7,%8,%9) SetPlayerAttachedObject(%1,MAX_PLAYER_ATTACHED_OBJECTS-1,%2,%3,%4,%5,%6,%7,%8,%9)
#define StopPlayerHoldingObject(%1) RemovePlayerAttachedObject(%1,MAX_PLAYER_ATTACHED_OBJECTS-1)
#define IsPlayerHoldingObject(%1) IsPlayerAttachedObjectSlotUsed(%1,MAX_PLAYER_ATTACHED_OBJECTS-1)
#define SCM SendClientMessage
#define COLOR_NICERED 0xFF0000FF
#define COLOR_LIGHTGREEN 0x9ACD32AA
#define COLOR_ALLDEPT 0xFF8282AA
#define CRISTIAN 0x0DC013AA
#define TEAM_BLUE_COLOR 0x8D8DFF00
#define TEAM_CYAN_COLOR 0xFF8282AA
#define COLOR_GRAD1 0x80FFFFC8
#define COLOR_CHAT1 0xF9B7FFAA
#define COLOR_CHAT2 0xE6A9ECAA
#define COLOR_ORANGE 0xFF9900AA
#define COLOR_CHAT3 0xC38EC7AA
#define COLOR_CHAT4 0xD2B9D3AA
#define COLOR_CHAT5 0xC6AEC7AA
#define COLOR_DBLUE 0x2641FEAA
#define COLOR_FADE1 0xE6E6E6E6
#define COLOR_FADE3 0xAAAAAAAA
#define COLOR_BLUE 0x2641FEAA
#define COLOR_FADE4 0x8C8C8C8C
#define COLOR_FADE5 0x6E6E6E6E
#define COLOR_PURPLE 0xC2A2DA00
#define COLOR_ADMIN_INFO 0x5CAD5CFF
#define COLOR_ERROR 0x5CAD5CFF
#define COLOR_FADE1 0xE6E6E6E6
#define COLOR_FADE2 0xC8C8C8C8
#define COLOR_YELLOW 0xFFFF0000
#define COLOR_RED 0xFF0000FF
#define COLOR_FADE3 0xAAAAAAAA
#define COLOR_FADE4 0x8C8C8C8C
#define COLOR_FADE5 0x6E6E6E6E
#define COLOR_GRAD 0xBFC0C2FF
#define COLOR_GRAD2 0xBFC0C200
#define COLOR_GRAD3 0xCBCCCEFF
#define COLOR_GRAD4 0xD8D8D8FF
#define COLOR_GRAD5 0xE3E3E3FF
#define COLOR_GRAD6 0xF0F0F0FF
#define COLOR_GREY 0xAFAFAF00
#define COLOR_GREEN 0x33AA33AA
#define COLOR_YELLOW2 0xF5DEB3AA
#define COLOR_YELLOW3 0xFFD633AA
#define COLOR_SERVER_GREEN 0x21DD00FF
#define COLOR_LIGHTBLUE 0x33CCFFAA
#define COLOR_LIGHTRED 0xFF6347AA
#define COLOR_LIGHTRED2 0xE63E3EFF
#define COLOR_SYN 0xB8DBFFFF
#define COLOR_SYN2 0xA9C4E4FF
#define COLOR_WHITE 0xFFFFFFFF
#define COLOR_LSPD 0x2641FEAA
#define COLOR_LVPD 0x2641FEAA
#define COLOR_SFPD 0x2641FEAA
#define COLOR_FBI 0x2641FEAA
#define COLOR_NG 0x1E519DAA
#define COLOR_PARAMEDICS 0xFF6347AA
#define COLOR_FACTION_CHAT 0x01FCFFC8
#define COLOR_RADIO_CHAT 0x8D8DFF00
#define TEAM_GROVE_COLOR 0x00D900C8
#define DIALOG_LOGIN 1
#define DIALOG_REGISTER 2
#define DIALOG_SEX 3
#define DIALOG_AGE 4
#define DIALOG_EMAIL 5
#define DIALOG_REGISTER_ORAS 6
#define DIALOG_REGISTER_FFINISH 0
#define ResetMoneyBar ResetPlayerMoney
#define UpdateMoneyBar GivePlayerMoney
#define ADMIN_SPEC_TYPE_NONE 0
#define ADMIN_SPEC_TYPE_PLAYER 1
#define ADMIN_SPEC_TYPE_VEHICLE 2
//===========culori factiuni====
#define TEAM_HIT_COLOR 0xFFFFFF00
#define color_0 0xFFFFFF88
#define color_1 0x0000FF88
#define color_2 0x2222DD88
#define color_3 0x00008088
#define color_4 0xEA6A1588
#define color_5 0x80004088
#define color_6 0x04CAFB88
#define color_7 0xEA6A1588
#define color_8 0xFFFFFF88
#define color_9 0xD5B32B88
#define color_10 0xF2DB0D88
#define color_11 0x00408088
#define color_12 0xEA6A1588
#define color_13 0xFF80C088
#define color_14 0xE204FB88
#define color_15 0x80FF8088
#define color_16 0xAE805188
#define color_17 0x2E1AE688
#define IntroMusic 1
#define KissFM 2
#define HOLDING(%0) \
	((newkeys & (%0)) == (%0))
#define RELEASED(%0) \
	(((newkeys & (%0)) != (%0)) && ((oldkeys & (%0)) == (%0)))

	
forward OnPlayerCommandReceived(playerid, cmdtext[]); 
forward OnPlayerCommandPerformed(playerid, cmdtext[], success); 

new Comenzi[MAX_PLAYERS];

static
	bool:zcmd_g_HasOPCS = false,
	bool:zcmd_g_HasOPCE = false;

#if defined FILTERSCRIPT
public OnFilterScriptInit()
{
	zcmd_g_HasOPCS = funcidx("OnPlayerCommandReceived") != -1;
	zcmd_g_HasOPCE = funcidx("OnPlayerCommandPerformed") != -1;
    return CallLocalFunction("zcmd_OnFilterScriptInit", "");
}

#if defined _ALS_OnFilterScriptInit
    #undef OnFilterScriptInit
#else
    #define _ALS_OnFilterScriptInit
#endif
#define OnFilterScriptInit zcmd_OnFilterScriptInit
forward zcmd_OnFilterScriptInit();

#else /*not a filterscript*/

public OnGameModeInit()
{
	zcmd_g_HasOPCS = funcidx("OnPlayerCommandReceived") != -1;
	zcmd_g_HasOPCE = funcidx("OnPlayerCommandPerformed") != -1;
	if (funcidx("zcmd_OnGameModeInit") != -1)
	{
		return CallLocalFunction("zcmd_OnGameModeInit", "");
	}	
	return 1;
}

#if defined _ALS_OnGameModeInit
    #undef OnGameModeInit
#else
    #define _ALS_OnGameModeInit
#endif
#define OnGameModeInit zcmd_OnGameModeInit
forward zcmd_OnGameModeInit();

#endif /*if defined FILTERSCRIPT*/

public OnPlayerCommandText(playerid, cmdtext[])
{
	if(Comenzi[playerid] > 3 && PlayerInfo[playerid][pAdmin] < 4)
	{
		Comenzi[playerid] ++;
		SendClientMessage(playerid,0xFB8004C8,"Fara Spam in comenzi!");
		return 1;
	}
    if (zcmd_g_HasOPCS && !CallLocalFunction("OnPlayerCommandReceived", "is", playerid, cmdtext))
    {
        return 1;
    }
    new
        pos,
        funcname[MAX_FUNC_NAME];
    while (cmdtext[++pos] > ' ') 
	{
		funcname[pos-1] = tolower(cmdtext[pos]); 
	}
	format(funcname, sizeof(funcname), "cmd_%s", funcname);
    while (cmdtext[pos] == ' ') pos++;
	if (!cmdtext[pos])
	{
		if (zcmd_g_HasOPCE)
		{
			return CallLocalFunction("OnPlayerCommandPerformed", "isi", playerid, cmdtext, CallLocalFunction(funcname, "is", playerid, "\1"));
		}
		return CallLocalFunction(funcname, "is", playerid, "\1");	
	}
	if (zcmd_g_HasOPCE)
	{
		return CallLocalFunction("OnPlayerCommandPerformed", "isi", playerid, cmdtext, CallLocalFunction(funcname, "is", playerid, cmdtext[pos]));
	}
	return CallLocalFunction(funcname, "is", playerid, cmdtext[pos]);
}

#if defined _ALS_OnPlayerCommandText
    #undef OnPlayerCommandText
#else
    #define _ALS_OnPlayerCommandText
#endif
#define OnPlayerCommandText zcmd_OnPlayerCommandText
forward zcmd_OnPlayerCommandText(playerid, cmdtext[]);