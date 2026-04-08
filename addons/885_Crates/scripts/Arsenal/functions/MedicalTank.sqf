params["_box"];

_box addAction [ 
	"<t size='1.5' color='#FFA500'>Recieve Treatment</t>",  
	{
		[player] call ACE_medical_treatment_fnc_fullHealLocal;
	},  
	nil, 
	6, 
	true, 
	true, 
	"", 
	"player in _this",
	5,
	true
];