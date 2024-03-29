clone_relics_sawtooth = Creature:new {
	objectName = "@mob/creature_names:clone_relics_sawtooth",
	socialGroup = "",
	pvpFaction = "",
	faction = "",
	level = 11,
	chanceHit = 0.28,
	damageMin = 90,
	damageMax = 110,
	baseXp = 514,
	baseHAM = 810,
	baseHAMmax = 990,
	armor = 0,
	resists = {10,5,0,0,0,0,0,-1,-1},
	meatType = "",
	meatAmount = 0,
	hideType = "",
	hideAmount = 0,
	boneType = "",
	boneAmount = 0,
	milk = 0,
	tamingChance = 0,
	ferocity = 0,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = KILLER + STALKER,
	optionsBitmask = 128,
	diet = HERBIVORE,

	templates = {"object/mobile/clone_relics_sawtooth.iff"},
		
	lootGroups = {},
	weapons = {},
	conversationTemplate = "",
	attacks = merge()
}

CreatureTemplates:addCreatureTemplate(clone_relics_sawtooth, "clone_relics_sawtooth")
