class mehland {
	population[] = {
		{"Kongsdal_NameCity",397},{"Langbygd_NameCity",38},{"st_Bygda_NameCity",165},{"Langgrunn_NameCity",376},{"Kilen_NameCity",332},{"Midtjordet_NameCity",99},{"Storestranda_NameCity",154},{"Lillestranda_NameCity",43},{"Tuppen_NameCity",12},{"Falkensen_NameCity",110},{"stre_Dal_NameCity",54},{"Jarberg_NameCity",20},{"Kraken_NameCity",21},{"Grimestranda_NameCity",78},{"Mellomya_NameCity",22},{"Kjpmannskjr_NameCity",53},{"Rdvik_NameCity",16},{"Gropa_NameCity",97},{"Utkikssen_NameCity",68},{"Platet_NameCity",48},{"Jarlsby_NameCity",234},{"Sndre_Berg_NameCity",57},{"Sjberg_NameCity",54},{"Kanalen_By_NameCity",96},{"Bergssen_NameCity",149},{"Dalsbygd_NameCity",187},{"Dalsvingen_NameCity",147},{"Hgtoppsvingen_NameCity",134},{"Innlaget_NameCity",168},{"Kirkelv_NameCity",26},{"Vestre_Muningen_NameCity",112},{"Stranda_NameCity",78},{"Husvik_NameCity",205},{"Skogholt_NameCity",33},{"Holtan_NameCity",45},{"Store_Vollen_NameCity",61},{"Sandesen_NameCity",34},{"Sndre_Rd_NameCity",18},{"Presterd_NameCity",16},{"Storker_NameCity",73},{"Sndre_Grdsbygd_NameCity",17},{"Vestskogen_NameCity",57},{"Tmmerholt_NameCity",23},{"Kortbygd_NameCity",29},{"Haugen_NameCity",37},{"stre_Kongsbygd_NameCity",26},{"Kongsbakken_NameCity",79},{"Nordre_Kongsbygd_NameCity",34},{"Sndre_Kongsbygd_NameCity",79},{"Haslestranda_NameCity",39},{"Haraldstranda_NameCity",23},{"Bergsbygd_NameCity",52},{"Oserd_NameCity",30},{"Hesby_NameCity",19},{"Grdbo_NameCity",17}
	};
	disabledTowns[] = {"Grunnstad_NameCity","Klepp_NameCity","Bjerke_NameCity","Hillstad_NameCity","Heiertun_NameCity","Myresvingen_NameCity","Horn_NameCity","Vermelid_NameCity","Heian_NameCity","degrden_NameCity","Sndre_Bjune_NameCity","Kpe_NameCity","Auli_NameCity","Huseby_NameCity","Nordre_Bjune_NameCity","vre_Dal_NameCity","Dalstoppen_NameCity","Vestre_Bakke_NameCity","Kirkebygda_NameCity","Krantun_NameCity","Veierud_NameCity","Rastad_NameCity","Frestestad_NameCity","Fjrholmen_NameCity","Strangestad_NameCity","Srdalsbygda_NameCity","Hallingrd_NameCity","lborgy_NameCity","Borgstad_NameCity","Stange_NameCity","Aker_NameCity","Bjelland_NameCity","Gunnestad_NameCity","Basberg_NameCity","Lyng_NameCity","Rustan_NameCity","Gretteberg_NameCity","Skarphaga_NameCity","Tuftekroken_NameCity","Tuftedal_NameCity","Kile_NameCity","Lkke_NameCity","Kleppan_NameCity","Smrberg_NameCity","stre_Muningen_NameCity","Lille_Vollen_NameCity","Skogly_NameCity","mot_NameCity","Vik_NameCity","Tangen_NameCity","Solerd_NameCity","Solby_NameCity","Rnningen_NameCity","Slettefjell_NameCity","Frevik_NameCity","Nygrd_NameCity","Nordre_Grdsbygd_NameCity","Nordre_Vise_NameCity","Sndre_Vise_NameCity","Eikekrysset_NameCity","Vervet_NameCity","Kirkebygd_NameCity","Eplebygd_NameCity","Barkost_NameCity","Foss_NameCity","Sjskogen_NameCity","Eikelia_NameCity","Sundby_NameCity","Orvika_NameCity","Kjern_NameCity","Voll_NameCity","Gran_NameCity","Haugan_NameCity","Greker_NameCity","Jaren_NameCity","Vest_Bygda_NameCity","Vestlige_Fiske_Frabrikk_NameCity","Kilen_Vannverk_NameCity","Kilen_Havn_NameCity","Lille_Kilen_NameCity","Midtjordet_Tmmermlle_NameCity","Bjrnstad_NameCity","Heimdal_NameCity","Stensrud_NameCity","Vest_Kraftanlegg_NameCity","r_NameCity"};
	antennas[] = {
	{2130.52,7317.1,11.6046},{6449.83,2861.46,11.3903},{11817.4,1924.62,11.2502},{17404.7,6487.38,0},{18040.5,3961.01,11.5468},{940.369,19357.3,0},{4835.66,4407.9,0},{19393.8,15043.3,0.0524292},{18339.8,16716.2,0.00104523},{18604.3,12904.7,0.00198364},{13692.2,18442,1.52588e-005},{9273.36,18895.7,11.2533},{968.36,16829.6,0.000488281}
	};
	antennasBlacklistIndex[] = {};
	banks[] = {
		// No appropriate buildings
	};
	garrison[] = {
		{},{"airport","outpost_11","resource_6","seaport_3"},{},{"control_44","control_45","control_46","control_47"}
	};
	fuelStationTypes[] = {
		"Land_FuelStation_Feed_F","Land_fs_feed_F","Land_FuelStation_01_pump_malevil_F","Land_FuelStation_01_pump_F","Land_FuelStation_02_pump_F","Land_FuelStation_03_pump_F"
	};
	climate = "temperate";
	buildObjects[] = {
		// Large vanilla arid structures
		{"Land_BagBunker_Large_F", 300}, {"Land_BagBunker_Tower_F", 300}, {"Land_BagBunker_Small_F", 60},
		{"Land_Shed_09_F", 120}, {"Land_Shed_10_F", 140},
		// Vanilla arid sandbag walls
		{"Land_BagFence_Long_F", 10}, {"Land_BagFence_Round_F", 10}, {"Land_BagFence_Short_F", 10},
		// Non-camo vanilla stuff
		{"Land_SandbagBarricade_01_half_F", 20}, {"Land_SlumWall_01_s_2m_F", 5}, {"Land_PillboxBunker_01_hex_F", 200},
		{"Land_Barricade_01_4m_F", 30}, {"Land_GuardBox_01_brown_F", 80}, {"Land_Tyres_F", 10}
	};
};
