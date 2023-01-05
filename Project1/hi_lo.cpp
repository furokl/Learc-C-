#include <iostream>
#include <cstdlib>
#include "hi_lo.h"
#include "constants.h"

void printStartGameMessage() {
	std::cout <<
		"Let's play a game. " <<
		"I'm thinking of a number. " <<
		"You have 7 tries to guess what it is." << '\n';
}

void printEndGameMessage() {
	std::cout << "Thank you for playing.";
}

unsigned int getRandomNumber(unsigned int min, unsigned int max) {
	return rand() % max + min;
}

unsigned int getGuess(unsigned int min, unsigned int max) {
	while (true)
	{
		unsigned int value;
		std::cin >> value;

		if (std::cin.fail() || value < min || value > max)
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Oops, that input is invalid. Please try again.\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return value;
		}
	}
}

bool restartGame() {
	while (true)
	{
		std::cout << "Would you like to play again (y/n)? ";
		char value;
		std::cin >> value;

		if (std::cin.fail() ||
			(value != 'y' && value != 'n'))
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Oops, that input is invalid. Please try again.\n";
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return value == 'y';
		}
	}
}

void play() {
	unsigned int
		result_random_number = getRandomNumber(hiloRules::min_random_number, hiloRules::max_random_number),
		user_number;

	for (int i = 1; i <= hiloRules::tries; ++i)
	{
		std::cout << "Guess #" << i << ": ";
		user_number = getGuess(hiloRules::min_random_number, hiloRules::max_random_number);

		if (user_number == result_random_number)
		{
			std::cout << "Correct! You win!\n";
			break;
		}
		(user_number < result_random_number) ?
			std::cout << "Your guess is too low.\n" :
			std::cout << "Your guess is too high.\n";

		if (i == hiloRules::tries)
		{
			std::cout <<
				"Sorry, you lose. " <<
				"The correct number was " << result_random_number << ".\n";
			break;
		}
	}
}