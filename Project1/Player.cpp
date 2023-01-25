#include "Player.h"

std::string Player::getPlayerName() {
	while (true)
	{
		std::cout << "Enter a player name: ";
		std::string name;
		std::cin >> name;
		
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Oops, that input is invalid. Please try again.\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			std::cout <<
				"Welcome, " << name << '.' << '\n';
			return name;
		}
	}
}

void Player::levelUp() {
	++this->level;
	++this->damage;
}