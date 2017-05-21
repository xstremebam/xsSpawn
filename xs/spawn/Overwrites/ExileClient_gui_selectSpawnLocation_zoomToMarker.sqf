/**
 * ExileClient_gui_selectSpawnLocation_zoomToMarker
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
private["_markerName","_display","_mapControl"];
disableSerialization;
_markerName = _this;
_display = uiNamespace getVariable ["xstremeGroundorHaloDialog",displayNull];
_mapControl = _display displayCtrl 1300;
_mapControl ctrlMapAnimAdd [1, 0.1, getMarkerPos _markerName]; 
ctrlMapAnimCommit _mapControl;
true