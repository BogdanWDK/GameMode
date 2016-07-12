// MySQL
#include <streamer>
new handle;
forward Update(playerid, type);
forward vUpdate(vehicleid, type);
forward dUpdate(vehicleid, type);
forward hUpdate(houseid, type);
forward sbUpdate(sbid, type);
forward bUpdate(bid, type);
forward rUpdate(ridd, type);
forward sUpdate(stuffsid, type);
forward zUpdate(Gang, type);
forward gUpdate(Gateid, type);

//==================servername
#define SERVERNAME YourServerName



#define pLevelx				1
#define pAdminx 			2
#define pHelperx			3
#define pCashx  			4
#define pAccountx			5
#define pEmailx  			6
#define pRegistredx			7
#define pTutorialx			8
#define pSexx				9
#define	pAgex				10
#define pPhoneNumberx		11
#define pPremiumAccountx	12
#define pBannedx		    13
#define pWarnsx 			14
#define pLeaderx			15
#define pMemberx			16
#define pRankx				17
#define pSkinx				18
#define pInteriorx			19
#define pIPx				20
#define pLastLoginx			21
#define pLoginDatex			22
#define pRespectx			23
#define pConnectTimex		24
#define pOriginx			25
#define pMutex				26
#define pCrimex				27
#define pKillx				28
#define pDeathx				29
#define pArrestedTimex		30
#define pLottox				31
#define pJob1x				32
#define pJob2x				33
#define pJailTimex			34
#define pJailx				35
#define pMaterialsx			36
#define pDrugsx				37
#define pPosXx				38
#define pPosYx				39
#define pPosZx				40
#define pHousex				41
#define pBizx				42
#define pCarLicx 			43
#define pFlyLicx 			44
#define pBoatLicx 			45
#define pFishLicx 			56
#define	pGun1x              57
#define	pGun2x              58 
#define	pGun3x     			59	          
#define	pGun4x              60 
#define	pGun5x              61 
#define	pGun6x              62
#define	pGun7x              63 
#define	pGun8x              64 
#define	pAmmo1x             65
#define	pAmmo2x             66 
#define	pAmmo3x             67
#define	pAmmo4x             68
#define	pAmmo5x             69 
#define	pAmmo6x             70 
#define	pAmmo7x             71 
#define	pAmmo8x             72   
#define	pPayDayx            73 
#define pPlayersx			75
#define pFuelx				76	
#define pSpawnx				77
#define	pCar1x              78   
#define	pCar2x              79
#define	pCar3x              80
#define	pCar4x              81
#define	pCar5x              82
#define	pCar6x              83
#define	pCar7x              84
#define	pCar8x              85 
#define	pSlotsx             86 
#define pWantedx			87	
#define	pFightStylex  	    89
#define	pFwarnx             90
#define	pPunishx            91
#define	pOnlinex            92
#define prpgonx			    93
#define pDetSkillx			94
#define pSexSkillx			95
#define pJackSkillx			96
#define pBoxSkillx			97
#define pNewsSkillx			98
#define pDrugsSkillx 		99		
#define pIphonex			100
#define pBateriex			101	
#define pGlassesx			102
#define pDecoderx			103
#define pServietax			104
#define pHairx				105
#define pCheiex				106
#define pCastix				107
#define pHotelx				108
#define pLeasingx			109
#define pPdSkinx			110
#define pCanistrax			111
#define pCipx				112
#define pWantedDeathsx		113	
#define pGPSx				114
#define pMarriedTox			115
#define pYenix				116
#define pCoinx				117
#define pDicex				118
#define pBombex				119
#define pGunLicx			120
#define pVariabilax			121
#define pCraciunx			122
#define pFishesx			123
#define pBiggestFishx		124
#define pHeadValuex			125
#define	pAchievement1x      126
#define	pAchievement3x      127 
#define	pAchievement2x      128 
#define	pAchievement4x      129
#define	pAchievement5x      130 
#define	pAchievement6x      131
#define	pAchievement7x      132
#define	pAchievement8x      133
#define	pAchievement9x      134
#define	pAchievement10x     135    
#define	pAchievement11x     136 
#define	pAchievement12x     137
#define	pAchievement13x     138
#define	pAchievement14x     139
#define	pAchievement15x     140
#define	pAchievement16x     141
#define	pAchievement17x     142
#define	pAchievement18x     143
#define	pAchievement19x     144
#define	pAchievement20x     145
#define pCDPlayerx			146	
#define pAmmoWorkx			147
#define pFireworksx			148
#define pLaserx				149
#define pMechSkillx			150
#define pCarTimex			151
#define pCeasx				152
#define pScarfx				153
#define pFuniex				155	
#define pLawSkillx			156	
#define pFishSkillx			157
#define	pCrimax				158
#define pVWx				159
#define pWinx				160
#define pLosesx				161

#define bIDx				1
#define bOwnedx				2
#define	bOwnerx				3
#define	bMessagex			4
#define	bExtortionx			5
#define	bEntranceXx			6
#define	bEntranceYx			7
#define	bEntranceZx			8
#define	bExitXx				9
#define	bExitYx				10
#define	bExitZx				11
#define	bLevelNeededx		12
#define	bBuyPricex			13
#define	bEntranceCostx		14	
#define	bTillx				15
#define	bLockedx			16
#define	bInteriorx			17
#define	bProductsx			18
#define	bMaxProductsx		19
#define	bPriceProdx			20
#define bIconx				21
	
#define sbIDx					1
#define sbOwnedx				2
#define sbOwnerx				3
#define sbNamex					4
#define sbCoOwnerx 				5
#define sbPosXx 				6
#define sbPosYx 				7
#define sbPosZx 				8	
#define sbLevelNeededx 			9
#define sbPricex 				10
#define sbEntracex 				11
#define sbTillx 				12
#define sbLockedx  				13
#define sbInteriorx 			14
#define sbProdusex 				15
#define sbMaxProdx 				16
#define sbPriceProdx 			17


#define rIDx					1
#define Ownerx					2
#define Ownedx					3
#define Lockedx					4
#define PosXx					5
#define PosYx					6
#define PosZx					7	
#define IntXx					8
#define IntYx					9
#define IntZx					10
#define Interiorx				11	


#define vCariDx 				1
#define vColor1x 				2
#define vColor2x 				3
#define vPricex 				4
#define vOwnerx 				5
#define vPosXx 					6
#define vPosYx 					7
#define vPosZx 					8
#define vPosAx	 				9
#define vPlatex 				10
#define vPaintJx 				11
#define vLockedx 				12
#define vCarCodex 				13
#define vOrex					14
#define vVodox					15
#define vTowedx 				16
#define trWeapon1x				17
#define trWeapon2x				18
#define trWeapon3x				19
#define trWeapon4x				20
#define trWeapon5x				21
#define trWeapon6x				22
#define trAmmo1x				23
#define trAmmo2x				24
#define trAmmo3x				25
#define trAmmo4x				26
#define trAmmo5x				27
#define trAmmo6x				28
#define tMedkitx				29
#define vVariabilax				30
#define vComponent0x			31
#define vComponent1x			32
#define vComponent2x			33
#define vComponent3x			34
#define vComponent4x            35
#define vComponent5x            36
#define vComponent6x            37
#define vComponent7x            38
#define vComponent8x            39
#define vComponent9x            40
#define vComponent10x           41
#define vComponent11x           42
#define vComponent12x           43
#define vComponent13x           44
#define vNeonx           		45
#define vLightsx           		46

#define hIDx                    1
#define hPosXx                  2
#define hPosYx                  3
#define hPosZx                  4
#define hPosX1x                 5
#define hPosY1x                 6
#define hPosZ1x                 7
#define hNamex                  8
#define hOwnerx                 9
#define hLocationx              10
#define hPasswordx              11
#define hValuex                 12
#define hStoragex               13
#define hWorldx                 14
#define hIntx             		15
#define hDogx                   16
#define hPrivacyx               17
#define hUpgradeLockx           18
#define hForSalex               19
#define hPricex                 20
#define hLockx                  21
#define hLevelx                 22
#define hProtection1x           23
#define hProtection2x           24
#define hProtection3x           25
#define hOwnedx					26


#define dCariDx 				1
#define dColor1x 				2
#define dColor2x 				3
#define dPricex 				4
#define dPosXx 					6
#define dPosYx 					7
#define dPosZx 					8
#define dPosAx	 				9
#define dModelx					10

#define TitelLosesx 			1
#define JackpotCasinox			2
#define JackpotChinax			3
#define JackpotFourDragonx		4
#define RecordPlayersx			5
#define JackpotCaligulax		6	
#define TitelWinsx			 	7
#define TitelNamex				8
#define ServerCharityx			9

#define zIDx					1
#define zOwnerx					2
#define zHourx					3
#define zColorx					4
#define zMinXx					5
#define zMinYx					6
#define zMaxXx					7
#define zMaxYx					8

#define gIDx					1
#define gPosXx					2
#define gPosYx					3
#define gPosZx					4
#define gRotXx					5
#define gRotYx					6
#define gRotZx					7
#define gFactionx				8
#define gCheiex					9
#define gModelx					10
#define gObiectx				11

#define MAX_ATMS 50
#define MAX_GANGZONES 50
#define MAX_HOUSES 400
#define MAX_SBIZ 20
#define MAX_BIZ 32
#define OwnedVeh(%0) 		ivCreated[%0]
#define DealerVeh(%0) 		iCreated[%0]
#define MAX_BUYABLE_VEH 	1500  // Change to the ammount of vehicles

enum Factions
{
	fID,
	fName[50],
	Float:fcX,
	Float:fcY,
	Float:fcZ,
	fMats,
	fDrugs,
	fBank
};

new DynamicFactions[20][Factions];


enum _DINFO
{
	dCariD,
	dModel,
	dColor1,
	dColor2,
	dPrice,
	Float:dPosX,
	Float:dPosY,
	Float:dPosZ,
	Float:dPosA,
}

new dInfo[100][_DINFO];

enum camcoord
{
	rID,		
	rOwner[123],			
	rOwned,		
	rLocked,			
	Float:rPosX,			
	Float:rPosY,			
	Float:rPosZ,				
	Float:rIntX,			
	Float:rIntY,			
	Float:rIntZ,		
	rInterior	
};
new CamInfo[18][camcoord];

enum spawned
{
	sID,
	Float:sPosX,
	Float:sPosY,
	Float:sPosZ,
	Float:sRotZ,
	sYNT,
	sVW
}
new SpawnInfo[18][spawned];

enum zoneinfos
{
	zID,
	zOwner,
	zHour,
	Float:zMinX,
	Float:zMinY, 
	Float:zMaxX, 
	Float:zMaxY,
	zColor
};
new GangInfo[MAX_GANGZONES][zoneinfos];


enum gatehouseinfo
{
	gID,
	Float:gPosX,
	Float:gPosY, 
	Float:gPosZ, 
	Float:gRotX,
	Float:gRotY,
	Float:gRotZ,
	gFaction,
	gCheie,
	gModel,
	gObiect
};
new GateInfo[MAX_HOUSES][gatehouseinfo];

enum _VINFO
{
	vCariD,
	vModel,
	vColor1,
	vColor2,
	vPrice,
	vOwner[MAX_PLAYER_NAME],
	Float:vPosX,
	Float:vPosY,
	Float:vPosZ,
	Float:vPosA,
	vPlate[32],
	vPaintJ,
	vLocked,
	vTowed,
	vCarCode,
	Float:vVodo,
	vOre,	
	trWeapon1,	
	trWeapon2,		
	trWeapon3,	
	trWeapon4,	
	trWeapon5,			
	trWeapon6,			
	trAmmo1,	
	trAmmo2,			
	trAmmo3,				
	trAmmo4,				
	trAmmo5,				
	trAmmo6,				
	tMedkit,				
	vVariabila,
	vComponent0,
	vComponent1,
	vComponent2,
	vComponent3,
	vComponent4,
	vComponent5,	
	vComponent6,		
	vComponent7,	
	vComponent8,
	vComponent9,
	vComponent10,
	vComponent11,
	vComponent12,
	vComponent13,
	vNeon,
	vLights
}

new vInfo[MAX_BUYABLE_VEH][_VINFO],
ivCreated[MAX_VEHICLES],
iCreated[MAX_VEHICLES],
Total_Veh_Created,
Total_Veh_Dealer,
Total_ATM,
Total_House_Created,
Total_Gang_Created,
Total_HouseGate_Created,
Total_Player_Vehicles[MAX_PLAYERS];
new	RecordPlayers;
new	JackpotCaligula;
new	JackpotFourDragon;
new	JackpotChina;
new	JackpotCasino;
new SCRIPT_VERSION[23];
new ServerCharity;
enum pBoxingStats
{
    TitelName[128],
    TitelWins,
    TitelLoses,
};
new Titel[pBoxingStats];

enum pInfo
{
	pPassword[128], pLevel, pAdmin, pHelper, pCash, pAccount, pEmail, pRegistred, pTutorial, pSex, pAge, pPhoneNumber, pPremiumAccount, pBanned, 
	pLeader, pMember, pRank, pSkin, pInterior, pIP, pLastLogin[100],pLoginDate[20],pRespect,pConnectTime,pOrigin[30],pMute,pCrime,
	pKill,pDeath,pArrestedTime,pLotto,pJob1,pJob2,pJailTime,pJail,pMaterials,pDrugs,Float:pPosX,Float:pPosY,Float:pPosZ,pHouse,pBiz,pCarLic,
	pFlyLic,pBoatLic,pFishLic,pGunLic,pPayDay,pGun1,pGun2,pGun3,pGun4,pGun5,pGun6,pGun7,pGun8,pAmmo1,pAmmo2,pAmmo3,pAmmo4,pAmmo5,pAmmo6,pAmmo7,pAmmo8,
	pWarns,pPlayers,pFuel,pSpawn,pCar1,pCar2,pCar3,pCar4,pCar5,pCar6,pCar7,pCar8,pSlots,pWanted,pFightStyle,pFwarn,pPunish,pOnline,
	prpgon,pDetSkill,pSexSkill,pJackSkill,pBoxSkill,pNewsSkill,pDrugsSkill,pIphone,pBaterie,pGlasses,pDecoder,pServieta,pHair,pCheie,pCasti,
	pHotel,pLeasing,pPdSkin,pCanistra,pCip,pWantedDeaths,pGPS,pMarriedTo,pYeni,pradio,pCoin,pDice,pRadar,pBombe,pVariabila,pCraciun,pFishes,pBiggestFish,
	pHeadValue,pAchievement1,pAchievement2,pAchievement3,pAchievement4,pAchievement5,pAchievement6,pAchievement7,pAchievement8,pAchievement9,pAchievement10,
	pAchievement11,pAchievement12,pAchievement13,pAchievement14,pAchievement15,pAchievement16,pAchievement17,pAchievement18,pAchievement19,pAchievement20,
	pCDPlayer,pLaser,pFireworks,pAmmoWork,pMechSkill,pCarTime,pCeas,pFunie,pScarf,pLawSkill,pFishSkill,pCrima[20],pVW,pWin,pLoses
};

	
enum sbInfo
{
	sbID,
	sbOwned,
	sbOwner[MAX_PLAYER_NAME],
	sbName[MAX_PLAYER_NAME],
	sbCoOwner[MAX_PLAYER_NAME],
	Float:sbPosX,
	Float:sbPosY,
	Float:sbPosZ,
	sbLevelNeeded,
	sbPrice,
	sbEntrace,
	sbTill,
	sbLocked,
	sbInterior,
	sbProduse,
	sbMaxProd,
	sbPriceProd
};
new SBizzInfo[MAX_SBIZ][sbInfo];	
	
	
enum bInfo
{
	bID,
    bOwned,
	bOwner[64],
	bMessage[128],
	bExtortion[MAX_PLAYER_NAME],
	Float:bEntranceX,
	Float:bEntranceY,
	Float:bEntranceZ,
	Float:bExitX,
	Float:bExitY,
	Float:bExitZ,
	bLevelNeeded,
	bBuyPrice,
	bEntranceCost,
	bTill,
	bLocked,
	bInterior,
	bProducts,
	bMaxProducts,
	bPriceProd,
	bIcon
};
new BizzInfo[MAX_BIZ][bInfo];
	
enum atmE 
{
	atmid,
	Float:ATMPosX,
	Float:ATMPosY,
	Float:ATMPosZ,
	Float:ATMPosRot,
	ObjectId,
	Text3D:TextLabel
}
 new atmVariables[MAX_ATMS][atmE];
 
 
 enum hInfo
{
	hID,
	Float:hPosX,
	Float:hPosY,
	Float:hPosZ,
	Float:hPosX1,
	Float:hPosY1,
	Float:hPosZ1,
	//Float:hPosA,
	hName[100],
	hOwner[MAX_PLAYER_NAME],
	hLocation[30],
	hPassword[15],
	hCreator,
	hValue,
	hStorage,
	hWorld,
	hInt,
	//hSInt,
	hDog,
	hCamera,
	hPrivacy,
	hUpgradeLock,
	hForSale,
	hPrice,
	hLock,
	hLevel,
	hOwned,
	hProtection1,
	hProtection2,
	hProtection3
};

new HouseInfo[MAX_HOUSES][hInfo];

new PlayerInfo[MAX_PLAYERS][pInfo];
new rows, fields;
new temp[256];

public bUpdate(bid, type)
{
	new string[256];
	switch(type)
	{
	    case bIDx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `ID`='%d' WHERE `ID`='%d'",BizzInfo[bid][bID],bid);
			mysql_query(handle, string);
	    }
	    case bOwnedx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `Owned`='%d' WHERE `ID`='%d'",BizzInfo[bid][bOwned],bid);
			mysql_query(handle, string);
	    }
	    case bOwnerx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `Owner`='%s' WHERE `ID`='%d'",BizzInfo[bid][bOwner],bid);
			mysql_query(handle, string);
	    }
		case bMessagex:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `Message`='%s' WHERE `ID`='%d'",BizzInfo[bid][bMessage],bid);
			mysql_query(handle, string);
	    }
	    case bExtortionx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `Extortion`='%s' WHERE `ID`='%d'",BizzInfo[bid][bExtortion],bid);
			mysql_query(handle, string);
	    }
	    case bEntranceXx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `EntranceX`='%f' WHERE `ID`='%d'",BizzInfo[bid][bEntranceX],bid);
			mysql_query(handle, string);
	    }
	    case bEntranceYx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `EntranceY`='%f' WHERE `ID`='%d'",BizzInfo[bid][bEntranceY],bid);
			mysql_query(handle, string);
	    }
	    case bEntranceZx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `EntranceZ`='%f' WHERE `ID`='%d'",BizzInfo[bid][bEntranceZ],bid);
			mysql_query(handle, string);
	    }
	    case bExitXx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `ExitX`='%f' WHERE `ID`='%d'",BizzInfo[bid][bExitX],bid);
			mysql_query(handle, string);
	    }
	    case bExitYx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `ExitY`='%f' WHERE `ID`='%d'",BizzInfo[bid][bExitY],bid);
			mysql_query(handle, string);
	    }
	    case bExitZx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `ExitZ`='%f' WHERE `ID`='%d'",BizzInfo[bid][bExitZ],bid);
			mysql_query(handle, string);
	    }
	    case bLevelNeededx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `LevelNeeded`='%d' WHERE `ID`='%d'",BizzInfo[bid][bLevelNeeded],bid);
			mysql_query(handle, string);
	    }
	    case bBuyPricex:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `BuyPrice`='%d' WHERE `ID`='%d'",BizzInfo[bid][bBuyPrice],bid);
			mysql_query(handle, string);
	    }
	    case bEntranceCostx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `EntranceCost`='%d' WHERE `ID`='%d'",BizzInfo[bid][bEntranceCost],bid);
			mysql_query(handle, string);
	    }
	    case bTillx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `Till`='%d' WHERE `ID`='%d'",BizzInfo[bid][bTill],bid);
			mysql_query(handle, string);
	    }
	    case bLockedx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `Locked`='%d' WHERE `ID`='%d'",BizzInfo[bid][bLocked],bid);
			mysql_query(handle, string);
	    }
	    case bInteriorx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `Interior`='%d' WHERE `ID`='%d'",BizzInfo[bid][bInterior],bid);
			mysql_query(handle, string);
	    }
	    case bProductsx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `Products`='%d' WHERE `ID`='%d'",BizzInfo[bid][bProducts],bid);
			mysql_query(handle, string);
	    }
	    case bMaxProductsx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `MaxProducts`='%d' WHERE `ID`='%d'",BizzInfo[bid][bMaxProducts],bid);
			mysql_query(handle, string);
	    }
	    case bPriceProdx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `PriceProd`='%d' WHERE `ID`='%d'",BizzInfo[bid][bPriceProd],bid);
			mysql_query(handle, string);
	    }
		case bIconx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `biz` SET `Icon`='%d' WHERE `ID`='%d'",BizzInfo[bid][bIcon],bid);
			mysql_query(handle, string);
	    }
 	}
	return 1;
}

public sbUpdate(sbid, type)
{
	new string[256];
	switch(type)
	{
	    case sbIDx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `ID`='%d' WHERE `sbID`='%d'",SBizzInfo[sbid][sbID],sbid);
			mysql_query(handle, string);
	    }
	    case sbOwnedx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `Owned`='%d' WHERE `sbID`='%d'",SBizzInfo[sbid][sbOwned],sbid);
			mysql_query(handle, string);
	    }
	    case sbOwnerx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `Owner`='%s' WHERE `sbID`='%d'",SBizzInfo[sbid][sbOwner],sbid);
			mysql_query(handle, string);
	    }
	    case sbNamex:
	    {		
			mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `Name`='%s' WHERE `sbID`='%d'",SBizzInfo[sbid][sbName],sbid);
			mysql_query(handle, string);
	    }
	    case sbCoOwnerx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `CoOwner`='%s' WHERE `sbID`='%d'",SBizzInfo[sbid][sbCoOwner],sbid);
			mysql_query(handle, string);
	    }
	    case sbPosXx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `PosX`='%f' WHERE `sbID`='%d'",SBizzInfo[sbid][sbPosX],sbid);
			mysql_query(handle, string);
	    }
	    case sbPosYx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `PosY`='%f' WHERE `sbID`='%d'",SBizzInfo[sbid][sbPosY],sbid);
			mysql_query(handle, string);
	    }
	    case sbPosZx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `PosZ`='%f' WHERE `sbID`='%d'",SBizzInfo[sbid][sbPosZ],sbid);
			mysql_query(handle, string);
	    }
	    case sbLevelNeededx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `LevelNeeded`='%d' WHERE `sbID`='%d'",SBizzInfo[sbid][sbLevelNeeded],sbid);
			mysql_query(handle, string);
	    }
	    case sbPricex:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `Price`='%d' WHERE `sbID`='%d'",SBizzInfo[sbid][sbPrice],sbid);
			mysql_query(handle, string);
	    }
	    case sbEntracex:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `Entrace`='%d' WHERE `sbID`='%d'",SBizzInfo[sbid][sbEntrace],sbid);
			mysql_query(handle, string);
	    }
	    case sbTillx:
	    {
			mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `Till`='%d' WHERE `sbID`='%d'",SBizzInfo[sbid][sbTill],sbid);
			mysql_query(handle, string);
	    }
	    case sbLockedx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `Locked`='%d' WHERE `sbID`='%d'",SBizzInfo[sbid][sbLocked],sbid);
			mysql_query(handle, string);
	    }
	    case sbInteriorx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `Interior`='%d' WHERE `sbID`='%d'",SBizzInfo[sbid][sbInterior],sbid);
			mysql_query(handle, string);
	    }
	    case sbProdusex:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `Produse`='%d' WHERE `sbID`='%d'",SBizzInfo[sbid][sbProduse],sbid);
			mysql_query(handle, string);
	    }
	    case sbMaxProdx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `MaxProd`='%d' WHERE `sbID`='%d'",SBizzInfo[sbid][sbMaxProd],sbid);
			mysql_query(handle, string);
	    }
	    case sbPriceProdx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `sbiz` SET `PriceProd`='%d' WHERE `sbID`='%d'",SBizzInfo[sbid][sbPriceProd],sbid);
			mysql_query(handle, string);
	    }
 	}
	return 1;
}

public hUpdate(houseid, type)
{
	new string[256];
	switch(type)
	{
	    case hIDx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `hID`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hID],houseid);
			mysql_query(handle, string);
	    }
	    case hPosXx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `PosX`='%f' WHERE `hID`='%d'",HouseInfo[houseid][hPosX],houseid);
			mysql_query(handle, string);
	    }
	    case hPosYx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `PosY`='%f' WHERE `hID`='%d'",HouseInfo[houseid][hPosY],houseid);
			mysql_query(handle, string);
	    }
	    case hPosZx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `PosZ`='%f' WHERE `hID`='%d'",HouseInfo[houseid][hPosZ],houseid);
			mysql_query(handle, string);
	    }
	    case hPosX1x:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `PosX1`='%f' WHERE `hID`='%d'",HouseInfo[houseid][hPosX1],houseid);
			mysql_query(handle, string);
	    }
	    case hPosY1x:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `PosY1`='%f' WHERE `hID`='%d'",HouseInfo[houseid][hPosY1],houseid);
			mysql_query(handle, string);
	    }
	    case hPosZ1x:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `PosZ1`='%f' WHERE `hID`='%d'",HouseInfo[houseid][hPosZ1],houseid);
			mysql_query(handle, string);
	    }
	    case hNamex:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Name`='%s' WHERE `hID`='%d'",HouseInfo[houseid][hName],houseid);
			mysql_query(handle, string);
	    }
	    case hOwnerx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Owner`='%s' WHERE `hID`='%d'",HouseInfo[houseid][hOwner],houseid);
			mysql_query(handle, string);
	    }
	    case hLocationx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Location`='%s' WHERE `hID`='%d'",HouseInfo[houseid][hLocation],houseid);
			mysql_query(handle, string);
	    }
	    case hPasswordx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Password`='%s' WHERE `hID`='%d'",HouseInfo[houseid][hPassword],houseid);
			mysql_query(handle, string);
	    }
	    case hValuex:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Value`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hValue],houseid);
			mysql_query(handle, string);
	    }
	    case hStoragex:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Storage`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hStorage],houseid);
			mysql_query(handle, string);
	    }
	    case hWorldx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `World`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hWorld],houseid);
			mysql_query(handle, string);
	    }
	    case hIntx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Interior`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hInt],houseid);
			mysql_query(handle, string);
	    }
	    case hDogx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Dog`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hDog],houseid);
			mysql_query(handle, string);
	    }
	    case hPrivacyx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Privacy`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hPrivacy],houseid);
			mysql_query(handle, string);
	    }
        case hUpgradeLockx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `UpgradeLock`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hUpgradeLock],houseid);
			mysql_query(handle, string);
	    }
	    case hForSalex:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `ForSale`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hForSale],houseid);
			mysql_query(handle, string);
	    }
	    case hPricex:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Price`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hPrice],houseid);
			mysql_query(handle, string);
	    }
	    case hLockx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Lock`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hLock],houseid);
			mysql_query(handle, string);
	    }
	    case hLevelx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Level`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hLevel],houseid);
			mysql_query(handle, string);
	    }
		case hOwnedx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Owned`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hOwned],houseid);
			mysql_query(handle, string);
	    }
	    case hProtection1x:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Alarma`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hProtection1],houseid);
			mysql_query(handle, string);
	    }
        case hProtection2x:
	    {
			mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Camera`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hProtection2],houseid);
   			mysql_query(handle, string);
	    }
	    case hProtection3x:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `houses` SET `Caine`='%d' WHERE `hID`='%d'",HouseInfo[houseid][hProtection3],houseid);
			mysql_query(handle, string);
	    }
	}
	return 1;
}


	
public dUpdate(vehicleid, type)
{
	new string[256];
	switch(type)
	{
	    case dCariDx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `dealership` SET `CarID`='%d' WHERE `CarID`='%d'",dInfo[vehicleid][dCariD],dInfo[vehicleid][dCariD]);
			mysql_query(handle, string);
	    }
		case dModelx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `dealership` SET `Model`='%d' WHERE `CarID`='%d'",dInfo[vehicleid][dModel],dInfo[vehicleid][dCariD]);
			mysql_query(handle, string);
	    }
	    case dColor1x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `dealership` SET `Color1`='%d' WHERE `CarID`='%d'",dInfo[vehicleid][dColor1],dInfo[vehicleid][dCariD]);
			mysql_query(handle, string);
	    }
	    case dColor2x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `dealership` SET `Color2`='%d' WHERE `CarID`='%d'",dInfo[vehicleid][dColor2],dInfo[vehicleid][dCariD]);
			mysql_query(handle, string);
	    }
	    case dPricex:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `dealership` SET `Price`='%d' WHERE `CarID`='%d'",dInfo[vehicleid][dPrice],dInfo[vehicleid][dCariD]);
			mysql_query(handle, string);
	    }
	    case dPosXx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `dealership` SET `PosX`='%.2f' WHERE `CarID`='%d'",dInfo[vehicleid][dPosX],dInfo[vehicleid][dCariD]);
			mysql_query(handle, string);
	    }
	    case dPosYx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `dealership` SET `PosY`='%.2f' WHERE `CarID`='%d'",dInfo[vehicleid][dPosY],dInfo[vehicleid][dCariD]);
			mysql_query(handle, string);
	    }
	    case dPosZx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `dealership` SET `PosZ`='%.2f' WHERE `CarID`='%d'",dInfo[vehicleid][dPosZ],dInfo[vehicleid][dCariD]);
			mysql_query(handle, string);
	    }
	    case dPosAx:
	    {
	        mysql_format(handle, string, sizeof(string),"UPDATE `dealership` SET `PosA`='%.2f' WHERE `CarID`='%d'",dInfo[vehicleid][dPosA],dInfo[vehicleid][dCariD]);
			mysql_query(handle, string);
	    }
	}
}
	
public vUpdate(vehicleid, type)
{
	new string[256];
	switch(type)
	{
	    case vCariDx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `CarID`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vCariD],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vOrex:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Zile`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vOre],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
	    case vColor1x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Color1`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vColor1],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
	    case vColor2x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Color2`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vColor2],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vCarCodex:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Carcode`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vCarCode],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vVodox:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `KM`='%f' WHERE `CarID`='%d'",vInfo[vehicleid][vVodo],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
	    case vPricex:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Price`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vPrice],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
	    case vOwnerx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Owner`='%s' WHERE `CarID`='%d'",vInfo[vehicleid][vOwner],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
	    case vPosXx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `vPosX`='%.2f' WHERE `CarID`='%d'",vInfo[vehicleid][vPosX],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
	    case vPosYx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `vPosY`='%.2f' WHERE `CarID`='%d'",vInfo[vehicleid][vPosY],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
	    case vPosZx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `vPosZ`='%.2f' WHERE `CarID`='%d'",vInfo[vehicleid][vPosZ],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
	    case vPosAx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `vPosA`='%.2f' WHERE `CarID`='%d'",vInfo[vehicleid][vPosA],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
	    case vPlatex:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Plate`='%s' WHERE `CarID`='%d'",vInfo[vehicleid][vPlate],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
	    case vPaintJx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `PaintJ`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vPaintJ],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
	    case vLockedx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Locked`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vLocked],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
	    case vTowedx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Towed`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vTowed],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case trWeapon1x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Weapon1`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][trWeapon1],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case trWeapon2x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Weapon2`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][trWeapon2],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case trWeapon3x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Weapon3`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][trWeapon3],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case trWeapon4x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Weapon4`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][trWeapon4],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case trWeapon5x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Weapon5`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][trWeapon5],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case trWeapon6x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Weapon6`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][trWeapon6],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case trAmmo1x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Ammo1`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][trAmmo1],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case trAmmo2x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Ammo2`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][trAmmo2],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case trAmmo3x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Ammo3`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][trAmmo3],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case trAmmo4x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Ammo4`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][trAmmo4],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case trAmmo5x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Ammo5`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][trAmmo5],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case trAmmo6x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Ammo6`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][trAmmo6],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case tMedkitx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `FirstAid`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][tMedkit],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vVariabilax:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Variabila`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vVariabila],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent0x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Wheels`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent0],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent1x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Nitro`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent1],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent2x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `hydraulics`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent2],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent3x:
	    {
	      	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Spoiler`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent3],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent4x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Hood`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent4],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent5x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Roof`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent5],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent6x:
	    {
	      	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `SideSkirts`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent6],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent7x:
	    {
			mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Lamps`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent7],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent8x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Exhaust`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent8],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent9x:
	    {

	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Stereo`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent9],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent10x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `FrontBumper`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent10],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent11x:
	    {
   			mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `RearBumper`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent11],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent12x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `RightVent`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent12],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vComponent13x:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `LeftVent`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vComponent13],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vNeonx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Neon`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vNeon],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	    }
		case vLightsx:
	    {
 	       	mysql_format(handle, string, sizeof(string),"UPDATE `vehicles` SET `Lights`='%d' WHERE `CarID`='%d'",vInfo[vehicleid][vLights],vInfo[vehicleid][vCariD]);
			mysql_query(handle, string);
	   	}
	}
	return 1;
}




public gUpdate(Gateid, type)
{			
	new string[256];
	switch(type)
	{	
		case gIDx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `housegates` SET `ID`='%d' WHERE `ID`='%d'",GateInfo[Gateid][gID],GateInfo[Gateid][gID]);
			mysql_query(handle, string);
	    }
		case gPosXx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `housegates` SET `PosX`='%f' WHERE `ID`='%d'",GateInfo[Gateid][gPosX],GateInfo[Gateid][gID]);
			mysql_query(handle, string);
	    }
		case gPosYx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `housegates` SET `PosY`='%f' WHERE `ID`='%d'",GateInfo[Gateid][gPosY],GateInfo[Gateid][gID]);
			mysql_query(handle, string);
	    }
		case gPosZx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `housegates` SET `PosZ`='%f' WHERE `ID`='%d'",GateInfo[Gateid][gPosZ],GateInfo[Gateid][gID]);
			mysql_query(handle, string);
	    }
		case gRotXx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `housegates` SET `RotX`='%f' WHERE `ID`='%d'",GateInfo[Gateid][gRotX],GateInfo[Gateid][gID]);
			mysql_query(handle, string);
	    }
		case gRotYx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `housegates` SET `RotY`='%f' WHERE `ID`='%d'",GateInfo[Gateid][gRotY],GateInfo[Gateid][gID]);
			mysql_query(handle, string);
	    }
		case gRotZx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `housegates` SET `RotZ`='%f' WHERE `ID`='%d'",GateInfo[Gateid][gRotZ],GateInfo[Gateid][gID]);
			mysql_query(handle, string);
	    }
		case gFactionx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `housegates` SET `Faction`='%d' WHERE `ID`='%d'",GateInfo[Gateid][gFaction],GateInfo[Gateid][gID]);
			mysql_query(handle, string);
	    }
		case gCheiex:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `housegates` SET `Cheie`='%d' WHERE `ID`='%d'",GateInfo[Gateid][gCheie],GateInfo[Gateid][gID]);
			mysql_query(handle, string);
	    }
		case gModelx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `housegates` SET `Model`='%d' WHERE `ID`='%d'",GateInfo[Gateid][gModel],GateInfo[Gateid][gID]);
			mysql_query(handle, string);
	    }
		case gObiectx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `housegates` SET `Obiect`='%d' WHERE `ID`='%d'",GateInfo[Gateid][gObiect],GateInfo[Gateid][gID]);
			mysql_query(handle, string);
	    }
	}
	return 1;
}

public zUpdate(Gang, type)
{			
	new string[256];
	switch(type)
	{	
		case zIDx:
	    {
	       	mysql_format(handle, string, sizeof(string),"UPDATE `gangzone` SET `ID`='%d' WHERE `ID`='%d'",GangInfo[Gang][zID],GangInfo[Gang][zID]);
			mysql_query(handle, string);
	    }
		case zOwnerx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `gangzone` SET `Owner`='%d' WHERE `ID`='%d'",GangInfo[Gang][zOwner],GangInfo[Gang][zID]);
			mysql_query(handle, string);
	    }
		case zHourx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `gangzone` SET `Hour`='%d' WHERE `ID`='%d'",GangInfo[Gang][zHour],GangInfo[Gang][zID]);
			mysql_query(handle, string);
	    }	
		case zColorx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `gangzone` SET `Color`='%d' WHERE `ID`='%d'",GangInfo[Gang][zColor],GangInfo[Gang][zID]);
			mysql_query(handle, string);
	    }	
		case zMinXx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `gangzone` SET `MinX`='%f' WHERE `ID`='%d'",GangInfo[Gang][zMinX],GangInfo[Gang][zID]);
			mysql_query(handle, string);
	    }	
		case zMinYx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `gangzone` SET `MinY`='%f' WHERE `ID`='%d'",GangInfo[Gang][zMinY],GangInfo[Gang][zID]);
			mysql_query(handle, string);
	    }	
		case zMaxXx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `gangzone` SET `MaxX`='%f' WHERE `ID`='%d'",GangInfo[Gang][zMaxX],GangInfo[Gang][zID]);
			mysql_query(handle, string);
	    }	
		case zMaxYx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `gangzone` SET `MaxY`='%f' WHERE `ID`='%d'",GangInfo[Gang][zMaxY],GangInfo[Gang][zID]);
			mysql_query(handle, string);
	    }	
 	}
	return 1;
}

public sUpdate(stuffsid, type)
{			
	new string[256];
	switch(type)
	{	
	
		case ServerCharityx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `stuff` SET `Charity`='%d' WHERE `stufid`='0'",ServerCharity);
			mysql_query(handle, string);
	    }	
		case RecordPlayersx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `stuff` SET `RecordPlayers`='%d' WHERE `stufid`='0'",RecordPlayers);
			mysql_query(handle, string);
	    }			
		case JackpotFourDragonx:
		{
			mysql_format(handle, string, sizeof(string), "UPDATE `stuff` SET `JackpotFour`='%d' WHERE `stufid`='0'",Titel[TitelLoses]);
			mysql_query(handle, string);
		}
		case JackpotChinax:
		{
			mysql_format(handle, string, sizeof(string), "UPDATE `stuff` SET `JackpotCh`='%d' WHERE `stufid`='0'",Titel[TitelLoses]);
			mysql_query(handle, string);
		}
		case JackpotCasinox:
		{
			mysql_format(handle, string, sizeof(string), "UPDATE `stuff` SET `JackpotCas`='%d' WHERE `stufid`='0'",Titel[TitelLoses]);
			mysql_query(handle, string);
		}
		case JackpotCaligulax:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `stuff` SET `JackpotCaligula`='%d' WHERE `stufid`='0'",JackpotCaligula);
			mysql_query(handle, string);
	    }
		case TitelWinsx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `stuff` SET `BoxWin`='%s' WHERE `stufid`='0'",Titel[TitelWins]);
			mysql_query(handle, string);
	    }	
		case TitelNamex:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `stuff` SET `BoxName`='%d' WHERE `stufid`='0'",Titel[TitelName]);
			mysql_query(handle, string);
	    }			
		case TitelLosesx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `stuff` SET `Boxloss`='%d' WHERE `stufid`='0'",Titel[TitelLoses]);
			mysql_query(handle, string);
	    }
 	}
	return 1;
}



public rUpdate(ridd, type)
{
	new string[256];
	switch(type)
	{	
	    case rIDx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `roomhotel` SET `ID`='%d' WHERE `ID`='%d'",CamInfo[ridd][rID],ridd);
			mysql_query(handle, string);
	    }
	    case Ownerx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `roomhotel` SET `Owner`='%s' WHERE `ID`='%d'",CamInfo[ridd][rOwner],ridd);
			mysql_query(handle, string);
	    }
	    case Ownedx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `roomhotel` SET `Owned`='%d' WHERE `ID`='%d'",CamInfo[ridd][rOwned],ridd);
			mysql_query(handle, string);
	    }
	    case Lockedx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `roomhotel` SET `Locked`='%d' WHERE `ID`='%d'",CamInfo[ridd][rLocked],ridd);
			mysql_query(handle, string);
	    }
		case PosXx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `roomhotel` SET `PosX`='%f' WHERE `ID`='%d'",CamInfo[ridd][rPosX],ridd);
			mysql_query(handle, string);
	    }
		case PosYx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `roomhotel` SET `PosY`='%f' WHERE `ID`='%d'",CamInfo[ridd][rPosY],ridd);
			mysql_query(handle, string);
	    }
		case PosZx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `roomhotel` SET `PosZ`='%f' WHERE `ID`='%d'",CamInfo[ridd][rPosZ],ridd);
			mysql_query(handle, string);
	    }
		case IntXx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `roomhotel` SET `IntX`='%f' WHERE `ID`='%d'",CamInfo[ridd][rIntX],ridd);
			mysql_query(handle, string);
	    }
		case IntYx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `roomhotel` SET `IntY`='%f' WHERE `ID`='%d'",CamInfo[ridd][rIntY],ridd);
			mysql_query(handle, string);
	    }
		case IntZx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `roomhotel` SET `IntZ`='%f' WHERE `ID`='%d'",CamInfo[ridd][rIntZ],ridd);
			mysql_query(handle, string);
	    }		
		case Interiorx:
	    {
	        mysql_format(handle, string, sizeof(string), "UPDATE `roomhotel` SET `Interior`='%d' WHERE `ID`='%d'",CamInfo[ridd][rInterior],ridd);
			mysql_query(handle, string);
	    }
		
 	}
	return 1;
}

public Update(playerid, type)
{
	if(IsPlayerConnected(playerid))
	{
		new string[256];
		new playerName[MAX_PLAYER_NAME];
		GetPlayerName(playerid, playerName, sizeof(playerName));
		{
			switch(type)
			{
				case pLevelx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Level`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pLevel], playerName);
					mysql_query(handle, string);
				}
				case pBombex:				
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Bombe`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pBombe], playerName);
					mysql_query(handle, string);
				}
				case pWantedDeathsx:				
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `WantedDeaths`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pWantedDeaths], playerName);
					mysql_query(handle, string);
				}
				case pCoinx:				
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Coin`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pCoin], playerName);
					mysql_query(handle, string);
				}
				case pGunLicx:			
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `GunLic`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pGunLic], playerName);
					mysql_query(handle, string);
				}
				case pDicex:				
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Dice`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pDice], playerName);
					mysql_query(handle, string);
				}
				case pAdminx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `AdminLevel`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pAdmin], playerName);
					mysql_query(handle, string);
				}
				case pFightStylex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `FightStyle`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pFightStyle], playerName);
					mysql_query(handle, string);
				}
				case pGPSx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `GPS`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pGPS], playerName);
					mysql_query(handle, string);
				}	
				case pCipx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Cip`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pCip], playerName);
					mysql_query(handle, string);
				}	
				case pMarriedTox:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `MarriedTo`='%e' WHERE `username`='%e'", PlayerInfo[playerid][pMarriedTo], playerName);
					mysql_query(handle, string);
				}	
				case pCanistrax:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Canistra`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pCanistra], playerName);
					mysql_query(handle, string);
				}	
				case pPdSkinx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `PdSkin`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pPdSkin], playerName);
					mysql_query(handle, string);
				}	
				case pLeasingx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Leasing`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pLeasing], playerName);
					mysql_query(handle, string);
				}	
				case pHotelx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Hotel`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pHotel], playerName);
					mysql_query(handle, string);
				}	
				case pCastix:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Casti`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pCasti], playerName);
					mysql_query(handle, string);
				}	
				case pCheiex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Cheie`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pCheie], playerName);
					mysql_query(handle, string);
				}				
				case pHairx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Hair`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pHair], playerName);
					mysql_query(handle, string);
				}
				case pServietax:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Servieta`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pServieta], playerName);
					mysql_query(handle, string);
				}					
				case pGlassesx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Glasses`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pGlasses], playerName);
					mysql_query(handle, string);
				}	
				case pDecoderx:	
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Decoder`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pDecoder], playerName);
					mysql_query(handle, string);
				}				
				case pFwarnx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Fwarn`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pFwarn], playerName);
					mysql_query(handle, string);
				}
				case pPunishx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Punish`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pPunish], playerName);
					mysql_query(handle, string);
				}
				case pFuniex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Funie`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pFunie], playerName);
					mysql_query(handle, string);
				}				
				case pScarfx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Scarf`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pScarf], playerName);
					mysql_query(handle, string);
				}
				case pBateriex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Baterie`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pBaterie], playerName);
					mysql_query(handle, string);
				}
				case pIphonex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Iphone`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pIphone], playerName);
					mysql_query(handle, string);
				}				
				case pOnlinex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Online`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pOnline], playerName);
					mysql_query(handle, string);
				}
				case prpgonx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `rpgon`='%d' WHERE `username`='%e'", PlayerInfo[playerid][prpgon], playerName);
					mysql_query(handle, string);
				}
				case pLosesx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Loses`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pLoses], playerName);
					mysql_query(handle, string);
				}
				case pWinx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Win`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pWin], playerName);
					mysql_query(handle, string);
				}
				case pSpawnx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Spawn`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pSpawn], playerName);
					mysql_query(handle, string);
				}
				case pDetSkillx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `DetSkill`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pDetSkill], playerName);
					mysql_query(handle, string);
				}
				case pSexSkillx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `SexSkill`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pSexSkill], playerName);
					mysql_query(handle, string);
				}
				case pJackSkillx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `JackSkill`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pJackSkill], playerName);
					mysql_query(handle, string);
				}
				case pBoxSkillx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `BoxSkill`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pBoxSkill], playerName);
					mysql_query(handle, string);
				}
				case pYenix:				
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Yeni`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pYeni], playerName);
					mysql_query(handle, string);
				}
				case pNewsSkillx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `NewsSkill`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pNewsSkill], playerName);
					mysql_query(handle, string);
				}
				case pDrugsSkillx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `DrugsSkill`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pDrugsSkill], playerName);
					mysql_query(handle, string);
				}
				case pWantedx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Wanted`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pWanted], playerName);
					mysql_query(handle, string);
				}
				case pPayDayx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `PayDay`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pPayDay], playerName);
					mysql_query(handle, string);
				}
				case pMaterialsx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Materials`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pMaterials], playerName);
					mysql_query(handle, string);
				}
				case pFuelx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Fuel`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pFuel], playerName);
					mysql_query(handle, string);
				}
				case pCarTimex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `CarTime`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pCarTime], playerName);
					mysql_query(handle, string);
				}		
				case pSlotsx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Slots`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pSlots], playerName);
					mysql_query(handle, string);
				}
				case pWarnsx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Warns`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pWarns], playerName);
					mysql_query(handle, string);
				}
				case pPlayersx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Players`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pPlayers], playerName);
					mysql_query(handle, string);
				}
				case pGun1x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Gun1`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pGun1], playerName);
					mysql_query(handle, string);
				}
				case pGun2x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Gun2`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pGun2], playerName);
					mysql_query(handle, string);
				}
				case pGun3x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Gun3`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pGun3], playerName);
					mysql_query(handle, string);
				}
				case pGun4x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Gun4`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pGun4], playerName);
					mysql_query(handle, string);
				}
				case pGun5x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Gun5`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pGun5], playerName);
					mysql_query(handle, string);
				}
				case pGun6x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Gun6`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pGun6], playerName);
					mysql_query(handle, string);
				}
				case pGun7x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Gun7`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pGun7], playerName);
					mysql_query(handle, string);
				}
				case pGun8x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Gun8`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pGun8], playerName);
					mysql_query(handle, string);
				}
				case pAmmo1x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Ammo1`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pGun1], playerName);
					mysql_query(handle, string);
				}
				case pAmmo2x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Ammo2`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pAmmo2], playerName);
					mysql_query(handle, string);
				}
				case pAmmo3x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Ammo3`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pAmmo3], playerName);
					mysql_query(handle, string);
				}
				case pAmmo4x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Ammo4`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pAmmo4], playerName);
					mysql_query(handle, string);
				}
				case pAmmo5x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Ammo5`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pAmmo5], playerName);
					mysql_query(handle, string);
				}
				case pAmmo6x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Ammo6`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pAmmo6], playerName);
					mysql_query(handle, string);
				}
				case pAmmo7x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Ammo7`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pAmmo7], playerName);
					mysql_query(handle, string);
				}
				case pAmmo8x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Ammo8`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pAmmo8], playerName);
					mysql_query(handle, string);
				}
				case pDrugsx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Drugs`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pDrugs], playerName);
					mysql_query(handle, string);
				}
				case pInteriorx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Interior`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pInterior], playerName);
					mysql_query(handle, string);
				}			
				case pCarLicx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `CarLic`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pCarLic], playerName);
					mysql_query(handle, string);
				}
				case pFlyLicx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `FlyLic`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pFlyLic], playerName);
					mysql_query(handle, string);
				}
				case pBoatLicx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `BoatLic`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pBoatLic], playerName);
					mysql_query(handle, string);
				}
				case pFishLicx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `FishLic`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pFishLic], playerName);
					mysql_query(handle, string);
				}	
				case pFishesx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Fishes`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pFishes], playerName);
					mysql_query(handle, string);
				}
				case pBiggestFishx:		
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `BiggestFish`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pBiggestFish], playerName);
					mysql_query(handle, string);
				}
				case pHelperx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `HelperLevel`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pHelper], playerName);
					mysql_query(handle, string);
				}
				case pLaserx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Laser`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pLaser], playerName);
					mysql_query(handle, string);
				}	
				case pFireworksx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Fireworks`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pFireworks], playerName);
					mysql_query(handle, string);
				}
				case pAmmoWorkx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `AmmoWork`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pAmmoWork], playerName);
					mysql_query(handle, string);
				}
				case pCashx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Cash`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pCash], playerName);
					mysql_query(handle, string);
				}
				case pAccountx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Account`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pAccount], playerName);
					mysql_query(handle, string);
				}
				case pEmailx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Email`='%e' WHERE `username`='%e'", PlayerInfo[playerid][pEmail], playerName);
					mysql_query(handle, string);
				}
				case pPosXx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `PosX`='%f' WHERE `username`='%e'", PlayerInfo[playerid][pPosX], playerName);
					mysql_query(handle, string);
				}	
				case pPosYx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `PosY`='%f' WHERE `username`='%e'", PlayerInfo[playerid][pPosY], playerName);
					mysql_query(handle, string);
				}	
				case pPosZx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `PosZ`='%f' WHERE `username`='%e'", PlayerInfo[playerid][pPosZ], playerName);
					mysql_query(handle, string);
				}				
				case pRegistredx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Registred`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pRegistred], playerName);
					mysql_query(handle, string);
				}
				case pCeasx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Ceas`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pCeas], playerName);
					mysql_query(handle, string);
				}
				case pTutorialx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Tutorial`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pTutorial], playerName);
					mysql_query(handle, string);
				}
				case pVWx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `VW`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pVW], playerName);
					mysql_query(handle, string);
				}				
				case pCrimex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Crime`='%s' WHERE `username`='%e'", PlayerInfo[playerid][pCrime], playerName);
					mysql_query(handle, string);
				}
				case pFishSkillx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `FishSkill`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pFishSkill], playerName);
					mysql_query(handle, string);
				}
				case pCrimax:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Crima`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pCrima], playerName);
					mysql_query(handle, string);
				}
				case pLawSkillx:				
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `LawSkill`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pLawSkill], playerName);
					mysql_query(handle, string);
				}
				case pHousex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `House`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pHouse], playerName);
					mysql_query(handle, string);
				}
				case pBizx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Biz`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pBiz], playerName);
					mysql_query(handle, string);
				}
				case pSexx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Sex`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pSex], playerName);
					mysql_query(handle, string);
				}
				case pJailTimex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `JailTime`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pJailTime], playerName);
					mysql_query(handle, string);
				}
				case pJailx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Jail`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pJail], playerName);
					mysql_query(handle, string);
				}
				case pAgex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Age`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pAge], playerName);
					mysql_query(handle, string);
				}
				case pJob1x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Job1`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pJob1], playerName);
					mysql_query(handle, string);
				}
				case pJob2x:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Job2`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pJob2], playerName);
					mysql_query(handle, string);
				}
				case pCDPlayerx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `CDPlayer`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pCDPlayer], playerName);
					mysql_query(handle, string);
				}
				case pPhoneNumberx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `PhoneNumber`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pPhoneNumber], playerName);
					mysql_query(handle, string);
				}
				case pHeadValuex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `HeadValue`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pHeadValue], playerName);
					mysql_query(handle, string);
				}
				case pKillx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Kill`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pKill], playerName);
					mysql_query(handle, string);
				}
				case pArrestedTimex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `ArrestedTime`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pArrestedTime], playerName);
					mysql_query(handle, string);
				}
				case pLottox:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Lotto`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pLotto], playerName);
					mysql_query(handle, string);
				}							
				case pDeathx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Death`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pDeath], playerName);
					mysql_query(handle, string);
				}
				case pPremiumAccountx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `PremiumAccount`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pPremiumAccount], playerName);
					mysql_query(handle, string);
				}
				case pBannedx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Banned`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pBanned], playerName);
					mysql_query(handle, string);
				}
				case pLeaderx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Leader`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pLeader], playerName);
					mysql_query(handle, string);
				}
				case pMemberx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Member`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pMember], playerName);
					mysql_query(handle, string);
				}
				case pMechSkillx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `MechSkill`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pMechSkill], playerName);
					mysql_query(handle, string);
				}
				case pRankx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Rank`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pRank], playerName);
					mysql_query(handle, string);
				}
				case pSkinx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Skin`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pSkin], playerName);
					mysql_query(handle, string);
				}
				case pIPx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `IP`='%e' WHERE `username`='%e'", PlayerInfo[playerid][pIP], playerName);
					mysql_query(handle, string);
				}
				case pLastLoginx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `LastLogin`= CURRENT_TIMESTAMP WHERE `username`='%e'", playerName);
					mysql_query(handle, string);
				}
				case pLoginDatex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `LoginDate`= CURRENT_TIMESTAMP WHERE `username`='%e'", playerName);
					mysql_query(handle, string);
				}				
				case pRespectx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Respect`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pRespect], playerName);
					mysql_query(handle, string);
				}
				case pConnectTimex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `ConnectTime`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pConnectTime], playerName);
					mysql_query(handle, string);
				}	
				case pOriginx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Origin`='%s' WHERE `username`='%e'", PlayerInfo[playerid][pOrigin], playerName);
					mysql_query(handle, string);
				}	
				case pCraciunx:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Craciun`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pCraciun], playerName);
					mysql_query(handle, string);
				}	
				case pVariabilax:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Variabila`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pVariabila], playerName);
					mysql_query(handle, string);
				}					
				case pMutex:
				{
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `Mute`='%d' WHERE `username`='%e'", PlayerInfo[playerid][pMute], playerName);
					mysql_query(handle, string);
				}	
				case 126 .. 145:
				{
				    new achvar[200];
				    format(achvar, sizeof(achvar), "%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
				    PlayerInfo[playerid][pAchievement1],
				    PlayerInfo[playerid][pAchievement2],
				    PlayerInfo[playerid][pAchievement3],
				    PlayerInfo[playerid][pAchievement4],
				    PlayerInfo[playerid][pAchievement5],
				    PlayerInfo[playerid][pAchievement6],
				    PlayerInfo[playerid][pAchievement7],
				    PlayerInfo[playerid][pAchievement8],
				    PlayerInfo[playerid][pAchievement9],
				    PlayerInfo[playerid][pAchievement10],
				    PlayerInfo[playerid][pAchievement11],
				    PlayerInfo[playerid][pAchievement12],
				    PlayerInfo[playerid][pAchievement13],
				    PlayerInfo[playerid][pAchievement14],
				    PlayerInfo[playerid][pAchievement15],
				    PlayerInfo[playerid][pAchievement16],
				    PlayerInfo[playerid][pAchievement17],
				    PlayerInfo[playerid][pAchievement18],
				    PlayerInfo[playerid][pAchievement19],
				    PlayerInfo[playerid][pAchievement20]);				    
				    //achvarr = strval(achvar);				    
					mysql_format(handle, string, sizeof(string), "UPDATE `players` SET `AchievementF`='%s' WHERE `username`='%e'", achvar, playerName);
					mysql_query(handle, string);
				}
			}
		}
	}
}


enum {
CommonRed = 19006,
CommonOrange,
CommonGreen,
CommonBlue,
CommonPurple,
CommonEspiral,
CommonBlack,
CommonEyes,
CommonXadrex,
CommonTransparent,
CommonXRayVision,
SquareFormatYellow,
SquareFormatOrange,
SquareFormatRed,
SquareFormatBlue,
SquareFormatGreen,
RayBanGray,
RayBanBlue,
RayBanPurple,
RayBanPink,
RayBanRed,
RayBanOrange,
RayBanYellow,
RayBanGreen,
CircularNormal,
CircularYellow,
CircularRed,
CircularBlack,
CircularXadrex,
CircularThunders,
CopGlassesBlack = 19138,
CopGlassesRed = 19139,
CopGlassesBlue = 19140,
};

new Float:SkinOffSet[300][7] = {
{0.098771, 0.030772, -0.000335, 85.342658, 84.122947, 4.236968 }, // - 0
{0.100766, 0.028630, -0.003521, 87.936676, 82.110870, 4.236968 }, // - 1
{0.083712, 0.033132, -0.003521, 87.936676, 82.110870, 4.236968 }, // - 2
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 3
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 4
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 5
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 6
{0.090066, 0.043458, -0.006523, 87.936676, 82.110870, 4.236968 }, // - 7
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 8
{0.070977, 0.028663, 0.000147, 81.164970, 92.128402, 4.236968 },  // - 9
{0.072317, 0.032179, -0.002934, 86.843269, 84.196006, 4.236968 }, // - 10
{0.072317, 0.035465, -0.002201, 86.843269, 84.196006, 4.236968 }, // - 11
{0.072317, 0.028100, -0.002201, 86.843269, 84.196006, 4.236968 }, // - 12
{0.076569, 0.028100, -0.002201, 86.843269, 84.196006, 4.236968 }, // - 13
{0.091310, 0.049169, -0.002201, 86.843269, 84.196006, 4.236968 }, // - 14
{0.073734, 0.006292, -0.002755, 86.843269, 84.196006, 4.236968 }, // - 15
{0.092845, 0.040331, 0.000183, 86.843269, 82.864280, 4.236968 },  // - 16
{0.088241, 0.030184, -0.000157, 86.843269, 82.864280, 4.236968 }, // - 17
{0.061677, 0.029596, -0.007398, 86.843269, 82.864280, 4.236968 }, // - 18
{0.079911, 0.029596, -0.002934, 86.843269, 82.864280, 4.236968 }, // - 19
{0.095079, 0.029596, -0.001718, 85.261871, 86.296562, 4.236968 }, // - 20
{0.093728, 0.042083, -0.005781, 85.261871, 81.636192, 4.236968 }, // - 21
{0.079585, 0.042083, -0.005781, 85.261871, 81.636192, 4.236968 }, // - 22
{0.090786, 0.041737, -0.005263, 85.261871, 81.636192, 4.236968 }, // - 23
{0.085247, 0.026941, -0.000317, 85.261871, 81.636192, 4.236968 }, // - 24
{0.081646, 0.031448, -0.001113, 89.393653, 81.665985, 4.236968 }, // - 25
{0.083700, 0.033814, -0.001960, 86.436462, 81.665985, 4.236968 }, // - 26
{0.092498, 0.037321, -0.001960, 86.436462, 85.568023, 4.236968 }, // - 27
{0.097068, 0.041360, -0.007881, 86.771400, 85.568023, 4.236968 }, // - 28
{0.083456, 0.050595, 0.001011, 86.771400, 77.201461, 4.236968 },  // - 29
{0.076983, 0.047168, -0.006161, 86.771400, 74.329719, 4.236968 }, // - 30
{0.083798, 0.042184, -0.001869, 86.771400, 83.181861, 4.236968 }, // - 31
{0.053021, -0.000587, -0.001869, 86.771400, 66.859710, 4.236968 },// - 32
{0.034386, 0.013324, -0.001869, 86.771400, 80.314460, 4.236968 }, // - 33
{0.104669, 0.037365, -0.001403, 86.771400, 87.178382, 4.236968 }, // - 34
{0.102659, 0.037465, -0.000829, 86.771400, 93.020492, 4.236968 }, // - 35
{0.107638, 0.037465, -0.000829, 86.771400, 93.020492, 4.236968 }, // - 36
{0.107638, 0.035879, -0.000829, 86.771400, 93.020492, 4.236968 }, // - 37
{0.107638, 0.041106, -0.000829, 86.771400, 93.020492, 4.236968 }, // - 38
{0.080326, 0.035634, -0.000829, 86.771400, 93.020492, 4.236968 }, // - 39
{0.080326, 0.027371, -0.000829, 86.771400, 93.020492, 4.236968 }, // - 40
{0.084617, 0.039613, -0.001620, 86.771400, 93.020492, 4.236968 }, // - 41
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 42
{0.040075, 0.025445, -0.000974, 86.771400, 92.964149, 4.236968 }, // - 43
{0.077369, 0.028469, -0.000974, 86.771400, 78.435791, 4.236968 }, // - 44
{0.064145, 0.028684, -0.000974, 86.771400, 84.762802, 4.236968 }, // - 45
{0.091993, 0.056559, -0.000974, 86.771400, 84.762802, 4.236968 }, // - 46
{0.084582, 0.051277, -0.005034, 86.771400, 84.762802, 4.236968 }, // - 47
{0.092182, 0.042095, -0.003533, 86.771400, 84.762802, 4.236968 }, // - 48
{0.086866, 0.032203, -0.001021, 86.771400, 84.762802, 4.236968 }, // - 49
{0.099350, 0.009422, -0.005899, 86.771400, 84.762802, 4.236968 }, // - 50
{0.099350, 0.030598, -0.005899, 86.771400, 84.762802, 4.236968 }, // - 51
{0.099350, 0.030598, -0.003575, 86.771400, 84.762802, 4.236968 }, // - 52
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 53
{0.079123, 0.030598, -0.003575, 86.771400, 84.762802, 4.236968 }, // - 54
{0.063159, 0.029641, -0.003575, 86.771400, 84.762802, 4.236968 }, // - 55
{0.070293, 0.029641, -0.000570, 86.771400, 84.762802, 4.236968 }, // - 56
{0.111305, 0.045368, -0.000570, 86.771400, 84.458084, 4.236968 }, // - 57
{0.084901, 0.020965, -0.000570, 86.771400, 79.542411, 4.236968 }, // - 58
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 59
{0.090164, 0.044163, -0.004754, 86.771400, 79.542411, 4.236968 }, // - 60
{0.087151, 0.041447, -0.000885, 90.928329, 89.598678, 0.000000 }, // - 61
{0.094350, 0.041447, 0.005717, 90.928329, 89.598678, 0.000000 },  // - 62
{0.075534, 0.041447, -0.001751, 90.928329, 89.598678, 0.000000 }, // - 63
{0.075534, 0.041447, -0.001751, 90.928329, 89.598678, 0.000000 }, // - 64
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 65
{0.104148, 0.034787, 0.001341, 90.928329, 89.598678, 0.000000 },  // - 66
{0.104148, 0.034787, 0.001341, 90.928329, 89.598678, 0.000000 },  // - 67
{0.087317, 0.039646, -0.004032, 90.928329, 89.598678, 0.000000 }, // - 68
{0.074873, 0.039646, -0.003072, 90.928329, 89.598678, 0.000000 }, // - 69
{0.090391, 0.042364, 0.005494, 90.928329, 89.598678, 0.000000 },  // - 70
{0.090391, 0.022298, -0.001170, 90.928329, 89.598678, 0.000000 }, // - 71
{0.090391, 0.039580, -0.001170, 90.928329, 89.598678, 0.000000 }, // - 72
{0.090391, 0.038224, -0.001170, 90.928329, 89.598678, 0.000000 }, // - 73
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 74
{0.083113, 0.038224, -0.001170, 90.928329, 89.598678, 0.000000 }, // - 75
{0.072957, 0.028956, -0.001170, 90.928329, 89.598678, 0.000000 }, // - 76
{0.069398, 0.039981, -0.001170, 90.928329, 89.598678, 0.000000 }, // - 77
{0.105738, 0.010001, 0.004508, 90.928329, 79.030494, 0.000000 },  // - 78
{0.078264, 0.019668, 0.004508, 90.928329, 79.030494, 0.000000 },  // - 79
{0.087377, 0.022096, -0.001993, 90.928329, 79.030494, 0.000000 }, // - 80
{0.087377, 0.022096, -0.001635, 90.928329, 79.030494, 0.000000 }, // - 81
{0.100623, 0.043063, -0.001635, 90.928329, 87.672645, 0.000000 }, // - 82
{0.092528, 0.027493, -0.001635, 90.928329, 87.672645, 0.000000 }, // - 83
{0.102086, 0.027493, -0.001635, 90.928329, 87.672645, 0.000000 }, // - 84
{0.081954, 0.041672, -0.001635, 90.928329, 87.672645, 0.000000 }, // - 85
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 86
{0.077010, 0.046925, -0.003438, 90.928329, 91.590301, 0.000000 }, // - 87
{0.069952, 0.042635, -0.003438, 90.928329, 86.722587, 0.000000 }, // - 88
{0.093827, 0.019258, -0.003438, 90.928329, 86.722587, 0.000000 }, // - 89
{0.066464, 0.035685, -0.000843, 90.928329, 86.722587, 0.000000 }, // - 90
{0.066464, 0.035685, -0.000843, 90.928329, 86.722587, 0.000000 }, // - 91
{0.066464, 0.038135, -0.000843, 90.928329, 86.722587, 0.000000 }, // - 92
{0.066464, 0.038135, -0.001690, 90.928329, 86.722587, 0.000000 }, // - 93
{0.048124, 0.010598, -0.001690, 90.928329, 86.722587, 0.000000 }, // - 94
{0.084997, 0.006773, -0.001690, 90.928329, 86.722587, 0.000000 }, // - 95
{0.100076, 0.026633, -0.001690, 90.928329, 80.020179, 0.000000 }, // - 96
{0.061686, 0.027537, -0.001690, 90.928329, 80.020179, 0.000000 }, // - 97
{0.098318, 0.053993, -0.001690, 90.928329, 89.237678, 0.000000 }, // - 98
{0.098318, 0.033702, -0.001690, 90.928329, 89.237678, 0.000000 }, // - 99
{0.086149, 0.042526, -0.001690, 90.928329, 77.587478, 0.000000 }, // - 100
{0.081864, 0.030555, -0.001690, 90.928329, 78.145759, 0.000000 }, // - 101
{0.081864, 0.047914, -0.005079, 90.928329, 78.145759, 0.000000 }, // - 102
{0.089607, 0.036717, -0.005079, 90.928329, 78.145759, 0.000000 }, // - 103
{0.079655, 0.042021, -0.005079, 90.928329, 78.145759, 0.000000 }, // - 104
{0.091779, 0.037620, -0.005079, 90.928329, 78.145759, 0.000000 }, // - 105
{0.084179, 0.035251, -0.005079, 90.928329, 78.145759, 0.000000 }, // - 106
{0.089387, 0.040297, -0.006006, 90.928329, 78.145759, 0.000000 }, // - 107
{0.081930, 0.030756, 0.001523, 90.928329, 78.145759, 0.000000 },  // - 108
{0.092857, 0.043070, -0.006084, 90.928329, 85.326652, 0.000000 }, // - 109
{0.092857, 0.043070, -0.006084, 90.928329, 85.326652, 0.000000 }, // - 110
{0.106601, 0.028021, -0.003537, 90.928329, 90.217376, 0.000000 }, // - 111
{0.096335, 0.015873, -0.003537, 90.928329, 90.217376, 0.000000 }, // - 112
{0.105827, 0.046620, -0.001395, 90.928329, 90.217376, 0.000000 }, // - 113
{0.097520, 0.044296, -0.007286, 90.928329, 90.217376, 0.000000 }, // - 114
{0.097408, 0.043470, -0.007286, 90.928329, 90.217376, 0.000000 }, // - 115
{0.092588, 0.049832, -0.007286, 90.928329, 90.217376, 0.000000 }, // - 116
{0.081444, 0.037602, -0.003125, 90.928329, 90.217376, 0.000000 }, // - 117
{0.078678, 0.037602, -0.001816, 90.928329, 90.217376, 0.000000 }, // - 118
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 119
{0.089214, 0.029291, -0.000784, 90.928329, 84.624763, 0.000000 }, // - 120
{0.086825, 0.033424, -0.000784, 90.928329, 77.233818, 0.000000 }, // - 121
{0.082869, 0.030783, -0.000950, 90.928329, 77.233818, 0.000000 }, // - 122
{0.096117, 0.048957, -0.006245, 90.928329, 87.579650, 0.000000 }, // - 123
{0.103663, 0.040022, 0.000449, 90.928329, 87.579650, 0.000000 },  // - 124
{0.099326, 0.031202, -0.001180, 90.928329, 87.579650, 0.000000 }, // - 125
{0.099326, 0.031132, -0.001180, 90.928329, 87.579650, 0.000000 }, // - 126
{0.099326, 0.039279, -0.001180, 90.928329, 87.579650, 0.000000 }, // - 127
{0.099326, 0.047422, -0.001180, 90.928329, 87.579650, 0.000000 }, // - 128
{0.088817, 0.021210, 0.000730, 90.928329, 87.579650, 0.000000 },  // - 129
{0.025784, 0.028323, 0.000730, 90.928329, 59.394767, 0.000000 },  // - 130
{0.068455, 0.031841, -0.004470, 90.928329, 79.979003, 0.000000 }, // - 131
{0.012930, 0.008392, -0.004470, 90.928329, 72.129173, 0.000000 }, // - 132
{0.102457, 0.032260, -0.003338, 90.928329, 84.534217, 0.000000 }, // - 133
{0.085976, 0.014956, -0.003338, 90.928329, 80.308830, 0.000000 }, // - 134
{0.071574, 0.028186, -0.001588, 90.928329, 80.308830, 0.000000 }, // - 135
{0.085219, 0.016666, -0.000738, 90.928329, 80.308830, 0.000000 }, // - 136
{0.065114, 0.009318, -0.000738, 90.928329, 80.308830, 0.000000 }, // - 137
{0.066890, 0.040024, -0.000738, 90.928329, 87.341934, 0.000000 }, // - 138
{0.072037, 0.036141, -0.000702, 90.928329, 87.341934, 0.000000 }, // - 139
{0.069108, 0.042194, -0.000436, 90.928329, 87.341934, 0.000000 }, // - 140
{0.058717, 0.043547, -0.000436, 90.928329, 87.209770, 0.000000 }, // - 141
{0.104196, 0.039601, -0.005481, 90.928329, 87.209770, 0.000000 }, // - 142
{0.090929, 0.045881, -0.012780, 90.928329, 87.209770, 0.000000 }, // - 143
{0.098291, 0.042464, -0.006952, 90.928329, 83.081665, 0.000000 }, // - 144
{0.080087, 0.030122, 0.000606, 90.928329, 83.081665, 0.000000 },  // - 145
{0.093500, 0.030690, -0.001545, 90.928329, 83.081665, 0.000000 }, // - 146
{0.079566, 0.020138, 0.004838, 90.928329, 73.715591, 0.000000 },  // - 147
{0.073564, 0.028430, -0.000527, 90.928329, 88.295433, 0.000000 }, // - 148
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 149
{0.073564, 0.028430, -0.000527, 90.928329, 88.295433, 0.000000 }, // - 150
{0.083426, 0.032359, -0.005717, 90.928329, 88.295433, 0.000000 }, // - 151
{0.072349, 0.019623, -0.000747, 90.928329, 82.624351, 0.000000 }, // - 152
{0.075065, 0.015351, 0.006545, 90.928329, 71.041442, 0.000000 },  // - 153
{0.062227, 0.029731, -0.004938, 90.928329, 84.602760, 0.000000 }, // - 154
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 155
{0.079936, 0.049000, -0.000304, 90.928329, 82.926010, 0.000000 }, // - 156
{0.067550, 0.035686, -0.000017, 90.928329, 82.926010, 0.000000 }, // - 157
{0.090676, 0.039383, -0.001726, 90.928329, 88.667900, 0.000000 }, // - 158
{0.090676, 0.039383, -0.003532, 90.928329, 88.667900, 0.000000 }, // - 159
{0.098662, 0.017441, -0.001589, 90.928329, 88.667900, 0.000000 }, // - 160
{0.105388, 0.038409, 0.003155, 90.928329, 88.667900, 0.000000 },  // - 161
{0.097415, 0.036904, -0.000525, 90.928329, 88.667900, 0.000000 }, // - 162
{0.088934, 0.023302, -0.004153, 90.928329, 80.393875, 0.000000 }, // - 163
{0.088934, 0.023302, -0.004153, 90.928329, 80.393875, 0.000000 }, // - 164
{0.087018, 0.051364, 0.000484, 90.928329, 94.584838, 0.000000 },  // - 165
{0.087018, 0.051364, 0.000484, 90.928329, 94.584838, 0.000000 },  // - 166
{0.095996, 0.038787, 0.000484, 90.928329, 84.315711, 0.000000 },  // - 167
{0.089094, 0.034001, -0.006451, 90.928329, 84.315711, 0.000000 }, // - 168
{0.075700, 0.028082, -0.006451, 90.928329, 84.315711, 0.000000 }, // - 169
{0.093751, 0.041968, -0.005545, 90.928329, 84.315711, 0.000000 }, // - 170
{0.090124, 0.031055, -0.000505, 90.928329, 84.315711, 0.000000 }, // - 171
{0.066033, 0.032915, -0.002713, 90.928329, 84.315711, 0.000000 }, // - 172
{0.088287, 0.045350, -0.005384, 90.928329, 84.315711, 0.000000 }, // - 173
{0.087750, 0.042129, -0.005384, 90.928329, 84.315711, 0.000000 }, // - 174
{0.092384, 0.039294, -0.005384, 90.928329, 84.315711, 0.000000 }, // - 175
{0.097661, 0.039065, -0.006344, 90.928329, 80.736480, 0.000000 }, // - 176
{0.097114, 0.039641, -0.006692, 90.928329, 80.736480, 0.000000 }, // - 177
{0.069354, 0.039641, -0.000474, 90.928329, 80.736480, 0.000000 }, // - 178
{0.091414, 0.039641, -0.005617, 90.928329, 80.736480, 0.000000 }, // - 179
{0.094914, 0.039641, -0.005617, 90.928329, 80.736480, 0.000000 }, // - 180
{0.117232, 0.033217, -0.001099, 90.928329, 82.396362, 0.000000 }, // - 181
{0.082569, 0.032748, -0.003248, 90.928329, 87.394371, 0.000000 }, // - 182
{0.095527, 0.027237, -0.001960, 90.928329, 86.443649, 0.000000 }, // - 183
{0.095527, 0.040994, -0.006878, 90.928329, 86.443649, 0.000000 }, // - 184
{0.085663, 0.030601, -0.002345, 90.928329, 81.496513, 0.000000 }, // - 185
{0.085663, 0.030601, -0.001015, 90.928329, 81.496513, 0.000000 }, // - 186
{0.076527, 0.027211, 0.008500, 90.928329, 74.401092, 0.000000 },  // - 187
{0.096669, 0.032578, 0.001662, 90.928329, 83.502502, 0.000000 },  // - 188
{0.098753, 0.032129, -0.001659, 90.928329, 90.153724, 0.000000 }, // - 189
{0.092821, 0.035572, -0.001659, 90.928329, 90.153724, 0.000000 }, // - 190
{0.092821, 0.035572, -0.001132, 90.928329, 90.153724, 0.000000 }, // - 191
{0.092821, 0.035572, -0.001132, 90.928329, 90.153724, 0.000000 }, // - 192
{0.092821, 0.035572, -0.001132, 90.928329, 90.153724, 0.000000 }, // - 193
{0.092821, 0.035572, -0.001132, 90.928329, 90.153724, 0.000000 }, // - 194
{0.092821, 0.035572, -0.001132, 90.928329, 90.153724, 0.000000 }, // - 195
{0.092821, 0.035572, -0.001132, 90.928329, 90.153724, 0.000000 }, // - 196
{0.100630, 0.020568, -0.001132, 90.928329, 90.153724, 0.000000 }, // - 197
{0.077905, 0.028523, 0.000000, 89.675476, 89.270309, 0.000000 },  // - 198
{0.099095, 0.022463, 0.000000, 89.675476, 89.270309, 0.000000 },  // - 199
{0.103182, 0.031106, 0.000000, 89.675476, 89.270309, 0.000000 },  // - 200
{0.078426, 0.038546, 0.000000, 89.675476, 89.270309, 0.000000 },  // - 201
{0.101092, 0.035797, -0.002997, 89.675476, 82.081153, 0.000000 }, // - 202
{0.092009, 0.042780, -0.005841, 89.675476, 84.463294, 0.000000 }, // - 203
{0.092009, 0.042780, -0.005841, 89.675476, 84.463294, 0.000000 }, // - 204
{0.092969, 0.027782, -0.002959, 89.675476, 84.463294, 0.000000 }, // - 205
{0.105109, 0.036128, -0.000471, 89.675476, 84.463294, 0.000000 }, // - 206
{0.066892, 0.024410, -0.002792, 89.675476, 84.463294, 0.000000 }, // - 207
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 208
{0.084046, 0.013608, -0.002792, 89.675476, 81.667831, 0.000000 }, // - 209
{0.084046, 0.013608, -0.001034, 89.675476, 81.667831, 0.000000 }, // - 210
{0.067610, 0.033777, -0.001034, 89.675476, 85.214485, 0.000000 }, // - 211
{0.094159, 0.020717, 0.000715, 89.675476, 85.214485, 0.000000 },  // - 212
{0.098744, 0.036786, -0.001770, 89.675476, 85.214485, 0.000000 }, // - 213
{0.068755, 0.036786, -0.001770, 89.675476, 85.214485, 0.000000 }, // - 214
{0.068755, 0.026863, -0.001770, 89.675476, 85.214485, 0.000000 }, // - 215
{0.068755, 0.026863, -0.001770, 89.675476, 85.214485, 0.000000 }, // - 216
{0.095765, 0.030034, -0.001770, 89.675476, 85.214485, 0.000000 }, // - 217
{0.085486, 0.039427, -0.003311, 89.675476, 85.214485, 0.000000 }, // - 218
{0.068874, 0.027850, -0.001021, 89.675476, 85.214485, 0.000000 }, // - 219
{0.052931, 0.050390, -0.002062, 89.675476, 88.113647, 0.000000 }, // - 220
{0.094479, 0.034432, 0.000875, 89.675476, 83.572830, 0.000000 },  // - 221
{0.094479, 0.034432, -0.000596, 89.675476, 83.572830, 0.000000 }, // - 222
{0.094479, 0.062073, -0.003098, 89.675476, 83.572830, 0.000000 }, // - 223
{0.064458, 0.029760, -0.001460, 89.675476, 83.572830, 0.000000 }, // - 224
{0.064458, 0.029760, -0.001460, 89.675476, 83.572830, 0.000000 }, // - 225
{0.072095, 0.029760, -0.001460, 89.675476, 83.572830, 0.000000 }, // - 226
{0.110619, 0.043037, -0.001466, 89.675476, 86.927627, 0.000000 }, // - 227
{0.099446, 0.050772, -0.001466, 89.675476, 85.103805, 0.000000 }, // - 228
{0.078635, 0.023680, -0.000275, 89.675476, 73.445220, 0.000000 }, // - 229
{0.043357, 0.028726, -0.000275, 89.675476, 73.445220, 0.000000 }, // - 230
{0.092488, 0.049972, -0.000275, 89.675476, 88.981941, 0.000000 }, // - 231
{0.092488, 0.016739, -0.000275, 89.675476, 88.981941, 0.000000 }, // - 232
{0.071677, 0.037055, -0.002878, 89.675476, 88.981941, 0.000000 }, // - 233
{0.082745, 0.004209, -0.002878, 89.675476, 88.981941, 0.000000 }, // - 234
{0.057909, 0.021331, -0.002878, 89.675476, 88.981941, 0.000000 }, // - 235
{0.079016, 0.021331, -0.000419, 89.675476, 77.678733, 0.000000 }, // - 236
{0.074572, 0.021331, -0.000419, 89.675476, 84.527442, 0.000000 }, // - 237
{0.074572, 0.038346, -0.001500, 89.675476, 84.527442, 0.000000 }, // - 238
{0.111645, 0.011549, 0.006237, 89.675476, 84.527442, 0.000000 },  // - 239
{0.090766, 0.044221, -0.000423, 89.675476, 89.461883, 0.000000 }, // - 240
{0.069491, 0.049021, -0.000423, 89.675476, 89.461883, 0.000000 }, // - 241
{0.059706, 0.031911, -0.000423, 89.675476, 89.461883, 0.000000 }, // - 242
{0.065242, 0.031911, -0.000423, 89.675476, 89.461883, 0.000000 }, // - 243
{0.065242, 0.051077, -0.001103, 89.675476, 89.461883, 0.000000 }, // - 244
{0.082393, 0.038233, 0.000410, 89.675476, 89.461883, 0.000000 },  // - 245
{0.079338, 0.044859, -0.002535, 89.675476, 89.461883, 0.000000 }, // - 246
{0.101566, 0.037019, 0.000750, 89.675476, 83.514060, 0.000000 },  // - 247
{0.091887, 0.047776, -0.000040, 89.675476, 83.514060, 0.000000 }, // - 248
{0.089745, 0.044044, 0.004071, 89.675476, 83.514060, 0.000000 },  // - 249
{0.094214, 0.044044, -0.007274, 89.675476, 83.514060, 0.000000 }, // - 250
{0.072282, 0.044044, -0.001468, 89.675476, 90.444763, 0.000000 }, // - 251
{0.095764, 0.034224, -0.000264, 89.675476, 82.959915, 0.000000 }, // - 252
{0.087454, 0.026208, -0.000264, 89.675476, 82.959915, 0.000000 }, // - 253
{0.099198, 0.037362, -0.000264, 89.675476, 82.959915, 0.000000 }, // - 254
{0.070845, 0.019943, 0.003505, 89.675476, 73.529716, 0.000000 },  // - 255
{0.065373, 0.033656, -0.001141, 89.675476, 83.002151, 0.000000 }, // - 256
{0.070077, 0.033656, -0.001141, 89.675476, 83.002151, 0.000000 }, // - 257
{0.089536, 0.041904, 0.000715, 89.675476, 83.002151, 0.000000 },  // - 258
{0.084822, 0.041904, 0.000715, 89.675476, 83.002151, 0.000000 },  // - 259
{0.093009, 0.031491, -0.001568, 89.675476, 83.002151, 0.000000 }, // - 260
{0.093009, 0.015023, -0.001477, 89.675476, 83.002151, 0.000000 }, // - 261
{0.076580, 0.039782, -0.001477, 89.675476, 88.620780, 0.000000 }, // - 262
{0.076580, 0.028967, -0.001477, 89.675476, 88.620780, 0.000000 }, // - 263
{0.075424, 0.043059, -0.001477, 89.675476, 88.620780, 0.000000 }, // - 264
{0.089655, 0.021726, -0.001477, 89.675476, 88.620780, 0.000000 }, // - 265
{0.096792, 0.014114, -0.003062, 89.675476, 85.166038, 0.000000 }, // - 266
{0.094886, 0.024989, -0.003184, 89.675476, 85.166038, 0.000000 }, // - 267
{0.094886, 0.024989, -0.003184, 89.675476, 85.166038, 0.000000 }, // - 268
{0.102252, 0.024989, -0.003184, 89.675476, 85.166038, 0.000000 }, // - 269
{0.102252, 0.024989, 0.000529, 89.675476, 85.166038, 0.000000 },  // - 270
{0.096134, 0.025462, 0.000529, 89.675476, 79.225112, 0.000000 },  // - 271
{0.099226, 0.032663, 0.000529, 89.675476, 79.225112, 0.000000 },  // - 272
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 273
{0.089833, 0.022466, -0.001590, 89.675476, 88.636062, 0.000000 }, // - 274
{0.089833, 0.022466, -0.001590, 89.675476, 88.636062, 0.000000 }, // - 275
{0.089833, 0.022466, -0.001590, 89.675476, 88.636062, 0.000000 }, // - 276
{0.082718, 0.062596, -0.000201, 89.675476, 88.636062, 0.000000 }, // - 277
{0.082718, 0.062596, -0.000201, 89.675476, 88.636062, 0.000000 }, // - 278
{0.087652, 0.059379, -0.000201, 89.675476, 88.636062, 0.000000 }, // - 279
{0.087652, 0.023702, -0.003091, 89.675476, 88.636062, 0.000000 }, // - 280
{0.087652, 0.023702, -0.003091, 89.675476, 88.636062, 0.000000 }, // - 281
{0.090877, 0.026643, -0.003091, 89.675476, 88.636062, 0.000000 }, // - 282
{0.090877, 0.026643, -0.003091, 89.675476, 88.636062, 0.000000 }, // - 283
{0.090877, 0.053674, 0.009879, 89.675476, 88.636062, 0.000000 },  // - 284
{0.104320, 0.041487, 0.008021, 89.675476, 88.636062, 0.000000 },  // - 285
{0.087062, 0.021779, -0.003307, 89.675476, 88.636062, 0.000000 }, // - 286
{0.073173, 0.048856, 0.005337, 89.675476, 92.561180, 0.000000 },  // - 287
{0.090294, 0.027592, -0.003497, 89.675476, 92.561180, 0.000000 }, // - 288
{0.0, 0.0, 0.0, 0.0, 0.0, 0.0},                                   // - 289
{0.086562, 0.042698, -0.000612, 89.675476, 92.561180, 0.000000 }, // - 290
{0.096768, 0.039233, -0.000612, 89.675476, 83.550270, 0.000000 }, // - 291
{0.079939, 0.020731, -0.005162, 89.675476, 83.550270, 0.000000 }, // - 292
{0.097107, 0.027826, -0.005162, 89.675476, 88.505996, 0.000000 }, // - 293
{0.097107, 0.037636, 0.000618, 89.675476, 88.505996, 0.000000 },  // - 294
{0.079985, 0.035006, -0.000826, 89.675476, 87.533462, 0.000000 }, // - 295
{0.088445, 0.024209, -0.002076, 89.675476, 73.285072, 0.000000 }, // - 296
{0.094039, 0.035411, 0.000490, 89.675476, 84.277572, 0.000000 },  // - 297
{0.099553, 0.024683, -0.002919, 89.675476, 84.277572, 0.000000 }, // - 298
{0.099553, 0.044356, -0.000285, 89.675476, 84.277572, 0.000000 }  // - 299
};

enum weaponss
{
    Melee,
    Thrown,
    Pistols,
    Shotguns,
    SubMachine,
    Assault,
    Rifles,
    Heavy,
    Handheld
}
new Weapons[MAX_PLAYERS][weaponss];
new RandomChatMessages[][] =
{

    "{1169EE}["#SERVERNAME" help] {1180EE}Esti blocat? Nu sunt {FB0404}Admini{1180EE} online sau sunt ocupati? Scrie{FB0404}/exit{1180EE} pentru a te dezgheta!",
    "{1169EE}["#SERVERNAME" help] {1180EE}Daca aveti nevoie de ajutor, Scrieti {FB0404}/n [text]{1180EE} si va trimite mesaj pe chatul playerilor!",
    "{1169EE}["#SERVERNAME" help] {1180EE}Ai vazut un {FB0404}hacker{1180EE}? Foloseste /report [text] {1180EE}si va fi raportat la Admini{1180EE}!",
    "{1169EE}["#SERVERNAME" help] {1180EE}Daca nu sunt {FB0404}Admini{1180EE} online, nu abuza in niciun fel, tot ce faci este vazut de catre {FB0404}Admini{1180EE}.",
    "{1169EE}["#SERVERNAME" help] {1180EE}Esti in {FB0404}pericol{1180EE}? Nu ezita sa suni la politie {FB0404}(/call 112)",
    "{1169EE}["#SERVERNAME" help] {1180EE}Vizitati-ne si pe forum:{FB0404}http://"#SERVERNAME".ro{1180EE} Vei gasi informatii despre server si multe altele",
    "{1169EE}["#SERVERNAME" help] {1180EE}Daca vei primi {FB0404}Admin{1180EE}, nu inseamna ca pentru tine nu se vor mai impune regulile!",
//    "{1169EE}["#SERVERNAME" help] {1180EE}Vrei sa intri intr-o factiune? Lider sau membru: poti face o cerere pe forum! {FB0404}http://"#SERVERNAME".ro",
//    "{1169EE}["#SERVERNAME" help] {1180EE}Foloseste {FB0404}/help {1180EE}pentru a vedea comenzile suplimentare si cel mai important{FB0404} /rules.",
    "{1169EE}["#SERVERNAME" help] {1180EE}Ai nevoie de un ATM?{FB0404}/closteatm {1180EE}pentru a vedea cel mai apropiat ATM de tine.",	
    "{1169EE}["#SERVERNAME" help] {1180EE}Ai vazut un bug? Raporteaza-l pe forumul nostru sau pe{FB0404} /report",
    "{1169EE}["#SERVERNAME" help] {1180EE}Ai fost neindreptatit de un {FB0404}Admin/Helper?{1180EE} raporteaza-l pe forum! {FB0404}ttp://"#SERVERNAME".ro",
    "{1169EE}["#SERVERNAME" help] {1180EE}Masinile pentru {FB0404}incepatori{1180EE} sunt in spatele spawnului",
    "{1169EE}["#SERVERNAME" help] {1180EE}Vrei cont {FB0404}vip?{1180EE} Contacteaza un owner ( /cvip sa vezi beneficiile)",
    "{1169EE}["#SERVERNAME" help] {1180EE}Pentru comenzile masinii scrieti {FB0404}/vehhelp",
    "{1169EE}["#SERVERNAME" help] {1180EE}Toate joburile se afla la {FB0404}Primarie, pentru ajutor folositi {FB0404}/jobhelp",
    "{1169EE}["#SERVERNAME" help] {1180EE}Daca va deranjeaza teritoriile de pe minimap folositi{FB0404}/turfs ",
   // "{1169EE}["#SERVERNAME" help] {1180EE}Pentru pasionatii de Counter-Strike incercati si seerverul de cs.",
    "{1169EE}["#SERVERNAME" help] {1180EE}Pentru a schimba locul de spawn incercati{FB0404} /selectspawn"
};

//=====================masini============
new copcar[16];/////////////pd   		1
new fbicar[35];/////////////fbi  		2
new armycar[20];////////////ng  		3
new presidentcar[16];//////////ap       4
new rifacar[9];///////////////////rifa  5
new triadscar[10];//////////////triads  6
new governcar[12];////////////guvernul  7
new hitmencar[16];//////////hitman   	8
new newscar[6];//////////////nr       	9
new taxicar[12]; ///////////taxi         10
new navycar[29];////////////portavion  	11
new parlamentcar[16];///////parlament   12
new bratvacar[10];/////////bratva       13
new ballascar[9];////////ballas         14
new sevilecar[9];///////sevile          15
new crlcar[10];////////crl              16
new ciacar[35];/////////////cia  		17
new levelcar[13];
new helpercar[5];
new derbycar[29];
new ambulance[4];
new dmwcar[4];
new kartcar[18];
new rentls[8];
new rentlv[5];
new admincar[3];
new rentsf[6];
new rentvehair[18];
new wodden,wodden1,wodden2,wodden3,wodden4;
new fireman2, fireman1,fireman3,fireman4,fireman5,fireman6;
new cutter,cutter2,cutter3,cutter4;
new tcc1,tcc2,tcc3,tcc4,tcc5,tcc6,tcc7;
new swep1,swep2,swep3,swep4,swep5,swep6;
new truck1,truck2,truck3,truck4,truck5,truck6,truck7;
new fuel0,fuel1,fuel2,fuel3,fuel4,fuel5,fuel6,fuel7,fuel8,fuel9;
new farmer0,farmer1,farmer2,farmer3,farmer4,trailerfarm0,trailerfarm1,trailerfarm2,trailerfarm3,trailerfarm4;
new fastfood0,fastfood1,fastfood2,fastfood3,fastfood4,fastfood5;
new drug1,drug2,drug3,drug4,drug5;
new petroltank1,petroltank2,petroltank3,petroltank4,petrol1,petrol2,petrol3,petrol4;
new autobuz,autobuz1,autobuz2,autobuz3;
new gascar1,gascar2,gascar3,gascar4;
new planesi, planesi1,boatsi, boatsi1;
new SanieCar[4];
new SanieObjects[4][30];
new CropDust[4];
new PaperBoyPlane[4];
new PizzaBoy[10];

new BoatJ[5];

//=====================masini============


stock LoadAllVehicles()
{
	copcar[0] = AddStaticVehicleEx(596, 1570.7277, -1711.1215, 5.6444, 0.0000, 3, 1, 3600);
    copcar[1] = AddStaticVehicleEx(596, 1574.6696, -1711.1215, 5.6444, 0.0000, 79, 1, 3600);
	copcar[2] = AddStaticVehicleEx(596, 1578.4346, -1711.1215, 5.6444, 0.0000, 79, 1, 3600);
	copcar[3] = AddStaticVehicleEx(596, 1583.2267, -1711.1215, 5.6444, 0.0000, 79, 1, 3600);
	copcar[4] = AddStaticVehicleEx(596, 1588.1495, -1711.1215, 5.6444, 0.0000,79, 1, 3600);
	copcar[5] = AddStaticVehicleEx(523, 1544.8375, -1685.3685, 5.3988, 90.0600, 79, 1, 3600);
	copcar[6] = AddStaticVehicleEx(523, 1544.8375, -1680.3146, 5.3988, 90.0600,79, 1, 3600);
	copcar[7] = AddStaticVehicleEx(523, 1544.8375, -1676.5754, 5.3988, 90.0600, 79, 1, 3600);
	copcar[8] = AddStaticVehicleEx(523, 1544.8375, -1672.8986, 5.3988, 90.0600, 79, 1, 3600);
	copcar[9] = AddStaticVehicleEx(599, 1538.5660, -1644.3105, 5.9004, 0.0000,79, 1, 3600);
	copcar[10] = AddStaticVehicleEx(599, 1534.8370, -1644.3105, 5.9004, 0.0000,79, 1, 3600);
	copcar[11] = AddStaticVehicleEx(599, 1530.2659, -1644.3105, 5.9004, 0.0000, 79, 1, 3600);
	copcar[12] = AddStaticVehicleEx(528, 1544.7585, -1655.3408, 5.9103, 90.0000, 79, 1, 3600);
	copcar[13] = AddStaticVehicleEx(428, 1529.2792, -1688.2645, 5.9222, -90.0000, 79, 1, 3600);
	copcar[14] = AddStaticVehicleEx(427, 1529.1556, -1683.7649, 5.8256, -90.0000, 79, 1, 3600);
	copcar[15] = AddStaticVehicleEx(497, 1559.8301, -1644.2625, 28.5788, -90.0000, 79, 1, 3600);
	//=========================================================================================
	fbicar[0] = AddStaticVehicleEx(415,3315.6626000,-1019.7207000,12.9853000,0.0000000,223,1,3600); //Cheetah
	fbicar[1] = AddStaticVehicleEx(415,3320.5044000,-1019.7740000,12.9853000,0.0000000,223,1,3600); //Cheetah
	fbicar[2] = AddStaticVehicleEx(428,3329.4802000,-1018.9498000,13.5504000,0.0000000,223,1,3600); //Securicar
	fbicar[3] = AddStaticVehicleEx(427,3334.0979000,-1018.3842000,13.5504000,0.0000000,223,1,3600); //Enforcer
	fbicar[4] = AddStaticVehicleEx(446,3423.9905000,-1127.4573000,-0.0126000,-90.0000000,223,1,36000); //Squalo
	fbicar[5] = AddStaticVehicleEx(460,3425.1406000,-1159.3860000,2.0913000,-90.0000000,223,1,3600); //Skimmer
	fbicar[6] = AddStaticVehicleEx(497,3361.2410000,-1062.8794000,18.1336000,0.0000000,223,1,3600); //Police Maverick
	fbicar[7] = AddStaticVehicleEx(497,3390.5874000,-985.0504000,17.1243000,0.0000000,223,1,3600); //Police Maverick
	fbicar[8] = AddStaticVehicleEx(490,3333.6462000,-973.1185000,13.4358000,180.0000000,223,1,3600); //FBI Rancher
	fbicar[9] = AddStaticVehicleEx(490,3338.0112000,-972.8636000,13.4358000,180.0000000,223,1,3600); //FBI Rancher
	fbicar[10] = AddStaticVehicleEx(490,3329.3916000,-972.8735000,13.4358000,180.0000000,223,1,3600); //FBI Rancher
	fbicar[11] = AddStaticVehicleEx(490,3342.3105000,-972.7952000,13.4358000,180.0000000,223,1,3600); //FBI Rancher
	fbicar[12] = AddStaticVehicleEx(511,3241.7886000,-1066.5190000,14.7269000,-90.0000000,223,1,3600); //Beagle
	fbicar[13] = AddStaticVehicleEx(521,3349.7688000,-1032.2705000,12.8428000,0.0000000,223,1,3600); //FCR-900
	fbicar[14] = AddStaticVehicleEx(521,3354.2446000,-1032.1920000,12.8428000,0.0000000,223,1,3600); //FCR-900
	fbicar[15] = AddStaticVehicleEx(523,3359.0403000,-1032.0046000,12.8013000,0.0000000,223,1,3600); //HPV1000
	fbicar[16] = AddStaticVehicleEx(523,3363.2627000,-1032.2219000,12.8013000,0.0000000,223,1,3600); //HPV1000
	fbicar[17] = AddStaticVehicleEx(523,3367.4717000,-1032.0775000,12.8013000,0.0000000,223,1,3600); //HPV1000
	fbicar[18] = AddStaticVehicleEx(528,3310.9502000,-998.9196000,13.3407000,0.0000000,223,1,3600); //FBI Truck
	fbicar[19] = AddStaticVehicleEx(528,3310.7852000,-990.8161000,13.3407000,180.0000000,223,1,3600); //FBI Truck
	fbicar[20] = AddStaticVehicleEx(528,3315.1694000,-990.4348000,13.3407000,180.0000000,223,1,3600); //FBI Truck
	fbicar[21] = AddStaticVehicleEx(541,3324.2568000,-998.8904000,12.8910000,0.0000000, 223,1,3600); //Bullet
	fbicar[22] = AddStaticVehicleEx(595,3432.3813000,-1115.0623000,1.1009000,-90.0000000,223,1,3600); //Launch
	fbicar[23] = AddStaticVehicleEx(601,3333.0398000,-998.3136000,12.9845000,0.0000000,223,1,3600); //S.W.A.T. Van
	fbicar[24] = AddStaticVehicleEx(601,3332.8984000,-990.3325000,12.9845000,180.0000000,223,1,3600); //S.W.A.T. Van
	fbicar[25] = AddStaticVehicleEx(411,3366.1416000,-995.4856000,13.1847000,90.0000000,223,1,3600); //Infernus
	fbicar[26] = AddStaticVehicleEx(411,3366.5566000,-986.7831000,13.1847000,90.0000000,223,1,3600); //Infernus
	fbicar[27] = AddStaticVehicleEx(469,3393.4895000,-1034.0991000,16.7980000,0.0000000,223,1,3600); //Sparrow
	fbicar[28] = AddStaticVehicleEx(519,3223.6868000,-980.9711000,14.2723000,-90.0000000,223,1,36000); //Shamal
	fbicar[29] = AddStaticVehicleEx(528,3315.9404000,-999.3154000,13.3407000,0.0000000,223,1,3600); //FBI Truck
	fbicar[30] = AddStaticVehicleEx(409,3329.5127000,-1028.2740000,12.9716000,180.0000000,-1,-1,3600); //Stretch
	fbicar[31] = AddStaticVehicleEx(426, 3347.1753, -972.8726, 12.7830, 180.0000, 223,1,3600);//premier
	fbicar[32] = AddStaticVehicleEx(426, 3351.2649, -973.2681, 12.7830, 180.0000, 223,1,3600);//premier
	fbicar[33] = AddStaticVehicleEx(426, 3355.6606, -973.0735, 12.7830, 180.0000, 223,1,3600);//premier
	fbicar[34] = AddStaticVehicleEx(426, 3360.4187, -973.1992, 12.7830, 180.0000, 223,1,3600);//premier
	//=========================================================================================
    ciacar[0] = AddStaticVehicleEx(409,3324.5874000,-1228.7921000,12.9716000,0.0000000, 0,1,3600); //Stretch
	ciacar[1] = AddStaticVehicleEx(595,3432.1902000,-1120.8085000,1.1009000,-90.0000000,0,1,3600); //Launch
	ciacar[2] = AddStaticVehicleEx(521,3350.5486000,-1231.8416000,12.8428000,0.0000000,0,1,3600); //FCR-900
	ciacar[3] = AddStaticVehicleEx(521,3345.7717000,-1231.8153000,12.8428000,0.0000000,0,1,3600); //FCR-900
	ciacar[4] = AddStaticVehicleEx(523,3354.5410000,-1231.7365000,12.8013000,0.0000000,0,1,3600); //HPV1000
	ciacar[5] = AddStaticVehicleEx(523,3359.0220000,-1232.1296000,12.8013000,0.0000000,0,1,3600); //HPV1000
	ciacar[6] = AddStaticVehicleEx(523,3363.8521000,-1232.1222000,12.8013000,0.0000000,0,1,3600); //HPV1000
	ciacar[7] = AddStaticVehicleEx(415,3311.5779000,-1219.4626000,12.9853000,180.0000000,0,1,3600); //Cheetah
	ciacar[8] = AddStaticVehicleEx(415,3315.7896000,-1219.7534000,12.9853000,180.0000000,0,1,3600); //Cheetah
	ciacar[9] = AddStaticVehicleEx(428,3329.1047000,-1218.3995000,13.5504000,180.0000000,0,1,3600); //Securicar
	ciacar[10] = AddStaticVehicleEx(427,3324.7021000,-1218.0588000,13.5504000,180.0000000,0,1,3600); //Enforcer
	ciacar[11] = AddStaticVehicleEx(528,3306.5605000,-1199.9545000,13.3407000,0.0000000,0,1,3600); //FBI Truck
	ciacar[12] = AddStaticVehicleEx(528,3306.6008000,-1191.3931000,13.3407000,180.0000000,0,1,3600); //FBI Truck
	ciacar[13] = AddStaticVehicleEx(541,3320.2175000,-1191.3862000,12.8910000,180.0000000,0,1,3600); //Bullet
	ciacar[14] = AddStaticVehicleEx(601,3328.2771000,-1199.8331000,12.9845000,0.0000000,0,1,3600); //S.W.A.T. Van
	ciacar[15] = AddStaticVehicleEx(601,3328.7712000,-1190.9995000,12.9845000,180.0000000,0,1,3600); //S.W.A.T. Van
	ciacar[16] = AddStaticVehicleEx(528,3311.1426000,-1191.2081000,13.3407000,180.0000000,0,1,3600); //FBI Truck
	ciacar[17] = AddStaticVehicleEx(528,3310.9910000,-1199.5693000,13.3407000,0.0000000,0,1,3600); //FBI Truck
	ciacar[18] = AddStaticVehicleEx(490,3324.2854000,-1173.8456000,13.4358000,0.0000000,0,1,3600); //FBI Rancher
	ciacar[19] = AddStaticVehicleEx(490,3333.0278000,-1173.7750000,13.4358000,0.0000000,0,1,3600); //FBI Rancher
	ciacar[20] = AddStaticVehicleEx(490,3328.9431000,-1173.8872000,13.4358000,0.0000000,0,1,3600); //FBI Rancher
	ciacar[21] = AddStaticVehicleEx(426,3342.2378000,-1173.2971000,12.7830000,0.0000000,0,1,3600); //Premier
	ciacar[22] = AddStaticVehicleEx(411,3361.8469000,-1187.3657000,13.1847000,90.0000000,0,1,3600); //Infernus
	ciacar[23] = AddStaticVehicleEx(411,3362.0894000,-1196.2955000,13.1847000,90.0000000,0,1,3600); //Infernus
	ciacar[24] = AddStaticVehicleEx(497,3360.6445000,-1141.8804000,14.6573000,180.0000000,0,1,3600); //Police Maverick
	ciacar[25] = AddStaticVehicleEx(469,3396.9329000,-1150.0880000,13.0553000,180.0000000,0,1,3600); //Sparrow
	ciacar[26] = AddStaticVehicleEx(497,3393.9875000,-1215.5308000,16.9956000,180.0000000,0,1,3600); //Police Maverick
	ciacar[27] = AddStaticVehicleEx(490,3337.4563000,-1173.8535000,13.4358000,0.0000000,0,1,3600); //FBI Rancher
	ciacar[28] = AddStaticVehicleEx(426,3346.8015000,-1173.2963000,12.7830000,0.0000000,0,1,3600); //Premier
	ciacar[29] = AddStaticVehicleEx(426,3351.2900000,-1173.3597000,12.7830000,0.0000000,0,1,3600); //Premier
	ciacar[30] = AddStaticVehicleEx(426,3355.8372000,-1173.4596000,12.7830000,0.0000000,0,1,3600); //Premier
	ciacar[31] = AddStaticVehicleEx(511,3240.1528000,-1135.3248000,14.7269000,-90.0000000,0,1,3600); //Beagle
	ciacar[32] = AddStaticVehicleEx(519,3223.9160000,-1220.3820000,14.2723000,-90.0000000,0,1,3600); //Shamal
	ciacar[33] = AddStaticVehicleEx(446,3424.0825000,-1138.8242000,-0.0126000,-90.0000000,0,1,3600); //Squalo
	ciacar[34] = AddStaticVehicleEx(460,3426.3313000,-1149.5153000,2.0913000,-90.0000000,0,1,3600); //Skimmer
	//=========================================================================================
	armycar[0] = AddStaticVehicleEx(432, 218.0844, 1860.3893, 13.3121, 0.0000, 57,1,3600);
	armycar[1] = AddStaticVehicleEx(432, 212.4581, 1860.4756, 13.3121, 0.0000,-1,-1,3600);
	armycar[2] = AddStaticVehicleEx(523, 206.2947, 1862.1239, 12.6394, 0.0000,57,1,3600);
	armycar[3] = AddStaticVehicleEx(523, 204.6947, 1862.1239, 12.6394, 0.0000, 57,1,3600);
	armycar[4] = AddStaticVehicleEx(411, 270.4543, 1936.7415, 17.3860, 0.0000, 57,1,3600);
	armycar[5] = AddStaticVehicleEx(411, 274.1943, 1936.7415, 17.3860, 0.0000, 57,1,3600);
	armycar[6] = AddStaticVehicleEx(560, 278.7538, 1937.1749, 17.3114, 0.0000, 57,1,3600);
	armycar[7] = AddStaticVehicleEx(598, 268.5099, 1957.6554, 17.3553, 180.0000,57,1,3600);
	armycar[8] = AddStaticVehicleEx(598, 272.0499, 1957.6554, 17.3553, 180.0000,57,1,3600);
	armycar[9] = AddStaticVehicleEx(598, 275.7099, 1957.6554, 17.3553, 180.0000,57,1,3600);
	armycar[10] = AddStaticVehicleEx(598, 279.4499, 1957.6554, 17.3553, 180.0000, 57,1,3600);
	armycar[11] = AddStaticVehicleEx(470, 278.7610, 1975.3745, 17.5188, 90.0000, 57,1,3600);
	armycar[12] = AddStaticVehicleEx(470, 278.7610, 1979.2086, 17.5188, 90.0000, 57,1,3600);
	armycar[13] = AddStaticVehicleEx(470, 278.7610, 1983.1665, 17.5188, 90.0000, 57,1,3600);
	armycar[14] = AddStaticVehicleEx(470, 278.7610, 1987.7455, 17.4388, 90.0000, 57,1,3600);
	armycar[15] = AddStaticVehicleEx(455, 274.7651, 2013.6807, 18.0785, 90.0000, 57,1,3600);
	armycar[16] = AddStaticVehicleEx(433, 274.7651, 2020.3571, 18.0980, 90.0000, 57,1,3600);
	armycar[17] = AddStaticVehicleEx(487, 346.2580, 2082.5532, 21.1208, 0.0000, 57,1,3600);
	armycar[18] = AddStaticVehicleEx(519, 335.8011, 1987.1711, 18.8665, 180.0000, 57,1,3600);
	armycar[19] = AddStaticVehicleEx(593, 305.3771, 2081.3745, 18.3750, 180.0000, 57,1,3600);
	//=========================================================================================
	presidentcar[0] = AddStaticVehicleEx(409, -699.9584, 947.0534, 12.2019, 0.0000, 0, 1, 3600);
	presidentcar[1] = AddStaticVehicleEx(409, -703.5184, 947.1253, 12.2019, 0.0000,  0, 1, 3600);
	presidentcar[2] = AddStaticVehicleEx(411, -706.3654, 968.2737, 12.1932, 90.0000, 0, 1, 3600);
	presidentcar[3] = AddStaticVehicleEx(451, -700.5110, 968.1331, 12.1438, 180.0000, 0, 1, 3600);
	presidentcar[4] = AddStaticVehicleEx(490, -681.0938, 991.6594, 12.2467, 90.0000,  0, 1, 3600);
	presidentcar[5] = AddStaticVehicleEx(490, -680.8427, 986.3843, 12.3667, 90.0000,  0, 1, 3600);
	presidentcar[6] = AddStaticVehicleEx(579, -670.2139, 990.1248, 12.9837, -90.0000,  0, 1, 3600);
	presidentcar[7] = AddStaticVehicleEx(580, -679.7534, 966.0256, 11.9090, 90.0000,  0, 1, 3600);
	presidentcar[8] = AddStaticVehicleEx(580, -679.6788, 970.0227, 11.9090, 90.0000,  0, 1, 3600);
	presidentcar[9] = AddStaticVehicleEx(580, -671.3931, 967.6518, 11.9090, 180.0000,  0, 1, 3600);
	presidentcar[10] = AddStaticVehicleEx(575, -704.7543, 921.3758, 11.7609, 0.0000,  0, 1, 3600);
	presidentcar[11] = AddStaticVehicleEx(558, -705.0318, 913.0699, 12.0389, 90.0000, 0, 1, 3600);
	presidentcar[12] = AddStaticVehicleEx(487, -653.0196, 1015.2924, 15.0974, 0.0000,  0, 1, 3600);
	presidentcar[13] = AddStaticVehicleEx(519, -1512.4487, -108.6584, 16.3186, 0.0000,  0, 1, 3600);
	presidentcar[14] = AddStaticVehicleEx(511, -1473.5580, -197.1014, 15.8414, 79.0800,  0, 1, 3600);
	presidentcar[15] = AddStaticVehicleEx(452, -649.7050, 867.9734, 0.3228, -134.2800, 0, 1, 3600);
	//=========================================================================================
	rifacar[0] = AddStaticVehicleEx(469, 1846.2831, 2365.6323, 11.0595, 0.0000, 220, 1, 3600);
	rifacar[1] = AddStaticVehicleEx(468, 1894.2745, 2341.2034, 10.5596, 90.0000, 220, 1, 3600);
	rifacar[2] = AddStaticVehicleEx(581, 1890.9927, 2325.2183, 10.2501, 0.0000, 220, 1, 3600);
	rifacar[3] = AddStaticVehicleEx(413, 1906.4724, 2322.8076, 10.7779, 90.0000, 220, 1, 3600);
	rifacar[4] = AddStaticVehicleEx(489, 1906.3647, 2317.6741, 11.0286, -90.0000, 220, 1, 3600);
	rifacar[5] = AddStaticVehicleEx(529, 1906.6931, 2307.7966, 10.4854, 90.0000, 220, 1, 3600);
	rifacar[6] = AddStaticVehicleEx(566, 1906.5370, 2302.9739, 10.8836, -90.0000, 220, 1, 3600);
	rifacar[7] = AddStaticVehicleEx(566, 1906.2382, 2298.1111, 10.8836, -90.0000, 220, 1, 3600);
	rifacar[8] = AddStaticVehicleEx(415, 1906.6603, 2292.6853, 10.5759, 90.0000, 220, 1, 3600);
//=========================================================================================
   	triadscar[0] = AddStaticVehicleEx(409, -2467.1360, 92.5930, 34.9200, -90.0000, 153, 1, 3600);
	triadscar[1] = AddStaticVehicleEx(559, -2482.6321, 101.2989, 34.9061, 0.0000, 153, 1, 3600);
	triadscar[2] = AddStaticVehicleEx(541, -2479.4727, 101.3625, 34.7594, 0.0000, 153, 1, 3600);
	triadscar[3] = AddStaticVehicleEx(579, -2474.2583, 93.8964, 35.0131, 0.0000, 153, 1, 3600);
	triadscar[4] = AddStaticVehicleEx(487, -2492.9060, 97.9498, 35.6846, 90.0000, 153, 1, 3600);
	triadscar[5] = AddStaticVehicleEx(521, -2456.1472, 93.6185, 34.8092, 0.0000, 153, 1, 3600);
	triadscar[6] = AddStaticVehicleEx(522, -2453.1738, 93.7856, 34.8111, 0.0000, 153, 1, 3600);
	triadscar[7] = AddStaticVehicleEx(540, -2456.8091, 105.7364, 35.0668, 0.0000, 153, 1, 3600);
	triadscar[8] = AddStaticVehicleEx(547, -2453.2944, 105.5816, 34.9504, 180.0000, 153, 1, 3600);
	triadscar[9] = AddStaticVehicleEx(547, -2449.7163, 105.6548, 34.8923, 180.0000, 153, 1, 3600);
	//=========================================================================================
	hitmencar[0] = AddStaticVehicleEx(541, -2684.3433, 1367.4602, 16.5869, 180.0000,0,55,3600);
	hitmencar[1] = AddStaticVehicleEx(541, -2680.2515, 1367.3861, 16.5869, 180.0000, 0,55,3600);
	hitmencar[2] = AddStaticVehicleEx(451, -2675.7756, 1367.5848, 16.6421, 0.0000, 0,55,3600);
	hitmencar[3] = AddStaticVehicleEx(451, -2672.1802, 1367.6437, 16.6421, 0.0000, 0,55,3600);
	hitmencar[4] = AddStaticVehicleEx(415, -2670.1055, 1331.5171, 16.7310, 0.0000,0,55,3600);
	hitmencar[5] = AddStaticVehicleEx(507, -2679.3638, 1331.3710, 16.8921, 0.0000,0,55,3600);
	hitmencar[6] = AddStaticVehicleEx(521, -2696.3794, 1331.5344, 16.5941, 0.0000, 0,55,3600);
	hitmencar[7] = AddStaticVehicleEx(522, -2693.7764, 1331.6302, 16.6493, 0.0000,0,55,3600);
	hitmencar[8] = AddStaticVehicleEx(469, -2654.2739, 1430.7524, 24.6397, -76.2000,0,55,3600);
	hitmencar[9] = AddStaticVehicleEx(507, -2674.9343, 1331.2745, 16.8921, 0.0000,0,55,3600);
	hitmencar[10] = AddStaticVehicleEx(507, -2684.1008, 1331.4565, 16.8921, 0.0000,0,55,3600);
	hitmencar[11] = AddStaticVehicleEx(507, -2688.7324, 1331.5968, 16.8323, 0.0000,0,55,3600);
	hitmencar[12] = AddStaticVehicleEx(415, -2666.1558, 1331.5043, 16.7310, 0.0000, 0,55,3600);
	hitmencar[13] = AddStaticVehicleEx(411, -2696.9146, 1367.3280, 16.8130, -90.0000,0,55,3600);
	hitmencar[14] = AddStaticVehicleEx(411, -2696.8931, 1362.6849, 16.8130, -90.0000,0,55,3600);
	hitmencar[15] = AddStaticVehicleEx(487, -2631.4792, 1417.3260, 24.8868, 0.0000,0,55,3600);


	//=========================================================================================
	newscar[0] = AddStaticVehicleEx(582,1795.24,-1284.89,13.44,125.29,125,125,3600); // News van 71
	newscar[1] = AddStaticVehicleEx(582,1797.18,-1291.08,13.27,108.95,125,125,30000); // News van 72
	newscar[2] = AddStaticVehicleEx(488,1545.4849,-1353.9330,329.6510,185.4584,125,125,30000); // News Chopper 73
	newscar[3] = AddStaticVehicleEx(400, 1795.5168, -1303.2826, 13.4786, 0.0000, 125, 125, 10320);
	newscar[4] = AddStaticVehicleEx(415, 1779.9465, -1304.2571, 13.2177, 0.0000, 125, 125, 32100);
	newscar[5] = AddStaticVehicleEx(400, 1792.0760, -1303.0172, 13.4967, 0.0000, 125, 125, 10320);
	//=========================================================================================
	navycar[0] = AddStaticVehicleEx(476,-1439.0986000,494.4066000,19.2751000,331.6683000, 140,1,3600); //Rustler
	navycar[1] = AddStaticVehicleEx(476,-1425.4404000,493.3447000,19.2751000,331.6683000,140,1,3600); //Rustler
	navycar[2] = AddStaticVehicleEx(476,-1410.9913000,493.3447000,19.2751000,331.6683000,140,1,3600); //Rustler
	navycar[3] = AddStaticVehicleEx(476,-1440.7740000,510.5169000,19.3145000,235.2306000,140,1,36010); //Rustler
	navycar[4] = AddStaticVehicleEx(520,-1308.4419000,495.2885000,18.8781000,318.4592000, 0, 1, 12115 );//Hydra
	navycar[5] = AddStaticVehicleEx(520,-1278.7811000,495.2842000,18.8781000,318.4592000, 0, 1, 12115 ); //Hydra
	navycar[6] = AddStaticVehicleEx(520,-1292.8400000,495.2842000,18.8781000,318.4592000, 0, 1, 12115 ); //Hydra
	navycar[7] = AddStaticVehicleEx(520,-1263.4852000,495.2842000,18.8781000,318.4592000, 0, 1, 15121 ); //Hydra
	navycar[8] = AddStaticVehicleEx(511,-1351.5270000,387.4798000,31.5032000,90.0000000,140,1,3600); //Beagle
	navycar[9] = AddStaticVehicleEx(497,-1505.3950000,440.8022000,45.1576000,-90.0000000,140,1,3600); //Police Maverick
	navycar[10] = AddStaticVehicleEx(497,-1506.6195000,395.2100000,45.0536000,-90.0000000,140,1,3600); //Police Maverick
	navycar[11] = AddStaticVehicleEx(447,-1510.8783000,334.4812000,53.4340000,0.0000000,140,1,3600); //Seasparrow
	navycar[12] = AddStaticVehicleEx(447,-1491.9558000,336.9490000,53.4340000,0.0000000,140,1,3600); //Seasparrow
	navycar[13] = AddStaticVehicleEx(425,-1585.9984000,338.3718000,24.8600000,90.0000000,140,1,3600); //Hunter
	navycar[14] = AddStaticVehicleEx(425,-1605.8413000,287.8786000,7.9955000,90.0000000,140,1,3600); //Hunter
	navycar[15] = AddStaticVehicleEx(460,-1411.3591000,285.8849000,2.0030000,-90.0000000,140,1,3600); //Skimmer
	navycar[16] = AddStaticVehicleEx(595,-1425.2203000,392.6666000,0.6028000,-90.0000000,140,1,3600); //Launch
	navycar[17] = AddStaticVehicleEx(472,-1444.0786000,392.5197000,0.2024000,-90.0000000,140,1,3600); //Coastguard
	navycar[18] = AddStaticVehicleEx(430,-1445.9821000,427.3067000,0.2663000,-90.0000000,140,1,3600); //Predator
	navycar[19] = AddStaticVehicleEx(430,-1426.1270000,427.7033000,-0.0070000,-90.0000000,140,1,3600); //Predator
	navycar[20] = AddStaticVehicleEx(446,-1446.7324000,355.4276000,0.3900000,-90.0000000,140,1,3600); //Squalo
	navycar[21] = AddStaticVehicleEx(452,-1429.5355000,355.8366000,-0.0104000,-90.0000000,140,1,3600); //Speeder
	navycar[22] = AddStaticVehicleEx(559, -1227.6841, 463.2289, 6.8028, 90.0000,140,1,3600); //Speeder
	navycar[23] = AddStaticVehicleEx(490, -1227.6841, 456.8075, 7.3590, 90.0000, 140,1,3600); //Speeder
	navycar[24] = AddStaticVehicleEx(587, -1227.6841, 459.9971, 6.9524, 90.0000, 140,1,3600); //Speeder
	navycar[25] = AddStaticVehicleEx(490, -1227.6841, 454.0064, 7.3590, 90.0000, 140,1,3600); //Speeder
	navycar[26] = AddStaticVehicleEx(490, -1227.6841, 450.9076, 7.3590, 90.0000,140,1,3600); //Speeder
	navycar[27] = AddStaticVehicleEx(523, -1227.6841, 445.8654, 6.7034, 90.0000, 140,1,3600); //Speeder
	navycar[28] = AddStaticVehicleEx(523, -1227.6841, 444.3038, 6.7034, 90.0000, 140,1,3600); //Speeder
	//=========================================================================================
	governcar[0] = AddStaticVehicleEx(421, 2412.5938, 2531.1482, 21.6692, 0.0000, 1, 0, 3600);
	governcar[1] = AddStaticVehicleEx(421, 2417.8975, 2531.1365, 21.6692, 0.0000, 1, 0, 3600);
	governcar[2] = AddStaticVehicleEx(421, 2406.9697, 2531.2009, 21.6692, 0.0000, 1, 0, 3600);
	governcar[3] = AddStaticVehicleEx(409, 2403.7991, 2547.6299, 21.8268, 90.0000, 1, 0, 3600);
	governcar[4] = AddStaticVehicleEx(409, 2403.9084, 2557.2317, 21.8268, 90.0000, 1, 0, 3600);
	governcar[5] = AddStaticVehicleEx(479, 2416.6462, 2571.0520, 21.6323, -15.0000, 1, 0, 3600);
	governcar[6] = AddStaticVehicleEx(451, 2426.3843, 2547.9104, 22.5704, 0.0000, 1, 0, 3600);
	governcar[7] = AddStaticVehicleEx(451, 2421.3682, 2547.6135, 22.5704, 180.0000, 1, 0, 3600);
	governcar[8] = AddStaticVehicleEx(480, 2429.9761, 2567.8962, 21.6385, -14.4600, 1, 0, 3600);
	governcar[9] = AddStaticVehicleEx(415, 2434.0833, 2566.5488, 21.6726, -13.9800, 1, 0, 3600);
	governcar[10] = AddStaticVehicleEx(487, 2413.3169, 2475.9272, 72.2358, 0.0000, 1, 0, 3600);
	governcar[11] = AddStaticVehicleEx(519, 1508.5896, 1839.1840, -84.1111, 180.0000, 1,0,3600);
	//=========================================================================================
	bratvacar[0] = AddStaticVehicleEx(409,1446.4000200,750.9000200,10.7000000,0.0000000,114,114,30000); // Freeway 1
	bratvacar[1] = AddStaticVehicleEx(522,1447.5999800,758.5000000,10.5000000,0.0000000,114,114,30000); // Freeway 2
	bratvacar[2] = AddStaticVehicleEx(522,1447.5000000,743.7000100,10.5000000,0.0000000,114,114,30000); // Freeway 3
	bratvacar[3] = AddStaticVehicleEx(579,1413.4000200,761.9000200,10.9000000,270.0000000,114,114,30000); // Freeway 4
	bratvacar[4] = AddStaticVehicleEx(487,1425.8021, 682.7799, 11.3272,180.0000000,114,114,30000); // Freeway 5
	bratvacar[5] = AddStaticVehicleEx(517,1413.5999800,755.7999900,10.8000000,270.0000000,114,114,30000); // Freeway 5
	bratvacar[6] = AddStaticVehicleEx(517,1413.6992200,768.6992200,10.8000000,270.0000000,114,114,30000); // Freeway 5
	bratvacar[7] = AddStaticVehicleEx(415, 1413.2681, 749.4654, 10.5665, -90.0000, 114,114,30000);
	bratvacar[8] = AddStaticVehicleEx(426, 1413.5952, 743.1091, 10.5665, -90.0000, 114,114,30000);
	bratvacar[9] = AddStaticVehicleEx(541, 1413.3782, 746.3242, 10.3373, -90.0000,114,114,30000);
	//=========================================================================================
	ballascar[0] = AddStaticVehicleEx(412, -2676.3030, -23.4215, 4.7357, 180.0000, 134, 139, 3600);
	ballascar[1] = AddStaticVehicleEx(412, -2679.5283, -23.5395, 4.7357, 180.0000, 134, 139, 3600);
	ballascar[2] = AddStaticVehicleEx(482, -2663.7573, -35.7443, 4.8922, 180.0000, 134, 139, 3600);
	ballascar[3] = AddStaticVehicleEx(469, -2689.6514, -32.6979, 4.4486, 90.0000, 134, 139, 3600);
	ballascar[4] = AddStaticVehicleEx(415, -2673.2908, -55.4470, 4.1083, 0.0000,134, 139, 3600);
	ballascar[5] = AddStaticVehicleEx(581, -2660.8125, -55.1749, 3.9280, 0.0000,134, 139, 3600);
	ballascar[6] = AddStaticVehicleEx(468, -2666.9521, -55.2673, 3.9904, 0.0000,134, 139, 3600);
	ballascar[7] = AddStaticVehicleEx(439, -2669.7781, -34.9825, 4.1753, 0.0000, 134, 139, 3600);
	ballascar[8] = AddStaticVehicleEx(505, -2672.9751, -35.1430, 4.5255, 180.0000,134, 139, 3600);
    //=========================================================================================
	parlamentcar[0] = AddStaticVehicleEx(405, -2876.9548, 505.2608, 4.7972, 0.0000, 155, 0, 36800);
	parlamentcar[1] = AddStaticVehicleEx(405, -2887.2273, 505.5503, 4.8372, 0.0000, 155, 0, 36080);
	parlamentcar[2] = AddStaticVehicleEx(402, -2902.2395, 505.4116, 4.6780, 180.0000, 155, 0, 36800);
	parlamentcar[3] = AddStaticVehicleEx(445, -2891.4722, 505.3306, 4.7341, 180.0000, 155, 0, 38600);
	parlamentcar[4] = AddStaticVehicleEx(445, -2881.8059, 504.8357, 4.9141, 180.0000, 155, 0, 38600);
	parlamentcar[5] = AddStaticVehicleEx(454, -2957.4119, 497.0235, 1.8113, 0.0000, 155, 0, 36080);
	parlamentcar[6] = AddStaticVehicleEx(458, -2872.2881, 504.4973, 4.7704, 180.0000, 155, 0, 37600);
	parlamentcar[7] = AddStaticVehicleEx(458, -2906.6284, 504.9459, 4.7650, 0.0000, 155, 0, 36060);
	parlamentcar[8] = AddStaticVehicleEx(559, -2912.4399, 504.6830, 4.6556, 0.0000, 155, 0, 36500);
	parlamentcar[9] = AddStaticVehicleEx(579, -2921.9111, 503.9877, 4.9413, 0.0000, 155, 0, 360540);
	parlamentcar[10] = AddStaticVehicleEx(580, -2867.3232, 503.9572, 4.6003, 0.0000, 155, 0, 36400);
	parlamentcar[11] = AddStaticVehicleEx(579, -2927.5132, 503.0359, 4.8646, 0.0000, 155, 0, 36030);
	parlamentcar[13] = AddStaticVehicleEx(487, -2981.8872, 471.3196, 5.1472, 0.0000, 155, 0, 36020);
	parlamentcar[14] = AddStaticVehicleEx(487, -2948.9993, 470.2853, 5.1472, 0.0000, 155, 0, 36100);
	parlamentcar[15] = AddStaticVehicleEx(402, -2896.9653, 505.3657, 4.6780, 180.0000, 155, 0, 36100);
	//=========================================================================================
	sevilecar[0] = AddStaticVehicleEx(469, 2458.6462, -1673.9486, 13.4528, 0.0000, 183,1, 3600);
	sevilecar[1] = AddStaticVehicleEx(468, 2511.3403, -1668.0143, 13.2722, 90.0000, 183,1, 3600);
	sevilecar[2] = AddStaticVehicleEx(461, 2510.9988, -1666.5447, 13.0952, 90.0000, 183,1, 3600);
	sevilecar[3] = AddStaticVehicleEx(459, 2509.4907, -1686.5682, 13.5818, 48.6000, 183,1, 3600);
	sevilecar[4] = AddStaticVehicleEx(567, 2507.4287, -1677.1029, 13.0930, -30.4200,183,1, 3600);
	sevilecar[5] = AddStaticVehicleEx(567, 2492.5525, -1683.9448, 13.0930, -87.6600, 183,1, 3600);
	sevilecar[6] = AddStaticVehicleEx(405, 2497.8110, -1650.2526, 13.3879, 180.0000,183,1, 3600);
	sevilecar[7] = AddStaticVehicleEx(505, 2479.5190, -1653.6350, 13.7638, 90.0000, 183,1, 3600);
	sevilecar[8] = AddStaticVehicleEx(415, 2473.1096, -1689.8483, 14.3621, 0.0000, 183,1, 3600);
	//=========================================================================================
	crlcar[0] = AddStaticVehicleEx(409, 658.6072, -1275.7793, 13.3883, 0.0000, 219,1,3600);
	crlcar[1] = AddStaticVehicleEx(477, 685.1218, -1285.1156, 13.4600, 90.0000,219,1,3600);
	crlcar[2] = AddStaticVehicleEx(579, 684.9189, -1289.9955, 13.5340, 90.0000,219,1,3600);
	crlcar[3] = AddStaticVehicleEx(541, 685.0098, -1294.8306, 13.9301, 90.0000,219,1,3600);
	crlcar[4] = AddStaticVehicleEx(522, 671.2844, -1283.8420, 13.2980, 0.0000, 219,1,3600);
	crlcar[5] = AddStaticVehicleEx(461, 671.3315, -1269.2686, 13.1886, 0.0000, 219,1,3600);
	crlcar[6] = AddStaticVehicleEx(550, 685.4645, -1266.4215, 13.3418, 90.0000,219,1,3600);
	crlcar[7] = AddStaticVehicleEx(550, 685.5191, -1262.4617, 13.3913, 90.0000,219,1,3600);
	crlcar[8] = AddStaticVehicleEx(487, 754.2037, -1216.7567, 13.7979, 0.0000, 219,1,3600);
	crlcar[9] = AddStaticVehicleEx(555, 674.6350, -1245.7108, 14.4097, -38.6400, 219,1,3600);
	//=========================================================================================
	levelcar[0] = AddStaticVehicleEx(400, 1356.2504, -1665.1857, 13.6602, -90.0000, -1, -1, 13200);
	levelcar[1] = AddStaticVehicleEx(402, 1361.8754, -1642.9507, 13.1479, -90.0000, -1, -1, 10032);
	levelcar[2] = AddStaticVehicleEx(418, 1356.2504, -1674.5435, 13.8231, -90.0000, -1, -1, 13200);
	levelcar[3] = AddStaticVehicleEx(426, 1361.8754, -1648.5557, 13.3273, -90.0000, -1, -1, 13200);
	levelcar[4] = AddStaticVehicleEx(461, 1371.9760, -1638.9323, 12.8601, 180.0000, -1, -1, 10320);
	levelcar[5] = AddStaticVehicleEx(405, 1361.8754, -1654.6458, 13.3902, -90.0000, -1, -1, 10320);
	levelcar[6] = AddStaticVehicleEx(461, 1369.6658, -1638.9323, 12.8358, 180.0000, -1, -1, 12300);
	levelcar[7] = AddStaticVehicleEx(421, 1361.8754, -1660.2429, 13.1457, -90.0000, -1, -1, 13200);
	levelcar[8] = AddStaticVehicleEx(422, 1356.2504, -1670.0786, 13.3639, -90.0000, -1, -1, 10230);
	levelcar[9] = AddStaticVehicleEx(461, 1374.2163, -1638.8379, 12.3488, 180.0000, -1, -1, 11200);
	levelcar[10] = AddStaticVehicleEx(461, 1367.4088, -1638.8099, 12.3488, 180.0000,-1, -1, 12100);
	levelcar[11] = AddStaticVehicleEx(415, 1366.3492, -1679.3250, 13.3012, 0.0000,  -1, -1, 11020);
	levelcar[12] = AddStaticVehicleEx(424, 1355.3732, -1680.3619, 13.3012, -90.0000,-1, -1, 11020);

	//==========================================================================================
	helpercar[0] = AddStaticVehicleEx(415, 1520.0000, -1774.2034, 33.1045, 0.0000, -1, -1, 33100);
	helpercar[1] = AddStaticVehicleEx(426, 1505.0000, -1774.2034, 33.1155, 0.0000, -1, -1, 33100);
	helpercar[2] = AddStaticVehicleEx(429, 1525.0000, -1774.2034, 32.9984, 0.0000, -1, -1, 10220);
	helpercar[3] = AddStaticVehicleEx(445, 1510.0000, -1774.2034, 33.2432, 0.0000, -1, -1, 10120);
	helpercar[4] = AddStaticVehicleEx(560, 1515.0000, -1774.2034, 33.0448, 0.0000, -1, -1, 10021);
	//--------------------------taxi car--------
	taxicar[0] = AddStaticVehicleEx(420, -1994.5508, 214.2161, 27.3836, 0.0000,6,6,30000); // YCAT Co.Taxi 64
	taxicar[1] = AddStaticVehicleEx(438, -1963.8016, 213.4173, 27.6083, 0.0000,6,6,30000); // YCAT Co. Taxi 65
	taxicar[2] = AddStaticVehicleEx(438, -1967.2467, 213.6409, 27.6315, 0.0000,6,6,30000); // YCAT Co. Taxi 66
	taxicar[3] = AddStaticVehicleEx(438, -1970.5300, 213.8359, 27.6894, 0.000,6,6,30000); // YCAT Co. Taxi 67
	taxicar[4] = AddStaticVehicleEx(420, -1991.0157, 214.3014, 27.3836, 0.0000,6,6,30000); // YCAT Co. Taxi 68
	taxicar[5] = AddStaticVehicleEx(420, -1987.3789, 214.3742, 27.3836, 0.0000,6,6,30000); // YCAT Co. Taxi 69
	taxicar[6] = AddStaticVehicleEx(420, -1983.8773, 214.5709, 27.3836, 0.000,6,6,30000); // YCAT Co. Taxi 70
	taxicar[7] = AddStaticVehicleEx(560, -1980.5356, 214.5956, 27.2920, 0.0000, 6, 6,3600);
	taxicar[8] = AddStaticVehicleEx(560, -1977.1531, 214.5956, 27.2920, 0.0000, 6, 6, 3600);
 	taxicar[9] = AddStaticVehicleEx(409, -1994.4072, 203.7884, 27.3938, 0.0000, 1, 1, 3800);
 	taxicar[10] = AddStaticVehicleEx(579, -1959.6979, 200.0238, 27.6013, 90.0000, 6, 6, 3800);
	taxicar[11] = AddStaticVehicleEx(487, -1969.2109, 164.1640, 37.1366, 0.0000, 6, 1, 3800);


//========================ambulance
	ambulance[0] = AddStaticVehicleEx(416, 1178.2936, -1338.9949, 14.1181, -90.0000, 1, 3, 103210);
	ambulance[1] = AddStaticVehicleEx(416, 1177.2778, -1308.5884, 14.1181, -90.0000, 1, 3, 132100);
	ambulance[2] = AddStaticVehicleEx(417, 1162.8751, -1372.6104, 26.8563, 0.0000, 1, 3, 103210);
	ambulance[3] = AddStaticVehicleEx(487, 1161.4510, -1354.3461, 26.9280, -89.2800, 1, 3, 103210);
	dmwcar[0] = AddStaticVehicleEx(402, 1279.0052, -1823.1926, 12.9940, 90.0000, 6, 7, 1);
	dmwcar[1] = AddStaticVehicleEx(402, 1279.0330, -1830.0693, 12.9940, 90.0000, 6, 7, 1);
	dmwcar[2] = AddStaticVehicleEx(402, 1279.0345, -1815.6537, 13.0234, 90.0000, 6, 7, 1);
	dmwcar[3] = AddStaticVehicleEx(402, 1279.2175, -1808.0021, 13.0234, 90.0000, 6, 7, 1);
	planesi = AddStaticVehicleEx(593, 1934.2991, -2242.5225, 14.5249, 180.0000, 6,6, 12200);
	planesi1 = AddStaticVehicleEx(593, 1912.0454, -2242.6655, 14.5249, 180.0000, 6,6, 10220);
	boatsi = AddStaticVehicleEx(446, 417.2312, -1917.5142, 0.9529, 180.0000, 6,6, 2200);
	boatsi1 = AddStaticVehicleEx(446, 428.7803, -1917.3130, 0.9529, 180.0000, 6,6, 10220);

//=================================Statecar carturi rent......=======================
    kartcar[0] = AddStaticVehicleEx(571, 2288.8938, -2343.1702, 12.8700, 225.0000, -1, -1, 10032);
	kartcar[1] = AddStaticVehicleEx(571, 2281.5139, -2350.4556, 12.8700, 225.0000, -1, -1, 103120);
	kartcar[2] = AddStaticVehicleEx(571, 2284.9502, -2353.8887, 12.8700, 225.0000, -1, -1, 103120);
	kartcar[3] = AddStaticVehicleEx(571, 2292.3262, -2346.5928, 12.8700, 225.0000, -1, -1, 103210);
	kartcar[4] = AddStaticVehicleEx(571, 2299.8325, -2339.0884, 12.8700, 225.0000, -1, -1, 103210);
	kartcar[5] = AddStaticVehicleEx(571, 2296.4221, -2335.6553, 12.8700, 225.0000, -1, -1, 112300);
	kartcar[6] = AddStaticVehicleEx(571, 2293.4683, -2332.7012, 12.8700, 225.0000, -1, -1, 113200);
	kartcar[7] = AddStaticVehicleEx(571, 2286.0012, -2340.2141, 12.8700, 225.0000, -1, -1, 131200);
	kartcar[8] = AddStaticVehicleEx(571, 2278.7212, -2347.5803, 12.8700, 225.0000, -1, -1, 132100);
	kartcar[9] = AddStaticVehicleEx(571, 2290.3450, -2329.5093, 12.8700, 225.0000, -1, -1, 112300);
	kartcar[10] = AddStaticVehicleEx(571, 2282.7468, -2336.9629, 12.8700, 225.0000, -1, -1, 123100);
	kartcar[11] = AddStaticVehicleEx(571, 2275.4775, -2344.3401, 12.8700, 225.0000, -1, -1, 121300);
	kartcar[12] = AddStaticVehicleEx(571, 2284.2561, -2323.5254, 12.8700, 225.0000, -1, -1, 101230);
	kartcar[13] = AddStaticVehicleEx(571, 2276.8281, -2330.9771, 12.8700, 225.0000, -1, -1, 132100);
	kartcar[14] = AddStaticVehicleEx(571, 2269.4114, -2338.2441, 12.8700, 225.0000, -1, -1, 123100);
	kartcar[15] = AddStaticVehicleEx(571, 2287.3755, -2326.6306, 12.8700, 225.0000, -1, -1, 103210);
	kartcar[16] = AddStaticVehicleEx(571, 2279.9734, -2334.1282, 12.8700, 225.0000, -1, -1, 102130);
	kartcar[17] = AddStaticVehicleEx(571, 2272.7290, -2341.5818, 12.8700, 225.0000, -1, -1, 101230);
//========================rentls=======================
    rentls[0] = AddStaticVehicleEx(411, 1062.6261, -1772.6776, 13.0559, 90.0000, -1, -1, 32100);
	rentls[1] = AddStaticVehicleEx(405, 1062.7650, -1766.8439, 13.2821, 90.0000, -1, -1, 13200);
	rentls[2] = AddStaticVehicleEx(402, 1062.7719, -1761.0592, 13.2821, 90.0000, -1, -1, 13200);
	rentls[3] = AddStaticVehicleEx(400, 1062.5160, -1754.9949, 13.3963, 90.0000, -1, -1, 13200);
	rentls[4] = AddStaticVehicleEx(415, 1062.0632, -1749.1721, 13.3963, 90.0000, -1, -1, 32100);
	rentls[5] = AddStaticVehicleEx(426, 1061.9983, -1743.1343, 13.2204, 90.0000, -1, -1, 32100);
	rentls[6] = AddStaticVehicleEx(429, 1077.1534, -1754.9341, 13.1826, 90.0000, -1, -1, 13200);
	rentls[7] = AddStaticVehicleEx(445, 1076.8787, -1760.7437, 13.0644, 90.0000, -1, -1, 13200);
//=======================rentlv================
    rentlv[0] = AddStaticVehicleEx(411, 2123.0669, 1397.9880, 10.5648, 0.0000, -1, -1, 10320);
	rentlv[1] = AddStaticVehicleEx(402, 2129.6245, 1398.1969, 10.5648, 0.0000, -1, -1, 10320);
	rentlv[2] = AddStaticVehicleEx(415, 2136.0444, 1397.9563, 10.5648, 0.0000, -1, -1, 13200);
	rentlv[3] = AddStaticVehicleEx(560, 2148.7173, 1398.1233, 10.5648, 0.0000, -1, -1, 13200);
	rentlv[4] = AddStaticVehicleEx(562, 2142.3232, 1398.3479, 10.8189, 0.0000, -1, -1, 13200);
//======================rentsf==================
    rentsf[0] = AddStaticVehicleEx(412, -1988.3588, 273.3424, 34.8587, 90.0000, -1, -1, 10230);
	rentsf[1] = AddStaticVehicleEx(415, -1989.0226, 267.5165, 34.8587, 90.0000, -1, -1, 13200);
	rentsf[2] = AddStaticVehicleEx(445, -1989.5460, 260.9257, 34.8587, 90.0000, -1, -1, 12300);
	rentsf[3] = AddStaticVehicleEx(458, -1990.2953, 254.3247, 34.9048, 90.0000, -1, -1, 13200);
	rentsf[4] = AddStaticVehicleEx(475, -1991.0624, 248.3320, 34.7362, 90.0000, -1, -1, 13200);
	rentsf[5] = AddStaticVehicleEx(508, -1991.4622, 242.4772, 34.8013, 90.0000, -1, -1, 13200);
//===============scutere==========================
    rentvehair[0] = AddStaticVehicleEx(462, 1394.3051, -1653.8340, 13.0235, 0.0000, -1, -1, 10120);
	rentvehair[1] = AddStaticVehicleEx(462, 1396.1650, -1653.8340, 13.0235, 0.0000, -1, -1, 10120);
	rentvehair[2] = AddStaticVehicleEx(462, 1398.1251, -1653.8340, 13.0235, 0.0000, -1, -1, 10120);
	rentvehair[3] = AddStaticVehicleEx(462, 1399.8051, -1653.8340, 13.0235, 0.0000, -1, -1, 12100);
	rentvehair[4] = AddStaticVehicleEx(462, 1401.7051, -1653.8340, 13.0235, 0.0000, -1, -1, 10210);
	rentvehair[5] = AddStaticVehicleEx(462, 1403.6051, -1653.8340, 13.0235, 0.0000, -1, -1, 12100);
	rentvehair[6] = AddStaticVehicleEx(462, 1695.2424, -2243.1787, -3.2384, 0.0000, -1, -1, 12100);
	rentvehair[7] = AddStaticVehicleEx(462, 1693.6624, -2243.1587, -3.2384, 0.0000, -1, -1, 10210);
	rentvehair[8] = AddStaticVehicleEx(462, 1697.0424, -2243.1587, -3.2384, 0.0000, -1, -1, 10120);
	rentvehair[9] = AddStaticVehicleEx(462, 1698.4624, -2243.1587, -3.2384, 0.0000, -1, -1, 12100);
	rentvehair[10] = AddStaticVehicleEx(462, -1408.0790, -303.5502, 13.7757, 90.0000, -1, -1, 12100);
	rentvehair[11] = AddStaticVehicleEx(462, -1406.3962, -305.4910, 13.7757, 90.0000, -1, -1, 12100);
	rentvehair[12] = AddStaticVehicleEx(462, -1404.7010, -307.4533, 13.7757, 90.0000, -1, -1, 11200);
	rentvehair[13] = AddStaticVehicleEx(462, -1403.0636, -309.5581, 13.7757, 90.0000, -1, -1, 12100);
	rentvehair[14] = AddStaticVehicleEx(462, 1675.0101, 1455.1771, 10.2226, 90.0000, -1, -1, 10210);
	rentvehair[15] = AddStaticVehicleEx(462, 1675.0101, 1453.8571, 10.2226, 90.0000, -1, -1, 10021);
	rentvehair[16] = AddStaticVehicleEx(462, 1675.0101, 1452.2571, 10.2226, 90.0000, -1, -1, 10210);
	rentvehair[17] = AddStaticVehicleEx(462, 1675.0101, 1450.9572, 10.2226, 90.0000, -1, -1, 12100);
 //=============================
    admincar[0] = AddStaticVehicleEx(411, 1082.9253, -378.1115, 3002.2161, 90.0000, 1, 0, 3600);
	admincar[1] = AddStaticVehicleEx(451, 1082.7987, -374.9242, 3002.2161, 90.0000, 1, 0, 3600);
	admincar[2] = AddStaticVehicleEx(494, 1082.5782, -372.0070, 3002.2898, 90.0000, 1, 0, 3600);
//===========================================derbycar=================
//sanchez 14
	derbycar[0] = AddStaticVehicleEx(468, -1472.6295, 1564.4727, 1052.3861, 0.0000, -1, -1, 102310);
	derbycar[1] = AddStaticVehicleEx(468, -1472.6295, 1560.9927, 1052.3861, 0.0000, -1, -1, 121300);
	derbycar[2] = AddStaticVehicleEx(468, -1470.5895, 1560.9927, 1052.3861, 0.0000, -1, -1, 102130);
	derbycar[3] = AddStaticVehicleEx(468, -1470.5895, 1564.4727, 1052.3861, 0.0000, -1, -1, 102310);
	derbycar[4] = AddStaticVehicleEx(468, -1470.5895, 1567.8927, 1052.3861, 0.0000, -1, -1, 123100);
	derbycar[5] = AddStaticVehicleEx(468, -1472.6495, 1567.8927, 1052.3861, 0.0000, -1, -1, 123100);
//monster 15
    derbycar[6] = AddStaticVehicleEx(556, -1509.6442, 982.5623, 1037.6833, -71.2200, -1, -1, 132100);
	derbycar[7] = AddStaticVehicleEx(557, -1284.7085, 998.4551, 1037.4500, 87.3000, -1, -1, 103120);
	derbycar[8] = AddStaticVehicleEx(556, -1333.9647, 942.5914, 1036.6554, 19.6800, -1, -1, 121300);
	derbycar[9] = AddStaticVehicleEx(444, -1323.8920, 1043.6079, 1038.9084, -204.7199, -1, -1, 123100);
	derbycar[10] = AddStaticVehicleEx(444, -1479.9966, 1041.1550, 1038.6447, -138.9599, -1, -1, 1301230);
	derbycar[11] = AddStaticVehicleEx(556, -1427.1805, 1055.2838, 1038.7015, -171.0600, -1, -1, 132100);
	derbycar[12] = AddStaticVehicleEx(557, -1374.6465, 1055.2626, 1038.5222, -186.3000, -1, -1, 123100);
//hotring  7
    derbycar[13] = AddStaticVehicleEx(494, -1402.7773, -267.5930, 1043.4491, -13.0200, -1, -1, 132100);
	derbycar[14] = AddStaticVehicleEx(503, -1406.5001, -266.6159, 1043.4889, -13.0800, -1, -1, 123100);
	derbycar[15] = AddStaticVehicleEx(502, -1409.8330, -266.0409, 1043.4889, -12.4800, -1, -1, 123100);
	derbycar[16] = AddStaticVehicleEx(503, -1404.6876, -259.4220, 1043.4889, -13.0800, -1, -1, 121300);
	derbycar[17] = AddStaticVehicleEx(494, -1401.0641, -260.0820, 1043.4491, -13.0200, -1, -1, 213100);
	derbycar[18] = AddStaticVehicleEx(502, -1408.0966, -258.4322, 1043.4889, -12.4800, -1, -1, 123100);
//sandking 4
    derbycar[19] = AddStaticVehicleEx(495, -1423.3438, -666.6980, 1060.0825, -92.0000, -1, -1, 123100);
	derbycar[20] = AddStaticVehicleEx(495, -1423.2971, -662.0398, 1060.0825, -92.0000, -1, -1, 13200);
	derbycar[21] = AddStaticVehicleEx(495, -1416.2004, -662.0398, 1059.4171, -92.0000, -1, -1, 112300);
	derbycar[22] = AddStaticVehicleEx(495, -1416.3802, -666.6980, 1059.4171, -92.0000, -1, -1, 131200);
	derbycar[23] = AddStaticVehicleEx(495, -1410.4608, -666.6980, 1058.8053, -92.0000, -1, -1, 113200);
	derbycar[24] = AddStaticVehicleEx(495, -1410.2682, -662.0398, 1058.8053, -92.0000, -1, -1, 112300);
	derbycar[25] = AddStaticVehicleEx(495, -1404.5851, -662.0398, 1058.2517, -92.0000, -1, -1, 123100);
	derbycar[26] = AddStaticVehicleEx(495, -1404.5131, -666.6980, 1058.4327, -92.0000, -1, -1, 12100);
	derbycar[27] = AddStaticVehicleEx(495, -1398.0708, -662.0398, 1057.7976, -92.0000, -1, -1, 123100);
	derbycar[28] = AddStaticVehicleEx(495, -1398.4435, -666.7062, 1057.7972, -92.0000, -1, -1, 123100);
    LinkVehicleToInterior(derbycar[19], 4);
    LinkVehicleToInterior(derbycar[20], 4);
    LinkVehicleToInterior(derbycar[21], 4);
    LinkVehicleToInterior(derbycar[22], 4);
    LinkVehicleToInterior(derbycar[23], 4);
    LinkVehicleToInterior(derbycar[24], 4);
    LinkVehicleToInterior(derbycar[25], 4);
    LinkVehicleToInterior(derbycar[26], 4);
    LinkVehicleToInterior(derbycar[27], 4);
    LinkVehicleToInterior(derbycar[28], 4);
    LinkVehicleToInterior(derbycar[13], 7);
    LinkVehicleToInterior(derbycar[14], 7);
    LinkVehicleToInterior(derbycar[15], 7);
    LinkVehicleToInterior(derbycar[16], 7);
    LinkVehicleToInterior(derbycar[17], 7);
    LinkVehicleToInterior(derbycar[18], 7);
    LinkVehicleToInterior(derbycar[6], 15);
    LinkVehicleToInterior(derbycar[7], 15);
    LinkVehicleToInterior(derbycar[8], 15);
    LinkVehicleToInterior(derbycar[9], 15);
    LinkVehicleToInterior(derbycar[10], 15);
    LinkVehicleToInterior(derbycar[11], 15);
    LinkVehicleToInterior(derbycar[12], 15);
   	LinkVehicleToInterior(derbycar[0], 14);
	LinkVehicleToInterior(derbycar[1], 14);
	LinkVehicleToInterior(derbycar[2], 14);
	LinkVehicleToInterior(derbycar[3], 14);
	LinkVehicleToInterior(derbycar[4], 14);
	LinkVehicleToInterior(derbycar[5], 14);
//========================================coaiecar====================
//------------------------woden-----------------
	wodden = AddStaticVehicleEx(578, -526.3800, -87.3350, 62.8687, 0.0000, -1, -1, 36100);//dft
	wodden1 = AddStaticVehicleEx(578, -495.4971, -70.0000, 62.2074, 90.0000, -1, -1, 11100);//dft
	wodden2 = AddStaticVehicleEx(578, -495.4971, -65.0000, 62.2074, 90.0000, -1, -1, 111200);//dft
	wodden3 = AddStaticVehicleEx(578, -495.4971, -60.0000, 62.2074, 90.0000, -1, -1, 111200);//dft
	wodden4 = AddStaticVehicleEx(578, -495.4971, -55.0000, 62.2074, 90.0000, -1, -1, 121200);//dft
//=============================sandcar===========================================

//==========================fireman===============
    fireman1 = AddStaticVehicleEx(407, -2067.1875, 53.1372, 28.8796, 0.0000, 3, -1, 12200);
    fireman2 = AddStaticVehicleEx(407, -2059.5369, 53.1952, 28.8796, 0.0000, 3, -1, 12200);
    fireman3 = AddStaticVehicleEx(407, -2055.1069, 53.2058, 28.8796, 0.0000, 3, -1, 12200);
    fireman4 = AddStaticVehicleEx(407, -2064.6443, 64.9407, 28.8796, -90.0000, 3, -1, 12200);
    fireman5 = AddStaticVehicleEx(407, -2064.7981, 70.6927, 28.8796, -90.0000, 3, -1, 12200);
    fireman6 = AddStaticVehicleEx(407, -2064.9250, 76.9159, 28.8796, -90.0000, 3, -1, 12200);
//====================cutt=====================
	cutter = AddStaticVehicleEx(572, 1886.0000, -1148.8253, 23.7132, 180.0000, 6,1,3600); //Mower
	cutter2 = AddStaticVehicleEx(572, 1890.0000, -1148.8253, 23.7914, 180.0000, 6,1,3600); //Mower
	cutter3 = AddStaticVehicleEx(572, 1894.0000, -1148.8253, 23.8587, 180.0000, 6,1,3600); //Mower
	cutter4 = AddStaticVehicleEx(572, 1898.0000, -1148.8253, 23.8523, 180.0000, 6,1,3600); //Mower

//================================tcc==============
    tcc1 = AddStaticVehicleEx(525, 1768.4990, -2038.4017, 13.4186, -90.0000, 1, 229, 10220);
    tcc2 = AddStaticVehicleEx(525, 1767.6627, -2043.3900, 13.4186, -90.0000,  1, 229, 10220);
    tcc3 = AddStaticVehicleEx(525, 1786.9720, -2024.0154, 13.4186, 180.0000,  1, 229, 10220);
    tcc4 = AddStaticVehicleEx(525, 1791.8074, -2023.8168, 13.4186, 180.0000,  1, 229, 10220);
    tcc5 = AddStaticVehicleEx(525, 1797.1470, -2023.7330, 13.4186, 180.0000, 1, 229, 10220);
    tcc6 = AddStaticVehicleEx(525, 1802.6837, -2023.8204, 13.4186, 180.0000, 1, 229, 10220);
    tcc7 = AddStaticVehicleEx(525, 1808.0594, -2023.5406, 13.4186, 180.0000,  1, 229, 10220);
//==============sweper================
    swep1 = AddStaticVehicleEx(574, 1657.2852, -1825.0000, 13.2726, 90.0000, 1, 1, 10220);
	swep2 = AddStaticVehicleEx(574, 1657.2852, -1820.0000, 13.2726, 90.0000, 1, 1, 10220);
	swep3 = AddStaticVehicleEx(574, 1657.2852, -1815.0000, 13.2726, 90.0000, 1, 1, 10220);
	swep4 = AddStaticVehicleEx(574, 1657.2852, -1810.0000, 13.2726, 90.0000, 1, 1, 10220);
	swep5 = AddStaticVehicleEx(574, 1657.2852, -1830.0000, 13.2726, 90.0000, 1, 1, 12200);
	swep6 = AddStaticVehicleEx(574, 1657.2852, -1835.0000, 13.2726, 90.0000, 1, 1, 12200);
//======================trucker==================
    truck1 = AddStaticVehicleEx(456, 2451.3196, -2111.1443, 13.6929, 0.0000, 10, 26, 10110);
    truck2 = AddStaticVehicleEx(456, 2457.1323, -2111.1443, 13.6929, 0.0000, 10, 26, 10110);
    truck3 = AddStaticVehicleEx(456, 2463.6003, -2111.1443, 13.6929, 0.0000,10, 26, 10110);
    truck4 = AddStaticVehicleEx(456, 2469.3596, -2111.1443, 13.6929, 0.0000, 10, 26, 10110);
    truck5 = AddStaticVehicleEx(498, 2477.0405, -2111.1443, 13.5435, 0.0000, 10, 26, 10110);
    truck6 = AddStaticVehicleEx(499, 2490.1238, -2111.1443, 13.4760, 0.0000,10, 26, 10110);
    truck7 = AddStaticVehicleEx(499, 2483.6858, -2111.1443, 13.4760, 0.0000, 10, 26, 10110);
//======================fuel===============
	fuel0 = AddStaticVehicleEx(584, -1018.5775, -568.3642, 33.0205, 90.0000, 1, 1, 10220);
	fuel1 = AddStaticVehicleEx(403, -1028.7417, -534.1767, 32.4912, 90.0000, 1, 1, 12200);
	fuel2 = AddStaticVehicleEx(584, -1018.5775, -534.1360, 33.0205, 90.0000, 1, 1, 10220);
	fuel3 = AddStaticVehicleEx(403, -1028.7394, -542.3368, 32.4912, 90.0000, 1, 1, 22100);
	fuel4 = AddStaticVehicleEx(584, -1018.5775, -542.2560, 33.0205, 90.0000, 1, 1, 10220);
	fuel5 = AddStaticVehicleEx(403, -1028.7394, -555.6314, 32.4912, 90.0000, 1, 1, 10220);
	fuel6 = AddStaticVehicleEx(403, -1028.7394, -562.4057, 32.4912, 90.0000, 1, 1, 10220);
	fuel7 = AddStaticVehicleEx(403, -1028.7394, -568.3140, 32.4912, 90.0000, 1, 1, 10220);
	fuel8 = AddStaticVehicleEx(584, -1018.5775, -555.5528, 33.0205, 90.0000, 1, 1, 10220);
	fuel9 = AddStaticVehicleEx(584, -1018.5775, -562.5142, 33.0205, 90.0000, 1, 1, 10220);
//==================farmer==========
    farmer0 = AddStaticVehicleEx(531, -384.5425, -1466.4309, 25.6607, -90.0000, 216, 216, 10220);
    farmer1 = AddStaticVehicleEx(531,  -384.5622, -1463.1614, 25.6607, -90.0000, 216, 216, 10220);
    farmer2 = AddStaticVehicleEx(531, -384.5622, -1459.8583, 25.6607, -90.0000, 216, 216, 10220);
    farmer3 = AddStaticVehicleEx(531, -384.5622, -1456.9191, 25.660, -90.0000, 216, 216, 10220);
    farmer4 = AddStaticVehicleEx(531,  -384.5622, -1453.5127, 25.6607, -90.0000, 216, 216, 10220);

	trailerfarm0 = AddStaticVehicleEx(610,-388.8694, -1466.5116, 25.0458 , -88.3800,216, 216, 10220);
	trailerfarm1 = AddStaticVehicleEx(610,  -388.8694, -1463.0845, 25.0458, -88.3800, 216, 216, 10220);
	trailerfarm2 = AddStaticVehicleEx(610, -388.8694, -1459.9658, 25.0458, -88.3800, 216, 216, 10220);
	trailerfarm3 = AddStaticVehicleEx(610, -388.8694, -1456.5234, 25.0458, -88.3800, 216, 216, 10220);
	trailerfarm4 = AddStaticVehicleEx(610, -388.8694, -1453.4166, 25.0458, -88.3800,216, 216, 10220);

	fastfood0 = AddStaticVehicleEx(588, 1108.6680, -1217.4648, 17.7512, 0.0000, 101, 99, 12200);
	fastfood1 = AddStaticVehicleEx(423, 1094.4329, -1217.4648, 17.8149, 0.0000, 101, 99, 12200);
	fastfood2 = AddStaticVehicleEx(588, 1104.0620, -1217.4648, 17.7512, 0.0000,101, 99, 12200);
	fastfood3 = AddStaticVehicleEx(588, 1099.9922, -1217.4648, 17.7512, 0.0000,101, 99, 12200);
	fastfood4 = AddStaticVehicleEx(423, 1091.3535, -1217.4648, 17.8149, 0.0000, 101, 99, 12200);
	fastfood5 = AddStaticVehicleEx(423, 1088.0856, -1217.4648, 17.8149, 0.0000, 101, 99, 12200);

    drug1 = AddStaticVehicleEx(442, -1116.5454, -1229.0000, 128.9523, -90.0000, 61, 0, 12200);
    drug2 = AddStaticVehicleEx(442, -1116.5422, -1236.0000, 128.9523, -90.0000, 61, 0, 10022);
    drug3 = AddStaticVehicleEx(442, -1116.5422, -1243.0000, 128.9523, -90.0000, 61, 0, 22100);
    drug4 = AddStaticVehicleEx(442, -1116.5422, -1250.0000, 128.9523, -90.0000, 61, 0, 10220);
    drug5 = AddStaticVehicleEx(532, -1116.4095, -1266.3376, 130.3587, -90.0000, 1, 1, 10022);

    petrol1 = AddStaticVehicleEx(514, 252.7302, 1419.8961, 11.1067, -90.0000, -1, -1, 100);
    petrol2 = AddStaticVehicleEx(514, 252.7302, 1396.5493, 11.1067, -90.0000, -1, -1, 100);
    petrol3 = AddStaticVehicleEx(514, 252.7302, 1372.1313, 11.1067, -90.0000, -1, -1, 100);
    petrol4 = AddStaticVehicleEx(514, 252.7302, 1347.6747, 11.1067, -90.0000, -1, -1, 100);
    petroltank1 = AddStaticVehicleEx(584, 242.7069, 1419.9114, 11.6253, -90.0000, -1, -1, 100);
    petroltank2 = AddStaticVehicleEx(584, 242.7069, 1396.7522, 11.6253, -90.0000, -1, -1, 100);
    petroltank3 = AddStaticVehicleEx(584, 242.7069, 1372.4445, 11.6253, -90.0000, -1, -1, 100);
    petroltank4 = AddStaticVehicleEx(584, 242.7069, 1347.5031, 11.6253, -90.0000, -1, -1, 100);

    autobuz = AddStaticVehicleEx(431, 1783.9940, -1926.2743, 13.4466, 0.0000, 152, 141, 3600);
	autobuz1 = AddStaticVehicleEx(437, 1803.9025, -1926.5730, 13.3686, 0.0000, 152, 141, 3600);
	autobuz2 = AddStaticVehicleEx(437, 1798.3278, -1926.4668, 13.3686, 0.0000, 152, 141, 3600);
	autobuz3 = AddStaticVehicleEx(431, 1778.1963, -1926.6101, 13.4466, 0.0000, 152, 141, 3600);


	gascar1 = AddStaticVehicleEx(573,2910.0000000,2045.0000000,11.3177000,90.0000000,123,1,15112); //Duneride
	gascar2 = AddStaticVehicleEx(573,2910.0000000,2040.0000000,11.3177000,90.0000000,123,1,112125); //Duneride
	gascar3 = AddStaticVehicleEx(573,2910.0000000,2035.0000000,11.3177000,90.0000000,123,1,112125); //Duneride
	gascar4 = AddStaticVehicleEx(573,2910.0000000,2030.0000000,11.3177000,90.0000000,123,1,11215); //Duneride
	
	CropDust[0] = AddStaticVehicleEx(512, -389.3712, -1490.6864, 25.9313, -90.0000, 201, 1, 3600);
	CropDust[1] = AddStaticVehicleEx(512, -389.3631, -1504.8628, 25.0034, -90.0000, 201, 1, 3600);
	CropDust[2] = AddStaticVehicleEx(512, -389.1660, -1518.7539, 23.6700, -90.0000, 201, 1, 3600);
	CropDust[3] = AddStaticVehicleEx(512, -388.9195, -1532.8792, 22.8882, -90.0000, 201, 1, 3600);
		
	PaperBoyPlane[0] = AddStaticVehicleEx(593, 1459.3259, -2414.5664, 14.0508, 180.0000, -1, -1, 3600);
	PaperBoyPlane[1] = AddStaticVehicleEx(593, 1444.9453, -2414.4700, 14.0508, 180.0000, -1, -1, 3600);
	PaperBoyPlane[2] = AddStaticVehicleEx(593, 1430.6976, -2414.2705, 14.0508, 180.0000, -1, -1, 3600);
	PaperBoyPlane[3] = AddStaticVehicleEx(593, 1416.1034, -2414.3323, 14.0508, 180.0000, -1, -1, 3600);
	
	PizzaBoy[0] = AddStaticVehicleEx(448, 2096.9373, -1813.8235, 12.9309, 90.0000, 3,6, 3600);
	PizzaBoy[1] = AddStaticVehicleEx(448, 2096.9373, -1815.6526, 12.9309, 90.0000, 3,6, 3600);
	PizzaBoy[2] = AddStaticVehicleEx(448, 2096.9373, -1817.4684, 12.9309, 90.0000, 3,6, 3600);
	PizzaBoy[3] = AddStaticVehicleEx(448, 2096.9373, -1819.2312, 12.9309, 90.0000, 3,6, 3600);
	PizzaBoy[4] = AddStaticVehicleEx(448, 2096.9373, -1820.7581, 12.9309, 90.0000, 3,6, 3600);

	PizzaBoy[5] = AddStaticVehicleEx(448, 2096.9373, -1800.8492, 12.9309, 90.0000, 6,3, 3600);
	PizzaBoy[6] = AddStaticVehicleEx(448, 2096.9373, -1798.8790, 12.9309, 90.0000, 6,3, 3600);
	PizzaBoy[7] = AddStaticVehicleEx(448, 2096.9373, -1797.0007, 12.9309, 90.0000, 6,3, 3600);
	PizzaBoy[8] = AddStaticVehicleEx(448, 2096.9373, -1794.7189, 12.9309, 90.0000, 6,3, 3600);
	PizzaBoy[9] = AddStaticVehicleEx(448, 2096.9373, -1792.8483, 12.9309, 90.0000, 6,3, 3600);
	
	BoatJ[0] = AddStaticVehicleEx(493, 2477.7000, -2718.3618, 0.1255, 180.0000, 1, 2, 3600);
	BoatJ[1] = AddStaticVehicleEx(493, 2467.2419, -2718.3618, 0.1255, 180.0000, 1, 2, 3600);
	BoatJ[2] = AddStaticVehicleEx(493, 2455.3718, -2718.3618, 0.1255, 180.0000, 1, 2, 3600);
	BoatJ[3] = AddStaticVehicleEx(493, 2444.0310, -2718.3618, 0.1255, 180.0000, 1, 2, 3600);
	BoatJ[4] = AddStaticVehicleEx(493, 2432.1885, -2718.3618, 0.1255, 180.0000, 1, 2, 3600);


	return 1;
}

new Float: SkinOffSett[312][9] = {
{0.108588, -0.004280, 0.000000, 0.000000, 0.000000, 0.504608, 1.004458, 1.004458, 1.000000 }, // Hair3 - 0
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 1
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 2
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 3
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 4
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 5
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 6
{0.099690, 0.006124, -0.003632, 0.000000, 0.000000, 0.504608, 1.004458, 1.004458, 1.178597 }, // Hair3 - 7
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 8
{0.075812, 0.007086, -0.003632, 0.000000, 0.000000, 0.504608, 2.675273, 1.004458, 1.130290 }, // Hair3 - 9
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 10
{0.073011, -0.000845, 0.005339, 0.000000, 0.000000, 0.504608, 1.004458, 1.004458, 1.149878 }, // Hair3 - 11
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 12
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 13
{0.088216, 0.009086, 0.005339, 0.000000, 0.000000, 0.504608, 1.004458, 1.004458, 1.149878 }, // Hair3 - 14
{0.069295, -0.023192, -0.001476, 0.000000, 0.000000, 0.504608, 1.004458, 1.004458, 0.998685 }, // Hair3 - 15
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 16
{0.100861, -0.000708, 0.001642, 0.000000, 0.000000, 0.504608, 1.004458, 1.004458, 1.033313 }, // Hair3 - 17
{0.062683, -0.000708, 0.001642, 0.000000, 0.000000, 0.504608, 1.004458, 1.004458, 1.022677 }, // Hair3 - 18
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 19
{0.097281, -0.006789, 0.000686, 0.000000, 0.000000, 0.504608, 1.004458, 1.004458, 1.089968 }, // Hair3 - 20
{0.080904, -0.002786, -0.005819, 0.000000, 0.000000, 0.504608, 1.004458, 1.004458, 1.118435 }, // Hair3 - 21
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 22
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 23
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 24
{0.080904, 0.002488, -0.000037, 0.000000, 0.000000, 0.504608, 1.004458, 1.004458, 1.043299 }, // Hair3 - 25
{0.062522, 0.013497, -0.000037, 0.000000, 0.000000, 0.504608, 1.004458, 1.004458, 1.175585 }, // Hair3 - 26
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 27
{0.087827, 0.022751, -0.005296, 0.000000, 0.000000, 0.504608, 1.004458, 1.004458, 1.219193 }, // Hair3 - 28
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 29
{0.077708, 0.011525, -0.005296, 0.000000, 0.000000, 0.504608, 1.004458, 1.004458, 1.219193 }, // Hair3 - 30
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 31
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 32
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 33
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 34
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 35
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 36
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 37
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 38
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 39
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 40
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 41
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 42
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 43
{0.079044, 0.014414, -0.000931, 0.000000, 0.000000, 357.597473, 1.004458, 1.004458, 0.900948 }, // Hair3 - 44
{0.060674, 0.006197, -0.000931, 0.000000, 0.000000, 357.597473, 1.004458, 1.004458, 1.019663 }, // Hair3 - 45
{0.087941, 0.018147, -0.000931, 0.000000, 0.000000, 357.597473, 1.004458, 1.004458, 1.139707 }, // Hair3 - 46
{0.084668, 0.006726, -0.000931, 0.000000, 0.000000, 357.597473, 1.004458, 1.004458, 1.142034 }, // Hair3 - 47
{0.099493, -0.017821, -0.002006, 0.000000, 0.000000, 357.597473, 1.004458, 1.004458, 1.142034 }, // Hair3 - 48
{0.079672, 0.012987, -0.001040, 0.000000, 0.000000, 357.597473, 1.004458, 1.004458, 0.986149 }, // Hair3 - 49
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 50
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 51
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 52
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 53
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 54
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 55
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 56
{0.119527, 0.015450, -0.002653, 0.000000, 0.000000, 357.597473, 1.004458, 1.004458, 1.060347 }, // Hair3 - 57
{0.075583, -0.001295, -0.002653, 0.000000, 0.000000, 357.597473, 1.004458, 1.004458, 0.948482 }, // Hair3 - 58
{0.095139, 0.003601, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.128250 }, // Hair3 - 59
{0.095139, 0.003562, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.100457 }, // Hair3 - 60
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 61
{0.093398, 0.018343, 0.006919, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.009026 }, // Hair3 - 62
{0.084164, -0.001245, 0.000018, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.179215 }, // Hair3 - 63
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 64
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 65
{0.095307, 0.009252, 0.000018, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.051705 }, // Hair3 - 66
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 67
{0.101020, 0.016734, -0.003369, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 0.997687 }, // Hair3 - 68
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 69
{0.087212, 0.017980, 0.007104, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.049646 }, // Hair3 - 70
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 71
{0.089513, 0.014271, -0.001790, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.032754 }, // Hair3 - 72
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 73
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 74
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 75
{0.077374, -0.010765, 0.002583, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.166910 }, // Hair3 - 76
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 77
{0.079938, 0.012189, 0.002583, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.166910 }, // Hair3 - 78
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 79
{0.076820, -0.014839, 0.002583, 0.000000, 0.000000, 350.695648, 1.004458, 1.004458, 1.071538 }, // Hair3 - 80
{0.076820, -0.014839, 0.002583, 0.000000, 0.000000, 350.695648, 1.004458, 1.004458, 1.071538 }, // Hair3 - 81
{0.104624, 0.014979, 0.002583, 0.000000, 0.000000, 356.442108, 1.004458, 1.004458, 1.141624 }, // Hair3 - 82
{0.093609, 0.006488, 0.002583, 0.000000, 0.000000, 356.442108, 1.004458, 1.004458, 1.141624 }, // Hair3 - 83
{0.106974, 0.006488, 0.002583, 0.000000, 0.000000, 356.442108, 1.004458, 1.004458, 1.141624 }, // Hair3 - 84
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 85
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 86
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 87
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 88
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 89
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 90
{0.076668, -0.010447, -0.003085, 0.000000, 0.000000, 3.968300, 1.004458, 1.004458, 1.169261 }, // Hair3 - 91
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 92
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 93
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 94
{0.070631, -0.016430, 0.000185, 0.000000, 0.000000, 3.968300, 1.004458, 1.004458, 1.079532 }, // Hair3 - 95
{0.085213, 0.007071, -0.002542, 0.000000, 0.000000, 3.968300, 1.004458, 1.004458, 1.094804 }, // Hair3 - 96
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 97
{0.081412, 0.025877, 0.000684, 0.000000, 0.000000, 3.968300, 1.004458, 1.004458, 1.156216 }, // Hair3 - 98
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 99
{0.096130, -0.002822, 0.002127, 0.000000, 0.000000, 358.993652, 1.004458, 1.004458, 1.156216 }, // Hair3 - 100
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 101
{0.088931, 0.009656, -0.003107, 0.000000, 0.000000, 358.993652, 1.004458, 1.004458, 1.042739 }, // Hair3 - 102
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 103
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 104
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 105
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 106
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 107
{0.111707, 0.012517, 0.000836, 1.349158, 0.000000, 349.588562, 1.004458, 1.004458, 0.861656 }, // Hair3 - 108
{0.111707, 0.024860, 0.000836, 1.349158, 0.000000, 355.732360, 1.004458, 1.004458, 0.893029 }, // Hair3 - 109
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 110
{0.091159, 0.003268, -0.001098, 1.349158, 0.000000, 359.983459, 1.004458, 1.004458, 1.003022 }, // Hair3 - 111
{0.083389, 0.004525, -0.001098, 1.349158, 0.000000, 6.963862, 1.004458, 1.004458, 0.915353 }, // Hair3 - 112
{0.098555, -0.000253, -0.001098, 1.349158, 0.000000, 2.182152, 1.004458, 1.004458, 1.080508 }, // Hair3 - 113
{0.105434, 0.007519, -0.003082, 1.349158, 0.000000, 3.462919, 1.004458, 1.004458, 0.996621 }, // Hair3 - 114
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 115
{0.105434, 0.007519, -0.003082, 1.349158, 0.000000, 3.462919, 1.004458, 1.004458, 0.996621 }, // Hair3 - 116
{0.073719, 0.011567, -0.001081, 1.349158, 0.000000, 358.537384, 1.004458, 1.004458, 1.053219 }, // Hair3 - 117
{0.078061, 0.011567, -0.001081, 1.349158, 0.000000, 2.812902, 1.004458, 1.004458, 1.053219 }, // Hair3 - 118
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 119
{0.088413, -0.004958, -0.001081, 1.349158, 0.000000, 356.769927, 1.004458, 1.004458, 1.134856 }, // Hair3 - 120
{0.098040, -0.013431, 0.000846, 1.349158, 0.000000, 352.953826, 1.004458, 1.004458, 1.165797 }, // Hair3 - 121
{0.097684, -0.008173, 0.000846, 1.349158, 0.000000, 352.953826, 1.004458, 1.004458, 1.069886 }, // Hair3 - 122
{0.082243, -0.000975, -0.003736, 1.349158, 0.000000, 352.953826, 1.004458, 1.004458, 1.270665 }, // Hair3 - 123
{0.083105, -0.000273, -0.001209, 1.349158, 0.000000, 352.953826, 1.004458, 1.004458, 1.167312 }, // Hair3 - 124
{0.089598, 0.003350, -0.001209, 1.349158, 0.000000, 7.936543, 1.004458, 1.004458, 1.055302 }, // Hair3 - 125
{0.107306, -0.014673, 0.000547, 1.162765, 0.000000, 0.930281, 1.004458, 1.004458, 1.133381 }, // Hair3 - 126
{0.097297, 0.002157, 0.000547, 1.162765, 0.000000, 356.993957, 1.004458, 1.004458, 1.132299 }, // Hair3 - 127
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 128
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 129
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 130
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 131
{-0.000896, 0.005557, 0.000547, 1.162765, 0.000000, 349.529785, 1.004458, 1.004458, 0.975846 }, // Hair3 - 132
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 133
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 134
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 135
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 136
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 137
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 138
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 139
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 140
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 141
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 142
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 143
{0.089415, -0.005394, -0.003360, 1.162765, 0.000000, 354.949035, 1.004458, 1.004458, 1.377530 }, // Hair3 - 144
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 145
{0.084664, -0.005025, -0.003360, 1.162765, 0.000000, 354.949035, 1.004458, 1.004458, 1.063808 }, // Hair3 - 146
{0.068039, -0.006231, 0.003438, 1.162765, 0.000000, 348.373596, 1.004458, 1.004458, 1.091637 }, // Hair3 - 147
{0.077481, -0.006293, 0.003438, 1.162765, 0.000000, 3.232684, 1.004458, 1.004458, 1.143243 }, // Hair3 - 148
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 149
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 150
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 151
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 152
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 153
{0.061059, -0.000941, 0.003438, 1.162765, 0.000000, 354.961517, 1.004458, 1.004458, 1.064656 }, // Hair3 - 154
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 155
{0.088869, -0.006497, 0.003438, 1.162765, 0.000000, 354.961517, 1.004458, 1.004458, 1.322631 }, // Hair3 - 156
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 157
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 158
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 159
{0.080472, -0.006497, 0.000619, 1.162765, 0.000000, 354.961517, 1.004458, 1.004458, 1.024554 }, // Hair3 - 160
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 161
{0.099750, -0.004397, 0.000619, 1.162765, 0.000000, 357.063781, 1.004458, 1.004458, 1.093557 }, // Hair3 - 162
{0.085568, -0.002210, -0.000876, 1.162765, 0.000000, 353.987701, 1.004458, 1.004458, 1.017031 }, // Hair3 - 163
{0.085617, -0.002210, -0.000876, 1.162765, 0.000000, 353.987701, 1.004458, 1.004458, 1.017031 }, // Hair3 - 164
{0.076236, 0.004471, -0.000876, 1.162765, 0.000000, 353.987701, 1.004458, 1.004458, 1.126474 }, // Hair3 - 165
{0.076236, 0.004471, -0.000876, 1.162765, 0.000000, 353.987701, 1.004458, 1.004458, 1.126474 }, // Hair3 - 166
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 167
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 168
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 169
{0.082516, 0.004471, -0.000876, 1.162765, 0.000000, 356.341644, 1.004458, 1.004458, 1.126474 }, // Hair3 - 170
{0.095091, -0.004251, -0.000876, 1.162765, 0.000000, 356.341644, 1.004458, 1.004458, 1.145727 }, // Hair3 - 171
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 172
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 173
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 174
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 175
{0.110327, -0.012279, -0.003095, 1.162765, 0.000000, 353.170532, 1.004458, 1.004458, 1.138159 }, // Hair3 - 176
{0.096507, -0.004908, -0.003095, 1.162765, 0.000000, 353.170532, 1.004458, 1.004458, 1.256144 }, // Hair3 - 177
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 178
{0.093613, 0.001893, -0.003095, 1.162765, 0.000000, 355.963073, 1.004458, 1.004458, 1.097507 }, // Hair3 - 179
{0.097174, -0.011787, -0.003095, 1.162765, 0.000000, 355.963073, 1.004458, 1.004458, 1.176252 }, // Hair3 - 180
{0.098671, 0.026786, -0.000061, 1.162765, 0.000000, 355.963073, 1.004458, 1.004458, 1.074810 }, // Hair3 - 181
{0.077510, 0.012967, -0.000061, 1.162765, 0.000000, 1.151019, 1.004458, 1.004458, 1.132787 }, // Hair3 - 182
{0.086433, 0.000554, -0.000061, 1.162765, 0.000000, 1.151019, 1.004458, 1.004458, 1.167121 }, // Hair3 - 183
{0.101167, -0.003799, -0.001940, 1.162765, 0.000000, 0.578940, 1.004458, 1.004458, 1.100660 }, // Hair3 - 184
{0.088131, -0.001998, -0.001940, 1.162765, 0.000000, 0.578940, 1.004458, 1.004458, 1.100660 }, // Hair3 - 185
{0.101592, -0.012444, -0.001830, 1.162765, 0.000000, 0.578940, 1.004458, 1.004458, 1.129892 }, // Hair3 - 186
{0.079601, -0.016813, 0.007176, 1.162765, 0.000000, 355.034423, 1.004458, 1.004458, 1.090405 }, // Hair3 - 187
{0.090677, -0.000343, 0.002180, 1.162765, 0.000000, 355.034423, 1.004458, 1.004458, 1.055292 }, // Hair3 - 188
{0.095982, -0.001331, 0.002180, 1.162765, 0.000000, 357.113464, 1.004458, 1.004458, 1.142861 }, // Hair3 - 189
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 190
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 191
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 192
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 193
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 194
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 195
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 196
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 197
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 198
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 199
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 200
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 201
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 202
{0.087364, 0.004175, -0.001923, 1.162765, 0.000000, 357.113464, 1.004458, 1.004458, 1.105261 }, // Hair3 - 203
{0.087364, 0.004175, -0.001923, 1.162765, 0.000000, 357.113464, 1.004458, 1.004458, 1.105261 }, // Hair3 - 204
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 205
{0.110781, 0.006567, -0.001923, 1.162765, 0.000000, 357.113464, 1.004458, 1.004458, 1.007790 }, // Hair3 - 206
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 207
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 208
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 209
{0.082535, -0.005237, -0.001923, 1.162765, 0.000000, 357.113464, 1.004458, 1.004458, 0.995132 }, // Hair3 - 210
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 211
{0.062871, -0.001359, -0.001923, 1.162765, 0.000000, 357.113464, 1.004458, 1.004458, 1.048056 }, // Hair3 - 212
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 213
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 214
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 215
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 216
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 217
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 218
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 219
{0.059144, 0.013152, -0.001230, 1.162765, 0.000000, 357.113464, 1.004458, 1.004458, 1.073572 }, // Hair3 - 220
{0.094527, -0.006164, 0.002706, 1.162765, 0.000000, 357.113464, 1.004458, 1.004458, 1.247534 }, // Hair3 - 221
{0.094527, -0.011945, 0.002706, 1.162765, 0.000000, 357.113464, 1.004458, 1.004458, 1.226916 }, // Hair3 - 222
{0.089071, 0.014463, 0.002706, 1.162765, 0.000000, 357.113464, 1.004458, 1.004458, 1.192765 }, // Hair3 - 223
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 224
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 225
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 226
{0.101175, 0.014766, 0.002706, 1.162765, 0.000000, 357.113464, 1.004458, 1.004458, 1.126656 }, // Hair3 - 227
{0.092572, 0.007272, 0.002706, 1.162765, 0.000000, 357.113464, 1.004458, 1.004458, 1.235207 }, // Hair3 - 228
{0.079486, -0.015010, 0.000872, 1.162765, 0.000000, 350.970611, 1.004458, 1.004458, 1.098212 }, // Hair3 - 229
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 230
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 231
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 232
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 233
{0.078231, -0.017629, 0.000872, 1.162765, 0.000000, 351.789215, 1.004458, 1.004458, 1.018379 }, // Hair3 - 234
{0.049378, -0.001035, 0.000872, 1.162765, 0.000000, 348.162139, 1.004458, 1.004458, 0.966751 }, // Hair3 - 235
{0.080933, -0.007481, 0.000872, 1.162765, 0.000000, 348.162139, 1.004458, 1.004458, 1.095109 }, // Hair3 - 236
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 237
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 238
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 239
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 240
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 241
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 242
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 243
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 244
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 245
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 246
{0.087829, -0.001369, 0.000872, 1.162765, 0.000000, 3.899056, 1.004458, 1.004458, 1.201375 }, // Hair3 - 247
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 248
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 249
{0.078370, 0.009865, 0.000872, 1.162765, 0.000000, 352.236450, 1.004458, 1.004458, 1.166651 }, // Hair3 - 250
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 251
{0.088582, -0.006075, 0.000872, 1.162765, 0.000000, 352.236450, 1.004458, 1.004458, 1.210478 }, // Hair3 - 252
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 253
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 254
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 255
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 256
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 257
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 258
{0.072341, -0.001438, 0.002612, 1.162765, 0.000000, 352.128753, 1.004458, 1.004458, 1.218888 }, // Hair3 - 259
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 260
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 261
{0.075398, 0.005842, 0.002612, 1.162765, 0.000000, 357.731414, 1.004458, 1.004458, 1.057977 }, // Hair3 - 262
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 263
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 264
{0.074374, -0.003570, 0.002612, 1.162765, 0.000000, 353.925384, 1.004458, 1.004458, 1.109009 }, // Hair3 - 265
{0.080137, -0.009302, 0.002612, 1.162765, 0.000000, 353.925384, 1.004458, 1.004458, 1.131146 }, // Hair3 - 266
{0.067543, 0.001360, 0.002612, 1.162765, 0.000000, 349.140075, 1.004458, 1.004458, 1.146864 }, // Hair3 - 267
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 268
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 269
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 270
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 271
{0.084866, 0.000078, 0.002612, 1.162765, 0.000000, 350.338287, 1.004458, 1.004458, 1.146864 }, // Hair3 - 272
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 273
{0.082516, 0.006275, 0.002612, 1.162765, 0.000000, 350.338287, 1.004458, 1.004458, 1.090817 }, // Hair3 - 274
{0.088237, 0.005707, -0.000952, 1.162765, 0.000000, 354.032653, 1.004458, 1.004458, 1.042391 }, // Hair3 - 275
{0.093156, 0.002306, -0.000952, 1.162765, 0.000000, 357.562286, 1.004458, 1.004458, 0.996686 }, // Hair3 - 276
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 277
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 278
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 279
{0.089934, 0.005118, -0.000952, 1.162765, 0.000000, 354.893707, 1.004458, 1.004458, 1.037778 }, // Hair3 - 280
{0.089934, 0.005118, -0.000952, 1.162765, 0.000000, 354.893707, 1.004458, 1.004458, 1.037778 }, // Hair3 - 281
{0.084915, 0.003095, -0.000952, 1.162765, 0.000000, 354.893707, 1.004458, 1.004458, 1.104662 }, // Hair3 - 282
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 283
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 284
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 285
{0.086468, 0.001470, -0.000952, 1.162765, 0.000000, 354.893707, 1.004458, 1.004458, 1.092748 }, // Hair3 - 286
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 287
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 288
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 289
{0.066092, -0.004346, -0.000952, 1.162765, 0.000000, 354.893707, 1.004458, 1.004458, 1.234344 }, // Hair3 - 290
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 291
{0.074633, 0.006723, -0.000952, 1.162765, 0.000000, 354.744812, 1.004458, 1.004458, 1.020303 }, // Hair3 - 292
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 293
{0.091338, 0.011203, -0.000952, 1.162765, 0.000000, 7.673956, 1.004458, 1.004458, 1.129834 }, // Hair3 - 294
{0.077449, 0.006221, 0.002460, 1.162765, 0.000000, 355.039520, 1.004458, 1.004458, 1.108941 }, // Hair3 - 295
{0.069757, -0.014896, 0.002460, 1.162765, 0.000000, 339.120452, 1.004458, 1.004458, 1.179332 }, // Hair3 - 296
{0.086319, -0.014856, 0.002460, 1.162765, 0.000000, 357.547332, 1.004458, 1.004458, 1.285995 }, // Hair3 - 297
{0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000 }, // Hair3 - 298
{0.091403, 0.024850, 0.002460, 1.162765, 0.000000, 357.547332, 1.004458, 1.004458, 1.193961 }, // Hair3 - 299
{0.095139, 0.003562, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.100457 }, // Hair3 - 300
{0.095139, 0.003562, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.100457 }, // Hair3 - 301
{0.095139, 0.003562, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.100457 }, // Hair3 - 302
{0.095139, 0.003562, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.100457 }, // Hair3 - 303
{0.095139, 0.003562, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.100457 }, // Hair3 - 304
{0.095139, 0.003562, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.100457 }, // Hair3 - 305
{0.095139, 0.003562, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.100457 }, // Hair3 - 306
{0.095139, 0.003562, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.100457 }, // Hair3 - 307
{0.095139, 0.003562, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.100457 }, // Hair3 - 308
{0.095139, 0.003562, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.100457 }, // Hair3 - 309
{0.095139, 0.003562, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.100457 }, // Hair3 - 310
{0.095139, 0.003562, -0.002653, 0.000000, 0.000000, 4.176807, 1.004458, 1.004458, 1.100457 } // Hair3 - 311
};

stock LoadSnowCar()
{
	SanieCar[0] = AddStaticVehicleEx(578, -734.9973, 518.1689, 1372.6075, 270.0000, -1, -1, 3600);
	SanieCar[1] = AddStaticVehicleEx(578, -734.9973, 525.9689, 1372.6075, 270.0000, -1, -1, 3600);
	SanieCar[2] = AddStaticVehicleEx(578, -734.9973, 533.3526, 1372.6075, 270.0000, -1, -1, 3600);
	SanieCar[3] = AddStaticVehicleEx(578, -734.9973, 540.0572, 1372.6075, 270.0000, -1, -1, 3600);

   	SanieObjects[0][0] = CreateDynamicObject(1251, 0.00000, 1.70000, 0.63500,   0.00000, 0.00000, 0.00000);
	SanieObjects[0][1] = CreateDynamicObject(19315, 0.37500, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[0][2] = CreateDynamicObject(19315, -0.39000, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[0][3] = CreateDynamicObject(19315, -0.39000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[0][4] = CreateDynamicObject(19315, 0.36000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[0][5] = CreateDynamicObject(1736, 0.36000, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[0][6] = CreateDynamicObject(1736, -0.34500, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[0][7] = CreateDynamicObject(1736, -0.34500, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[0][8] = CreateDynamicObject(1736, 0.40000, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[0][9] = CreateDynamicObject(19439, 0.03985, -0.12846, 0.62500,   24.12000, 91.45490, 0.00000);
	SanieObjects[0][10] = CreateDynamicObject(1408, 1.46000, -1.77000, 0.87000,   -152.75996, 0.00000, 90.82493);
	SanieObjects[0][11] = CreateDynamicObject(1408, -1.43000, -1.77000, 0.87000,   -205.02022, 0.00000, 90.82493);
	SanieObjects[0][12] = CreateDynamicObject(1724, 0.55000, -0.58500, 0.33000,   -358.78595, 0.00000, 178.26007);
	SanieObjects[0][13] = CreateDynamicObject(2745, 0.03000, -0.05000, 0.79000,   -404.01117, 4.02000, 190.32013);
	SanieObjects[0][14] = CreateDynamicObject(19054, 0.52000, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[0][15] = CreateDynamicObject(19055, -0.75500, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[0][16] = CreateDynamicObject(19058, -0.71500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[0][17] = CreateDynamicObject(19056, 0.73500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[0][18] = CreateDynamicObject(19065, 0.08500, -0.66000, 1.77000,   1.00500, 17.08500, 94.46994);
	SanieObjects[0][19] = CreateDynamicObject(1251, -1.15000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	SanieObjects[0][20] = CreateDynamicObject(1251, 1.12000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	SanieObjects[0][21] = CreateDynamicObject(1319, -1.22500, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[0][22] = CreateDynamicObject(1319, 1.08000, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[0][23] = CreateDynamicObject(1319, 1.08000, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[0][24] = CreateDynamicObject(1319, -1.16500, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[0][25] = CreateDynamicObject(1319, 0.99500, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	SanieObjects[0][26] = CreateDynamicObject(1319, -1.28000, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	SanieObjects[0][27] = CreateDynamicObject(19366, 0.00000, -2.43660, 0.33850,   0.00000, 90.00000, 90.00000);

   	SanieObjects[1][0] = CreateDynamicObject(1251, 0.00000, 1.70000, 0.63500,   0.00000, 0.00000, 0.00000);
	SanieObjects[1][1] = CreateDynamicObject(19315, 0.37500, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[1][2] = CreateDynamicObject(19315, -0.39000, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[1][3] = CreateDynamicObject(19315, -0.39000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[1][4] = CreateDynamicObject(19315, 0.36000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[1][5] = CreateDynamicObject(1736, 0.36000, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[1][6] = CreateDynamicObject(1736, -0.34500, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[1][7] = CreateDynamicObject(1736, -0.34500, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[1][8] = CreateDynamicObject(1736, 0.40000, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[1][9] = CreateDynamicObject(19439, 0.03985, -0.12846, 0.62500,   24.12000, 91.45490, 0.00000);
	SanieObjects[1][10] = CreateDynamicObject(1408, 1.46000, -1.77000, 0.87000,   -152.75996, 0.00000, 90.82493);
	SanieObjects[1][11] = CreateDynamicObject(1408, -1.43000, -1.77000, 0.87000,   -205.02022, 0.00000, 90.82493);
	SanieObjects[1][12] = CreateDynamicObject(1724, 0.55000, -0.58500, 0.33000,   -358.78595, 0.00000, 178.26007);
	SanieObjects[1][13] = CreateDynamicObject(2745, 0.03000, -0.05000, 0.79000,   -404.01117, 4.02000, 190.32013);
	SanieObjects[1][14] = CreateDynamicObject(19054, 0.52000, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[1][15] = CreateDynamicObject(19055, -0.75500, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[1][16] = CreateDynamicObject(19058, -0.71500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[1][17] = CreateDynamicObject(19056, 0.73500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[1][18] = CreateDynamicObject(19065, 0.08500, -0.66000, 1.77000,   1.00500, 17.08500, 94.46994);
	SanieObjects[1][19] = CreateDynamicObject(1251, -1.15000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	SanieObjects[1][20] = CreateDynamicObject(1251, 1.12000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	SanieObjects[1][21] = CreateDynamicObject(1319, -1.22500, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[1][22] = CreateDynamicObject(1319, 1.08000, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[1][23] = CreateDynamicObject(1319, 1.08000, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[1][24] = CreateDynamicObject(1319, -1.16500, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[1][25] = CreateDynamicObject(1319, 0.99500, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	SanieObjects[1][26] = CreateDynamicObject(1319, -1.28000, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	SanieObjects[1][27] = CreateDynamicObject(19366, 0.00000, -2.43660, 0.33850,   0.00000, 90.00000, 90.00000);

	AttachDynamicObjectToVehicle(SanieObjects[0][0], SanieCar[0], 0.00000, 1.70000, 0.63500,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[0][1], SanieCar[0], 0.37500, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[0][2], SanieCar[0], -0.39000, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[0][3], SanieCar[0], -0.39000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[0][4], SanieCar[0], 0.36000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[0][5], SanieCar[0], 0.36000, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[0][6], SanieCar[0], -0.34500, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[0][7], SanieCar[0], -0.34500, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[0][8], SanieCar[0], 0.40000, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[0][9], SanieCar[0], 0.03985, -0.12846, 0.62500,   24.12000, 91.45490, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[0][10],SanieCar[0], 1.46000, -1.77000, 0.87000,   -152.75996, 0.00000, 90.82493);
	AttachDynamicObjectToVehicle(SanieObjects[0][11],SanieCar[0], -1.43000, -1.77000, 0.87000,   -205.02022, 0.00000, 90.82493);
	AttachDynamicObjectToVehicle(SanieObjects[0][12],SanieCar[0], 0.55000, -0.58500, 0.33000,   -358.78595, 0.00000, 178.26007);
	AttachDynamicObjectToVehicle(SanieObjects[0][13],SanieCar[0], 0.03000, -0.05000, 0.79000,   -404.01117, 4.02000, 190.32013);
	AttachDynamicObjectToVehicle(SanieObjects[0][14],SanieCar[0], 0.52000, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[0][15],SanieCar[0], -0.75500, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[0][16],SanieCar[0], -0.71500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[0][17],SanieCar[0], 0.73500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[0][18],SanieCar[0], 0.08500, -0.66000, 1.77000,   1.00500, 17.08500, 94.46994);
	AttachDynamicObjectToVehicle(SanieObjects[0][19],SanieCar[0], -1.15000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	AttachDynamicObjectToVehicle(SanieObjects[0][20],SanieCar[0], 1.12000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	AttachDynamicObjectToVehicle(SanieObjects[0][21],SanieCar[0], -1.22500, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[0][22],SanieCar[0], 1.08000, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[0][23],SanieCar[0], 1.08000, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[0][24],SanieCar[0], -1.16500, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[0][25],SanieCar[0], 0.99500, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	AttachDynamicObjectToVehicle(SanieObjects[0][26],SanieCar[0], -1.28000, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	AttachDynamicObjectToVehicle(SanieObjects[0][27],SanieCar[0], 0.00000, -2.43660, 0.33850,   0.00000, 90.00000, 90.00000);

    AttachDynamicObjectToVehicle(SanieObjects[1][0], SanieCar[1], 0.00000, 1.70000, 0.63500,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[1][1], SanieCar[1], 0.37500, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[1][2], SanieCar[1], -0.39000, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[1][3], SanieCar[1], -0.39000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[1][4], SanieCar[1], 0.36000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[1][5], SanieCar[1], 0.36000, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[1][6], SanieCar[1], -0.34500, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[1][7], SanieCar[1], -0.34500, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[1][8], SanieCar[1], 0.40000, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[1][9], SanieCar[1], 0.03985, -0.12846, 0.62500,   24.12000, 91.45490, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[1][10],SanieCar[1], 1.46000, -1.77000, 0.87000,   -152.75996, 0.00000, 90.82493);
	AttachDynamicObjectToVehicle(SanieObjects[1][11],SanieCar[1], -1.43000, -1.77000, 0.87000,   -205.02022, 0.00000, 90.82493);
	AttachDynamicObjectToVehicle(SanieObjects[1][12],SanieCar[1], 0.55000, -0.58500, 0.33000,   -358.78595, 0.00000, 178.26007);
	AttachDynamicObjectToVehicle(SanieObjects[1][13],SanieCar[1], 0.03000, -0.05000, 0.79000,   -404.01117, 4.02000, 190.32013);
	AttachDynamicObjectToVehicle(SanieObjects[1][14],SanieCar[1], 0.52000, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[1][15],SanieCar[1], -0.75500, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[1][16],SanieCar[1], -0.71500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[1][17],SanieCar[1], 0.73500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[1][18],SanieCar[1], 0.08500, -0.66000, 1.77000,   1.00500, 17.08500, 94.46994);
	AttachDynamicObjectToVehicle(SanieObjects[1][19],SanieCar[1], -1.15000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	AttachDynamicObjectToVehicle(SanieObjects[1][20],SanieCar[1], 1.12000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	AttachDynamicObjectToVehicle(SanieObjects[1][21],SanieCar[1], -1.22500, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[1][22],SanieCar[1], 1.08000, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[1][23],SanieCar[1], 1.08000, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[1][24],SanieCar[1], -1.16500, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[1][25],SanieCar[1], 0.99500, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	AttachDynamicObjectToVehicle(SanieObjects[1][26],SanieCar[1], -1.28000, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	AttachDynamicObjectToVehicle(SanieObjects[1][27],SanieCar[1], 0.00000, -2.43660, 0.33850,   0.00000, 90.00000, 90.00000);


    SanieObjects[2][0] = CreateDynamicObject(1251, 0.00000, 1.70000, 0.63500,   0.00000, 0.00000, 0.00000);
	SanieObjects[2][1] = CreateDynamicObject(19315, 0.37500, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[2][2] = CreateDynamicObject(19315, -0.39000, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[2][3] = CreateDynamicObject(19315, -0.39000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[2][4] = CreateDynamicObject(19315, 0.36000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[2][5] = CreateDynamicObject(1736, 0.36000, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[2][6] = CreateDynamicObject(1736, -0.34500, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[2][7] = CreateDynamicObject(1736, -0.34500, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[2][8] = CreateDynamicObject(1736, 0.40000, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[2][9] = CreateDynamicObject(19439, 0.03985, -0.12846, 0.62500,   24.12000, 91.45490, 0.00000);
	SanieObjects[2][10] = CreateDynamicObject(1408, 1.46000, -1.77000, 0.87000,   -152.75996, 0.00000, 90.82493);
	SanieObjects[2][11] = CreateDynamicObject(1408, -1.43000, -1.77000, 0.87000,   -205.02022, 0.00000, 90.82493);
	SanieObjects[2][12] = CreateDynamicObject(1724, 0.55000, -0.58500, 0.33000,   -358.78595, 0.00000, 178.26007);
	SanieObjects[2][13] = CreateDynamicObject(2745, 0.03000, -0.05000, 0.79000,   -404.01117, 4.02000, 190.32013);
	SanieObjects[2][14] = CreateDynamicObject(19054, 0.52000, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[2][15] = CreateDynamicObject(19055, -0.75500, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[2][16] = CreateDynamicObject(19058, -0.71500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[2][17] = CreateDynamicObject(19056, 0.73500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[2][18] = CreateDynamicObject(19065, 0.08500, -0.66000, 1.77000,   1.00500, 17.08500, 94.46994);
	SanieObjects[2][19] = CreateDynamicObject(1251, -1.15000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	SanieObjects[2][20] = CreateDynamicObject(1251, 1.12000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	SanieObjects[2][21] = CreateDynamicObject(1319, -1.22500, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[2][22] = CreateDynamicObject(1319, 1.08000, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[2][23] = CreateDynamicObject(1319, 1.08000, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[2][24] = CreateDynamicObject(1319, -1.16500, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[2][25] = CreateDynamicObject(1319, 0.99500, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	SanieObjects[2][26] = CreateDynamicObject(1319, -1.28000, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	SanieObjects[2][27] = CreateDynamicObject(19366, 0.00000, -2.43660, 0.33850,   0.00000, 90.00000, 90.00000);

	AttachDynamicObjectToVehicle(SanieObjects[2][0], SanieCar[2], 0.00000, 1.70000, 0.63500,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[2][1], SanieCar[2], 0.37500, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[2][2], SanieCar[2], -0.39000, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[2][3], SanieCar[2], -0.39000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[2][4], SanieCar[2], 0.36000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[2][5], SanieCar[2], 0.36000, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[2][6], SanieCar[2], -0.34500, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[2][7], SanieCar[2], -0.34500, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[2][8], SanieCar[2], 0.40000, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[2][9], SanieCar[2], 0.03985, -0.12846, 0.62500,   24.12000, 91.45490, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[2][10],SanieCar[2], 1.46000, -1.77000, 0.87000,   -152.75996, 0.00000, 90.82493);
	AttachDynamicObjectToVehicle(SanieObjects[2][11],SanieCar[2], -1.43000, -1.77000, 0.87000,   -205.02022, 0.00000, 90.82493);
	AttachDynamicObjectToVehicle(SanieObjects[2][12],SanieCar[2], 0.55000, -0.58500, 0.33000,   -358.78595, 0.00000, 178.26007);
	AttachDynamicObjectToVehicle(SanieObjects[2][13],SanieCar[2], 0.03000, -0.05000, 0.79000,   -404.01117, 4.02000, 190.32013);
	AttachDynamicObjectToVehicle(SanieObjects[2][14],SanieCar[2], 0.52000, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[2][15],SanieCar[2], -0.75500, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[2][16],SanieCar[2], -0.71500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[2][17],SanieCar[2], 0.73500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[2][18],SanieCar[2], 0.08500, -0.66000, 1.77000,   1.00500, 17.08500, 94.46994);
	AttachDynamicObjectToVehicle(SanieObjects[2][19],SanieCar[2], -1.15000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	AttachDynamicObjectToVehicle(SanieObjects[2][20],SanieCar[2], 1.12000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	AttachDynamicObjectToVehicle(SanieObjects[2][21],SanieCar[2], -1.22500, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[2][22],SanieCar[2], 1.08000, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[2][23],SanieCar[2], 1.08000, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[2][24],SanieCar[2], -1.16500, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[2][25],SanieCar[2], 0.99500, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	AttachDynamicObjectToVehicle(SanieObjects[2][26],SanieCar[2], -1.28000, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	AttachDynamicObjectToVehicle(SanieObjects[2][27],SanieCar[2], 0.00000, -2.43660, 0.33850,   0.00000, 90.00000, 90.00000);

  	SanieObjects[3][0] = CreateDynamicObject(1251, 0.00000, 1.70000, 0.63500,   0.00000, 0.00000, 0.00000);
	SanieObjects[3][1] = CreateDynamicObject(19315, 0.37500, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[3][2] = CreateDynamicObject(19315, -0.39000, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[3][3] = CreateDynamicObject(19315, -0.39000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[3][4] = CreateDynamicObject(19315, 0.36000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	SanieObjects[3][5] = CreateDynamicObject(1736, 0.36000, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[3][6] = CreateDynamicObject(1736, -0.34500, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[3][7] = CreateDynamicObject(1736, -0.34500, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[3][8] = CreateDynamicObject(1736, 0.40000, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	SanieObjects[3][9] = CreateDynamicObject(19439, 0.03985, -0.12846, 0.62500,   24.12000, 91.45490, 0.00000);
	SanieObjects[3][10] = CreateDynamicObject(1408, 1.46000, -1.77000, 0.87000,   -152.75996, 0.00000, 90.82493);
	SanieObjects[3][11] = CreateDynamicObject(1408, -1.43000, -1.77000, 0.87000,   -205.02022, 0.00000, 90.82493);
	SanieObjects[3][12] = CreateDynamicObject(1724, 0.55000, -0.58500, 0.33000,   -358.78595, 0.00000, 178.26007);
	SanieObjects[3][13] = CreateDynamicObject(2745, 0.03000, -0.05000, 0.79000,   -404.01117, 4.02000, 190.32013);
	SanieObjects[3][14] = CreateDynamicObject(19054, 0.52000, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[3][15] = CreateDynamicObject(19055, -0.75500, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[3][16] = CreateDynamicObject(19058, -0.71500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[3][17] = CreateDynamicObject(19056, 0.73500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	SanieObjects[3][18] = CreateDynamicObject(19065, 0.08500, -0.66000, 1.77000,   1.00500, 17.08500, 94.46994);
	SanieObjects[3][19] = CreateDynamicObject(1251, -1.15000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	SanieObjects[3][20] = CreateDynamicObject(1251, 1.12000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	SanieObjects[3][21] = CreateDynamicObject(1319, -1.22500, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[3][22] = CreateDynamicObject(1319, 1.08000, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[3][23] = CreateDynamicObject(1319, 1.08000, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[3][24] = CreateDynamicObject(1319, -1.16500, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	SanieObjects[3][25] = CreateDynamicObject(1319, 0.99500, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	SanieObjects[3][26] = CreateDynamicObject(1319, -1.28000, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	SanieObjects[3][27] = CreateDynamicObject(19366, 0.00000, -2.43660, 0.33850,   0.00000, 90.00000, 90.00000);

	AttachDynamicObjectToVehicle(SanieObjects[3][0], SanieCar[3], 0.00000, 1.70000, 0.63500,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[3][1], SanieCar[3], 0.37500, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[3][2], SanieCar[3], -0.39000, 4.08504, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[3][3], SanieCar[3], -0.39000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[3][4], SanieCar[3], 0.36000, 2.19500, 0.34500,   -1.00500, 1.00500, 88.43996);
	AttachDynamicObjectToVehicle(SanieObjects[3][5], SanieCar[3], 0.36000, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[3][6], SanieCar[3], -0.34500, 2.59001, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[3][7], SanieCar[3], -0.34500, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[3][8], SanieCar[3], 0.40000, 4.44005, 0.70500,   -1.00500, 1.00500, 175.87508);
	AttachDynamicObjectToVehicle(SanieObjects[3][9], SanieCar[3], 0.03985, -0.12846, 0.62500,   24.12000, 91.45490, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[3][10],SanieCar[3], 1.46000, -1.77000, 0.87000,   -152.75996, 0.00000, 90.82493);
	AttachDynamicObjectToVehicle(SanieObjects[3][11],SanieCar[3], -1.43000, -1.77000, 0.87000,   -205.02022, 0.00000, 90.82493);
	AttachDynamicObjectToVehicle(SanieObjects[3][12],SanieCar[3], 0.55000, -0.58500, 0.33000,   -358.78595, 0.00000, 178.26007);
	AttachDynamicObjectToVehicle(SanieObjects[3][13],SanieCar[3], 0.03000, -0.05000, 0.79000,   -404.01117, 4.02000, 190.32013);
	AttachDynamicObjectToVehicle(SanieObjects[3][14],SanieCar[3], 0.52000, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[3][15],SanieCar[3], -0.75500, -1.37000, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[3][16],SanieCar[3], -0.71500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[3][17],SanieCar[3], 0.73500, -3.77004, 1.10500,   -361.80096, -2.01000, 358.15594);
	AttachDynamicObjectToVehicle(SanieObjects[3][18],SanieCar[3], 0.08500, -0.66000, 1.77000,   1.00500, 17.08500, 94.46994);
	AttachDynamicObjectToVehicle(SanieObjects[3][19],SanieCar[3], -1.15000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	AttachDynamicObjectToVehicle(SanieObjects[3][20],SanieCar[3], 1.12000, -1.89000, -0.44000,   1.00500, 17.08500, 1.00500);
	AttachDynamicObjectToVehicle(SanieObjects[3][21],SanieCar[3], -1.22500, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[3][22],SanieCar[3], 1.08000, 0.00000, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[3][23],SanieCar[3], 1.08000, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[3][24],SanieCar[3], -1.16500, -3.96004, 0.00000,   0.00000, 0.00000, 0.00000);
	AttachDynamicObjectToVehicle(SanieObjects[3][25],SanieCar[3], 0.99500, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	AttachDynamicObjectToVehicle(SanieObjects[3][26],SanieCar[3], -1.28000, 1.90500, -0.13000,   -53.26501, -1.00500, 6.03000);
	AttachDynamicObjectToVehicle(SanieObjects[3][27],SanieCar[3], 0.00000, -2.43660, 0.33850,   0.00000, 90.00000, 90.00000);
	return 1;
}
new Text:BetText[MAX_PLAYERS];
new PlayerText:Textdsraws20000[MAX_PLAYERS];	new PlayerText:Textdsraws0[MAX_PLAYERS];
new PlayerText:Textdsraws1[MAX_PLAYERS];		new PlayerText:Textdsraws2[MAX_PLAYERS];
new PlayerText:Textdsraws3[MAX_PLAYERS];		new PlayerText:Textdsraws4[MAX_PLAYERS];
new PlayerText:Textdsraws5[MAX_PLAYERS];		new PlayerText:Textdsraws6[MAX_PLAYERS];
new PlayerText:Textdsraws7[MAX_PLAYERS];		new PlayerText:Textdsraws8[MAX_PLAYERS];
new PlayerText:Textdsraws9[MAX_PLAYERS];		new PlayerText:Textdsraws10[MAX_PLAYERS];
new PlayerText:Textdsraws11[MAX_PLAYERS];		new PlayerText:Textdsraws12[MAX_PLAYERS];
new PlayerText:Textdsraws13[MAX_PLAYERS];		new PlayerText:Textdsraws14[MAX_PLAYERS];
new PlayerText:Textdsraws15[MAX_PLAYERS];		new PlayerText:Textdsraws16[MAX_PLAYERS];
new PlayerText:Textdsraws17[MAX_PLAYERS];		new PlayerText:Textdsraws18[MAX_PLAYERS];
new PlayerText:Textdsraws19[MAX_PLAYERS];		new PlayerText:Textdsraws20[MAX_PLAYERS];
new PlayerText:Textdsraws21[MAX_PLAYERS];		new PlayerText:Textdsraws22[MAX_PLAYERS];
new PlayerText:Textdsraws23[MAX_PLAYERS];		new PlayerText:Textdsraws24[MAX_PLAYERS];
new PlayerText:Textdsraws25[MAX_PLAYERS];		new PlayerText:Textdsraws26[MAX_PLAYERS];
new PlayerText:Textdsraws27[MAX_PLAYERS];		new PlayerText:Textdsraws28[MAX_PLAYERS];
new PlayerText:Textdsraws2229[MAX_PLAYERS];		new PlayerText:Textdsraws2228[MAX_PLAYERS];
new PlayerText:Textdsraws10222[MAX_PLAYERS];	new PlayerText:Textdsraws10223[MAX_PLAYERS];
new PlayerText:Textdsraws10224[MAX_PLAYERS];	new PlayerText:Textdsraws10225[MAX_PLAYERS];
new PlayerText:Textdsraws10226[MAX_PLAYERS];	new PlayerText:Textdsraws10227[MAX_PLAYERS];
new PlayerText:Textdsraws10228[MAX_PLAYERS];	new PlayerText:Textdsraws10229[MAX_PLAYERS];
new PlayerText:Textdsraws10230[MAX_PLAYERS];	new PlayerText:Textdsraws10231[MAX_PLAYERS];
new PlayerText:Textdsraws10232[MAX_PLAYERS];	new PlayerText:Textdsraws10233[MAX_PLAYERS];
new PlayerText:Textdsraws16666666[MAX_PLAYERS];	new PlayerText:Galaxy3Gallery;
new PlayerText:Galaxy3Gallery2;					new PlayerText:PDRow1[MAX_PLAYERS];	new PlayerText:pPowerTD[MAX_PLAYERS];
new Text:PDMainMenu;							new Text:PDLineUp;					new Text:PDLineDown;			new Text:PDSsapd;
new PlayerText:PDRow4[MAX_PLAYERS];				new Text:PDOption[MAX_PLAYERS];					new Text:PDRowStar1;            new Text:PDProtect;             new Text:PDBackGround;
new PlayerText:PDRow5[MAX_PLAYERS];				new Text:PDRowStar2;				new Text:PDRowStar3;			new Text:PDRowStar4;            new Text:PDRowStar5;
new PlayerText:PDRow3[MAX_PLAYERS]; 			new RowedPDMenu[MAX_PLAYERS];		new PlayerText:PDRow2[MAX_PLAYERS];
new PlayerText:Galaxy3Gallery3;					new PlayerText:Galaxy3Gallery4;		new PlayerText:Galaxy3Gallery5;	
new PlayerText:Galaxy3Gallery6;		
	
	
