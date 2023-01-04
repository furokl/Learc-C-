#ifndef MONSTER_H
#define MONSTER_H

#include <string>

enum class MonsterType {
	OGRE,
	GOBLIN,
	SKELETON,
	ORC,
	TROLL,
	MAX_MONSTER_TYPE
};

struct Monster {
	std::string name;
	float		health,
				damage;
	MonsterType type;
};

std::string getMonsterType(MonsterType monsterType);
void printMonster(Monster monster);

#endif // !MONSTER_H


