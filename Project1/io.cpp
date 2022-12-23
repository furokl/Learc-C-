#include <iostream>

int readNumber() {
	int value;
	std::cout << "Enter a number: ";
	std::cin >> value;

	return value;
}

void writeAnswer(int value) {
	std::cout << "Result: " << value << '\n' << std::endl;
}