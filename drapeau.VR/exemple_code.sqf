// put in init flag this : 
this setFlagTexture "texture\france.paa";
this addAction ["Monter de drapeau", {[(_this select 0), 1] call BIS_fnc_animateFlag;},nil,1.5,true,true,"","true",10];
this addAction ["Descente de drapeau", {[(_this select 0), 0] call BIS_fnc_animateFlag;},nil,1.5,true,true,"","true",10];
