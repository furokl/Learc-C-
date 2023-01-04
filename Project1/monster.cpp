#include "monster.h"
#include <iostream>

std::string getMonsterType(MonsterType monsterType) {
	if (monsterType == MonsterType::OGRE)
		return "Ogre";
	else if (monsterType == MonsterType::GOBLIN)
		return "Goblin";
	else if (monsterType == MonsterType::SKELETON)
		return "Skeleton";
	else if (monsterType == MonsterType::ORC)
		return "Orc";
	else if (monsterType == MonsterType::TROLL)
		return "Troll";
	else
		return "Unknown";
}

void printMonster(Monster monster) {
	std::cout <<
		"This " << getMonsterType(monster.type) <<
		" is named " << monster.name <<
		" and has " << monster.health << " health." << '\n';
}