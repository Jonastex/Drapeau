/*
Author : John lpb
Par la propriété intélectuel de John Deep.
Ce fichier est protégé, pour tout modification ou utilisation contacté moi.
Discord: Jonastex#2733
steam: https://steamcommunity.com/id/jonastex
*/
class drapeau
{
	idd = 11062020;
	name = "drapeau";
	author = "John le plus beau de tous";

	class controlsBackground
	{};

	class controls
	{
		class haut: RscButton
		{
			idc = -1;
			onButtonClick = [this, 1] call BIS_fnc_animateFlag;
			text = "click pour mettre le drapeaux en hauteur"; //--- ToDo: Localize;
			x = 0.300736 * safezoneW + safezoneX;
			y = 0.210987 * safezoneH + safezoneY;
			w = 0.350705 * safezoneW;
			h = 0.153007 * safezoneH;
		};
		class bas: RscButton
		{
			idc = -1;
			onButtonClick = [this, 0] call BIS_fnc_animateFlag;
			text = "click pour mettre le drapeaux en bas"; //--- ToDo: Localize;
			x = 0.300736 * safezoneW + safezoneX;
			y = 0.465998 * safezoneH + safezoneY;
			w = 0.350705 * safezoneW;
			h = 0.153007 * safezoneH;
		};
		class quittea: RscButtonMenuCancel
		{
			idc = -1;
			onButtonClick = "closeDialog 0;";
			x = 0.755059 * safezoneW + safezoneX;
			y = 0.108982 * safezoneH + safezoneY;
			w = 0.0398529 * safezoneW;
			h = 0.0510023 * safezoneH;
		};
	};
};
