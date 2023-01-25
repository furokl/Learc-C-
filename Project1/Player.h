#pragma once
#include <iostream>

#include "Creature.h"
#include "constants.h"

class Player: public Creature
{
private:
	int level;

public:
	Player(int level = game::player::level)
		: Creature(
			getPlayerName(),
			game::player::symbol,
			game::player::health,
			game::player::damage,
			game::player::gold)
	{
		this->level = level;
		std::cout << "You have " << this->health << " health and are carrying " << this->gold << " gold." << std::endl;
	}

	int getLevel() const { return this->level; }
	bool hasWon() { return level >= game::win; }
	void levelUp();

private:
	std::string getPlayerName();
};