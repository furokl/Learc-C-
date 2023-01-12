#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Student {
	std::string name{ "unknown" };
	unsigned int grade{}; // 0 100
};

void printStartMessage();
void printErrorMessage();

unsigned int getInput(bool pt_condition(unsigned int&), void pt_printErrorMsg());
unsigned int getInput(void pt_printErrorMsg());
std::string getInputString(void pt_printErrorMsg());

bool checkStudentGrades(unsigned int& value);
void fillingStudents(Student* student, unsigned int& numStudents);
void deleteStudents(Student* student);
void printStudents(Student* student, unsigned int& numStudents);
void orderByName(Student* student, unsigned int& numStudents);
void orderByGrade(Student* student, unsigned int& numStudents);

#endif // !STUDENT_H
