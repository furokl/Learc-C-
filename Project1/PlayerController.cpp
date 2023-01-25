#include "PlayerController.h"

void PlayerController::run(Monster &monster) {
	if (getSuccess(50))
	{
		monster = monster.getRandomMonster();
	}
	else
	{
		std::cout << '\t' << "\tA#@^%#$^AAA@#^%@A!" << '\n';
		this->reduceHealth(monster.getDamage());
	}
}

void PlayerController::fight(Monster &monster) {
	monster.reduceHealth(this->damage);

	if (monster.isDead())
	{
		std::cout << '\t' << monster.getName() << " is dead!\n";
		levelUp();
		monster = monster.getRandomMonster();
		this->addGold(monster.getGold());
	}
	else
	{
		std::cout << '\t' << "\tA#@^%#$^AAA@#^%@A!" << '\n';
		this->reduceHealth(monster.getDamage());
	}
}

void PlayerController::playerTurn(Monster &monster) {
	while (true)
	{
		std::cout <<
			"--------------------------------------\n" <<
			monster <<
			"run or fight? (enter \'r\' of \'f\'): ";
		char action;
		std::cin >> action;
		
		if (std::cin.fail() || 
			(action != 'r' && action != 'f')) 
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Oops, that input is invalid. Please try again.\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			if (action == 'r')
				run(monster);
			else if (action == 'f')
				fight(monster);
			break;
		}
	}
}