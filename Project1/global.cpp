#include "global.h"
#include <iostream>

// глобальная область видимости
// статичная продолжительность жизни			(до завершения программы)

// внешняя связь
int g_default_extern_x;					// избегать!
extern const int g_extern_const_x(1);	// должна быть инициализирована

// внутренняя связь
static int g_static_x;
const int g_default_static_const_x(1);	// должна быть инициализирована

void static_local_x() {
	// локальная область видимости
	// статичная продолжительность жизни		(до завершения программы)
	// нет связей
	std::cout << "static_local_x()" << '\n';
	static int s_x{ 5 };
	++s_x;
	std::cout << "x = " << s_x << std::endl;
}

void local_x() {
	// локальная область видимости
	// автоматическая продолжительность жизни	(до конца блока-стейтментов{} )
	// нет связей
	std::cout << "local_x()" << '\n';
	int x{ 5 };
	++x;
	std::cout << "x = " << x << std::endl;
}

void local_parametr_x(int x) {
	// локальная область видимости
	// автоматическая продолжительность жизни	(до конца блока-стейтментов{} )
	// нет связей
	std::cout << "local_parametr_x(int)" << '\n';
	std::cout << "x = " << x << std::endl;
}

void dynamic_x() {
	// локальная область видимости
	// динамическая продолжительность жизни		(задается программистом при помощи delete)
	// нет связей
	std::cout << "dynamic_x()" << '\n';
	int* x = new int{ 5 };
	std::cout << "x = " << *x << "\tdelete" << std::endl;
	delete x;
	x = nullptr;
}

int not_main() {
	local_x();
	local_x();
	static_local_x();
	static_local_x();
	local_parametr_x(1);
	dynamic_x();

	g_default_extern_x = 1;
	g_static_x = 1;

	std::cout << "\nGlobal value (outside the block)\n";

	std::cout << 
		"int g_x" << "\t\t\t" << " = " << g_default_extern_x << '\n' <<
		"extern const int g_x" << '\t' << " = " << g_extern_const_x << '\n' <<
		"static int g_x" << "\t\t" << " = " << g_static_x << '\n' <<
		"const int g_x" << "\t\t" << " = " << g_default_static_const_x << std::endl;

	return EXIT_SUCCESS;
}