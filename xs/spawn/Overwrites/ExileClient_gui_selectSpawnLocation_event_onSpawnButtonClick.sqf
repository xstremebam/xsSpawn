/**
 * ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
 private ["_playerChoice"];
 
_playerChoice = _this select 0;

if (_playerChoice isEqualTo 1) then {

	player setVariable ["playerWantsHaloSpawn",1,true];

} else {

	player setVariable ["playerWantsHaloSpawn",0,true];
	
};

ExileClientSpawnLocationSelectionDone = true;
//closeDialog 1;

true