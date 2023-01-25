#include <iostream>
#include "Monster2.h"

std::ostream &operator << (std::ostream &out, const Monster &monster)
{
	out << monster.getName() << " has " <<
		monster.getHealth() << " health and " <<
		monster.getGold() << " golds." << '\n';
	return out;
}

Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
	{ "dragon", 'D', 20, 4, 100 },
	{ "orc", 'o', 4, 2, 25 },
	{ "slime", 's', 1, 1, 10 }
};