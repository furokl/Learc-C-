#pragma once
#include "Creature.h"

class Monster: public Creature
{
public:
	enum Type
	{
		DRAGON,
		ORC,
		SLIME,
		MAX_TYPES
	};

private:
	struct MonsterData
	{
		std::string name;
		char symbol;
		int health;
		int damage;
		int gold;
	};

	static Type getRandomType() {
		return static_cast<Type>(rand() % MAX_TYPES);
	}

public:
	static Monster::MonsterData monsterData[MAX_TYPES];

	Monster(Type type = getRandomType())
		: Creature(
			monsterData[type].name,
			monsterData[type].symbol,
			monsterData[type].health,
			monsterData[type].damage,
			monsterData[type].gold)
	{
	}

	Monster getRandomMonster() {
		return Monster(getRandomType());
	}
};

std::ostream &operator << (std::ostream &out, const Monster &monster);

