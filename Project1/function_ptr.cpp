#include "function_ptr.h"
#include <iostream>

struct arithmeticStruct {
	char op;
	arithmeticFcn fptr;
};

/*
* #.!'Интересно' инициализация структур std::array{{{}}}
*	Внешние скобки для всего класса
*	Следующие скобки для этого массива
*	И четыре парры внутренних скобок - для элементов этого массива
* Подробнее https://ru.stackoverflow.com/questions/1257211/Инициализация-массива-stdarray-структурами
*/
std::array<arithmeticStruct, 4> arithmeticArray{ {
	{ '+', add },
	{ '-', subtract },
	{ '*', multiply },
	{ '/', devide }
} };

// Пользовательский ввод операции
char getSymbol(cinCondition fptr_condition = defaultCalculateCondition) {
	while (true)
	{
		char value;
		std::cin >> value;
		
		if (std::cin.fail() || fptr_condition(value))
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

// Пользовательский ввод операнда
int getNumber() {
	while (true)
	{
		int value;
		std::cin >> value;

		if (std::cin.fail())
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

// Возвращает ссылку на функцию в зависимости от оператора для дальнейших расчетов
//arithmeticFcn getArithmeticFcn(const char &op) {
//	switch (op)
//	{
//	case '+': return add;
//	case '-': return subtract;
//	case '*': return multiply;
//	case '/': return devide;
//	default:
//		std::cout << '\a' << "default case:\tarithmeticFcn getArithmeticFcn(char &)" << '\n';
//		exit(EXIT_FAILURE);
//	}
//}
arithmeticFcn getArithmeticFcn(const char &op_) {
	for (const auto &el : arithmeticArray)
		if (el.op == op_) return el.fptr;
}