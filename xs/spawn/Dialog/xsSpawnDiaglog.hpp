//////////////////////////////////////////////
// 											//
// xsSpawn | Ground Spawn or Halo Selection //
// by bambam of xstremegaming.com		    //
//											//
//////////////////////////////////////////////

class xstremeGroundorHaloDialog
{
	idd = 86000;
	access = 3;
	duration = -1;
	onLoad = "uiNamespace setVariable ['xstremeGroundorHaloDialog', _this select 0];";
	onUnload = "uiNamespace setVariable ['xstremeGroundorHaloDialog', displayNull];";
	
	class Controls
	{
		class xsSpawnBackground: xsSpawnRscPicture
		{
			idc = 1100;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneW * 4/3";
			text = "xs\spawn\xsbackground.paa";
		};
		class xsSpawnLogo: xsSpawnRscPictureKeepAspect
		{
			idc = 1101
			x = 0.0771875 * safezoneW + safezoneX;
			y = 0.054 * safezoneH + safezoneY;
			w = 0.156 * safezoneW;
			h = 0.156 * safezoneH;
			text = "xs\spawn\xslogo.paa";
		};
		class xsSpawnHalo: xsSpawnRscButton
		{
			idc = 1600;
			text = "Halo Spawn";
			x = 0.644375 * safezoneW + safezoneX;
			y = 0.878 * safezoneH + safezoneY;
			w = 0.0984375 * safezoneW;
			h = 0.056 * safezoneH;
			colorBackground[] = {"199/255","38/255","81/255",1};
			colorText[] = {1,1,1,1};
			shadow = 0;
			font = "RobotoMedium";
			sizeEx = "30 * pixelH";
			colorFocused[] = {"199/255","38/255","81/255",0.8};
			colorBackgroundActive[] = {"199/255","38/255","81/255",0.8};
			onButtonClick = "[1] call ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick; closeDialog 86000;";
		};
		class xsSpawnGround: xsSpawnRscButton
        {
        	idc = 1601;
			text = "Ground Spawn";
			x = 0.755937 * safezoneW + safezoneX;
			y = 0.878 * safezoneH + safezoneY;
			w = 0.0984375 * safezoneW;
			h = 0.056 * safezoneH;
			colorBackground[] = {"199/255","38/255","81/255",1};
			colorText[] = {1,1,1,1};
			shadow = 0;
			font = "RobotoMedium";
			sizeEx = "30 * pixelH";
			colorFocused[] = {"199/255","38/255","81/255",0.8};
			colorBackgroundActive[] = {"199/255","38/255","81/255",0.8};
			onButtonClick = "[0] call ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick; closeDialog 86000;";
		};
		class xsSpawnLocations: xsSpawnRscListbox
		{
			idc = 1500;
			text = "Locations";
			font = "RobotoCondensed";
			x = 0.644375 * safezoneW + safezoneX;
			y = 0.332 * safezoneH + safezoneY;
			w = 0.21 * safezoneW;
			h = 0.518 * safezoneH;
			colorBackground[] = {0,0,0,0.5};
			onLBSelChanged = "_this call ExileClient_gui_selectSpawnLocation_event_onListBoxSelectionChanged;";
		};
		class Map: xsSpawnRscMapControl
		{
			idc = 1300;
			text = "";
			x = 0.066875 * safezoneW + safezoneX;
			y = 0.332 * safezoneH + safezoneY;
			w = 0.49875 * safezoneW;
			h = 0.602 * safezoneH;
			moveOnEdges = 0;
			maxSatelliteAlpha = 0.75;
			alphaFadeStartScale = 1.15;
			alphaFadeEndScale = 1.29;
			colorOutside[] = {0.0,0.0,0.0,1.0};
		};
		class textbar: xsSpawnRscStructuredText
		{
			idc = 1204;
			text = "";
			x = 0.278281 * safezoneW + safezoneX;
			y = 0.093 * safezoneH + safezoneY;
			w = 0.572344 * safezoneW;
			h = 0.055 * safezoneH;
			font = "RobotoMedium";
			colorText[] = {1,1,1,1};
		};
	};
};