params["_box"];

_box addAction [
	"<t color='#FF0000'>Get Med Perms</t>", 
	{player setUnitTrait["Medic", 1];}, 
	nil,
	5,
	true,
	true,
	"",
	"!(player getUnitTrait 'Medic')"
];

_box addAction [
	"<t color='#FF0000'>Remove Med Perms</t>", 
	{player setUnitTrait["Medic", 0];}, 
	nil,
	5,
	true,
	true,
	"",
	"(player getUnitTrait 'Medic')"
];

_box addAction [
	"<t color='#FFFF00'>Get Engineer Perms</t>", 
	{player setUnitTrait["Engineer", 1];}, 
	nil,
	4,
	true,
	true,
	"",
	"!(player getUnitTrait 'Engineer')"
];

_box addAction [
	"<t color='#FFFF00'>Remove Engineer Perms</t>", 
	{player setUnitTrait["Engineer", 0];}, 
	nil,
	4,
	true,
	true,
	"",
	"(player getUnitTrait 'Engineer')"
];
 
_box addAction [
	"<t color='#00FF00'>Get EOD Perms</t>", 
	{player setUnitTrait["explosiveSpecialist", 1];}, 
	nil,
	3,
	true,
	true,
	"",
	"!(player getUnitTrait 'explosiveSpecialist')"
];

_box addAction [
	"<t color='#00FF00'>Remove EOD Perms</t>", 
	{player setUnitTrait["explosiveSpecialist", 0];}, 
	nil,
	3,
	true,
	true,
	"",
	"(player getUnitTrait 'explosiveSpecialist')"
];