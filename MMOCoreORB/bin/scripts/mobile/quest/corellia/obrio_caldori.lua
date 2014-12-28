obrio_caldori = Creature:new {
	objectName = "",
	socialGroup = "townsperson",
	pvpFaction = "townsperson",
	faction = "townsperson",
	level = 4,
	chanceHit = 0.24,
	damageMin = 40,
	damageMax = 45,
	baseXp = 85,
	baseHAM = 113,
	baseHAMmax = 138,
	armor = 0,
	resists = {0,0,0,0,0,0,0,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = ATTACKABLE,
	creatureBitmask = PACK,
	optionsBitmask = 136,
	diet = HERBIVORE,

	templates = {	
			"object/mobile/dressed_noble_bothan_male_01.iff", 
			"object/mobile/dressed_noble_fat_human_male_01.iff", 
			"object/mobile/dressed_noble_fat_human_male_02.iff", 
			"object/mobile/dressed_noble_fat_twilek_male_01.iff", 
			"object/mobile/dressed_noble_fat_twilek_male_02.iff", 
			"object/mobile/dressed_noble_fat_zabrak_male_01.iff", 
			"object/mobile/dressed_noble_fat_zabrak_male_02.iff", 
			"object/mobile/dressed_noble_human_male_01.iff", 
			"object/mobile/dressed_noble_human_male_02.iff", 
			"object/mobile/dressed_noble_human_male_03.iff", 
			"object/mobile/dressed_noble_human_male_04.iff", 
			"object/mobile/dressed_noble_naboo_twilek_male_01.iff", 
			"object/mobile/dressed_noble_old_human_male_01.iff", 
			"object/mobile/dressed_noble_old_human_male_02.iff", 
			"object/mobile/dressed_noble_old_twk_male_01.iff", 
			"object/mobile/dressed_noble_old_twk_male_02.iff", 
			"object/mobile/dressed_noble_old_zabrak_male_01.iff", 
			"object/mobile/dressed_noble_old_zabrak_male_02.iff", 
			"object/mobile/dressed_noble_rodian_male_01.iff", 
			"object/mobile/dressed_noble_trandoshan_male_01.iff", 
			"object/mobile/dressed_noble_twilek_male_01.iff", 
			"object/mobile/dressed_noble_zabrak_male_01.iff", 
	},
	lootGroups = {},
	weapons = {},
	conversationTemplate = "corran_horn_mission_target_convotemplate",
	attacks = brawlermaster
}

CreatureTemplates:addCreatureTemplate(obrio_caldori, "obrio_caldori")