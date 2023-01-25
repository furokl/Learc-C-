#pragma once


#include "Player.h"
#include "Monster2.h"
class PlayerController: public Player
{
private:
	bool getSuccess(int chance) {
		return chance > rand() % 101;
	}

public:
	PlayerController() 
		: Player()
	{
	}

	void run(Monster &monster);
	void fight(Monster &monster);
	void playerTurn(Monster &monster);
};
