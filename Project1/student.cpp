#include "student.h"

#include <iostream>
#include "constants.h"

// Выводит стартовое сообщение
void printStartMessage() {
	std::cout << "Enter number of students: ";
}

// Возвращает пользовательский ввод, с проверкой.
unsigned int getInput(bool pt_condition(unsigned int&), void pt_printErrorMsg()) {
	while (true)
	{
		unsigned int value;
		std::cin >> value;

		if (std::cin.fail() || pt_condition(value))
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			pt_printErrorMsg();
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return value;
		}
	}
}

unsigned int getInput(void pt_printErrorMsg()) {
	while (true)
	{
		unsigned int value;
		std::cin >> value;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			pt_printErrorMsg();
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return value;
		}
	}
}

std::string getInputString(void pt_printErrorMsg()) {
	while (true)
	{
		std::string value;
		std::cin >> value;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			pt_printErrorMsg();
		}
		else
		{
			std::cin.ignore(32767, '\n');
			return value;
		}
	}
}

void printErrorMessage() {
	std::cout << "\tOops, that input is invalid. Please try again.\n";
}

bool checkStudentGrades(unsigned int& value) {
	return value < students::grade::min || value > students::grade::max;
}

void fillingStudents(Student* student, unsigned int& numStudents) {
	for (unsigned int i{}; i < numStudents; ++i) {
		std::cout << "Enter name of students: ";
		student[i].name = getInputString(printErrorMessage);
		std::cout << "Enter grade of " << student[i].name << ": ";
		student[i].grade = getInput(checkStudentGrades, printErrorMessage);
	}
}

void deleteStudents(Student* student) {
	delete[] student;
	student = nullptr;
}

void printStudents(Student* student, unsigned int& numStudents) {
	std::cout << '\n';
	for (int i{}; i < numStudents; ++i)
	{
		std::cout <<
			'[' << i + 1 << ']' << '\n' <<
			"Student.name:\t" << student[i].name << '\n' <<
			"Student.grade:\t" << student[i].grade << '\n';
	}
}

void orderByName(Student* student, unsigned int& numStudents) {
	for (int i = 0; i < numStudents - 1; ++i)
	{
		int temp = i;
		for (int j = i + 1; j < numStudents; ++j)
		{
			if (student[j].name < student[temp].name)
				temp = j;
		}
		std::swap(student[i], student[temp]);
	}
}

void orderByGrade(Student* student, unsigned int& numStudents) {
	for (int i = 0; i < numStudents - 1; ++i)
	{
		int temp = i;
		for (int j = i + 1; j < numStudents; ++j)
		{
			if (student[j].grade < student[temp].grade)
				temp = j;
		}
		std::swap(student[i], student[temp]);
	}
}