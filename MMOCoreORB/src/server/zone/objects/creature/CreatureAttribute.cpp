/*
Copyright (C) 2007 <SWGEmu>

This File is part of Core3.

This program is free software; you can redistribute
it and/or modify it under the terms of the GNU Lesser
General Public License as published by the Free Software
Foundation; either version 2 of the License,
or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General
Public License along with this program; if not, write to
the Free Software Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA

Linking Engine3 statically or dynamically with other modules
is making a combined work based on Engine3.
Thus, the terms and conditions of the GNU Lesser General Public License
cover the whole combination.

In addition, as a special exception, the copyright holders of Engine3
give you permission to combine Engine3 program with free software
programs or libraries that are released under the GNU LGPL and with
code included in the standard release of Core3 under the GNU LGPL
license (or modified versions of such code, with unchanged license).
You may copy and distribute such a system following the terms of the
GNU LGPL for Engine3 and the licenses of the other code concerned,
provided that you include the source code of that other code when
and as the GNU LGPL requires distribution of source code.

Note that people who make modified versions of Engine3 are not obligated
to grant this special exception for their modified versions;
it is their choice whether to do so. The GNU Lesser General Public License
gives permission to release a modified version without this exception;
this exception also makes it possible to release a modified version
which carries forward this exception.
*/

#include "CreatureAttribute.h"

const uint8 CreatureEncumbrance::HEALTH = 0;
const uint8 CreatureEncumbrance::ACTION = 1;
const uint8 CreatureEncumbrance::MIND = 2;

const uint8 CreatureAttribute::HEALTH = 0;
const uint8 CreatureAttribute::STRENGTH = 1;
const uint8 CreatureAttribute::CONSTITUTION = 2;
const uint8 CreatureAttribute::ACTION = 3;
const uint8 CreatureAttribute::QUICKNESS = 4;
const uint8 CreatureAttribute::STAMINA = 5;
const uint8 CreatureAttribute::MIND = 6;
const uint8 CreatureAttribute::FOCUS = 7;
const uint8 CreatureAttribute::WILLPOWER = 8;
const uint8 CreatureAttribute::UNKNOWN = 9;

const uint8 CreatureAttribute::ARRAYSIZE = 9;


bool CreatureAttribute::isHAM(uint8 attribute) {
	return (attribute == HEALTH || attribute == ACTION || attribute == MIND);
}

uint8 CreatureAttribute::getAttribute(String attribute) {
	attribute = attribute.toLowerCase();

	if (attribute == "action")
		return ACTION;
	else if (attribute == "mind")
		return MIND;
	else if (attribute == "strength")
		return STRENGTH;
	else if (attribute == "constitution")
		return CONSTITUTION;
	else if (attribute == "quickness")
		return QUICKNESS;
	else if (attribute == "stamina")
		return STAMINA;
	else if (attribute == "focus")
		return FOCUS;
	else if (attribute == "willpower")
		return WILLPOWER;
	else
		return HEALTH;

}

String CreatureAttribute::getName(const uint8 attribute, bool initialCap) {
	String name = "";

	switch (attribute) {
	case ACTION:
		name = "action";
		break;
	case MIND:
		name = "mind";
		break;
	case STRENGTH:
		name = "strength";
		break;
	case CONSTITUTION:
		name = "constitution";
		break;
	case QUICKNESS:
		name = "quickness";
		break;
	case STAMINA:
		name = "stamina";
		break;
	case FOCUS:
		name = "focus";
		break;
	case WILLPOWER:
		name = "willpower";
		break;
	default:
	case HEALTH:
		name = "health";
		break;
	}

	if (initialCap)
		name[0] = toupper(name[0]);

	return name;
}