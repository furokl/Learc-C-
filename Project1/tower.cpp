#include <iostream>
#include "tower.h"
#include "constants.h"

const float getHeight() {
	while (true)
	{
		std::cout << "Enter a height: ";
		float value;
		std::cin >> value;

		if (std::cin.fail()) {
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

void printResult(const float h) {
	int t = 0;
	float result;
	do
	{
		++t;
		result = h - myConst::g * t * t / 2.f;
		if (result < 0) result = 0;
		std::cout << "At " << t << " seconds, the ball is at height: " << result << " meters" << std::endl;
	} while (result > 0);
}