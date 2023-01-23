#ifdef �������� ���� �1

* '������� 1'
* �������� ������������ ���������(� ������ main.cpp), ������� ����������� �
* ������������ ��� ����� �����, ���������� ��, � ����� ������� ���������.�
* ��������� ������ ���� 3 �������:
*1. ������� readNumber(), ������� ����������� � ������������ ����� �����, �
* ����� ���������� ��� � main();
*2. ������� writeAnswer(), ������� ������� ��������� �� �����.������� ������
* ���� ��� ������������� �������� � ����� ������ ���� ��������;
*3. ������� main(), ������� ��������� �� � ���.
*
* '������� 2'
* �������� ��������� �� ������� �1 ���, ����� ������� readNumber() �
* writeAnswer() ���������� � ��������� ����� io.cpp.����������� ���������������
* ���������� ��� ������� � ���� �������� � ������� main().
*
* '������� 3'
* �������� ��������� �� ������� �2 ���, ����� ��� ������������ ������������
* ���� io.h ��� ������� � ��������(������ ������������� ���������������
	* ����������).���������, ��� ��� ������������ ���� ���������� header guards.
	*
	* �������� "io.h", "io.cpp"
	*
	*#include "io.h"
	*
	*int main() {
	*int a = readNumber();
	*int b = readNumber();
	*writeAnswer(a + b);
	*
}

#endif // �������� ���� �1

#ifdef �������� ���� �2

* '������� 1'
* �������� ��������� ���������.������� ������������ ������������ ������ 2
* ����� ���� � ��������� ������(����������� ��� double).����� ������������ ������
* ���� �� ��������� �������������� �������� : +, -, * ��� / .��������� ���������
* ��������� ������������� �������������� �������� ����� ����� �������, �
* ����� ������� ��������� �� �����.���� ������������ ���� ������������ ������,
* �� ��������� ������ �� ������ ��������. �������� :
* Enter a double value : 7
* Enter a double value : 5
* Enter one of the following : +, -, *, or / : *
*	7 * 5 = 35

* #include <iostream>
*
* double getDouble() {
*	double value;
*	std::cout << "Enter a double value: ";
*	std::cin >> value;
*
*	return value;
* }
*
* char getOperator() {
*	char value;
*	std::cout << "Enter one of the following: +, -, *, /" << '\t';
*	std::cin >> value;
*
*	return value;
* }
*
* void printResult(double a, double b, char op) {
*	if (op == '+')
*		std::cout << a << ' ' << op << ' ' << b << " = " << a + b << std::endl;
*	else if (op == '-')
*		std::cout << a << ' ' << op << ' ' << b << " = " << a - b << std::endl;
*	else if (op == '*')
*		std::cout << a << ' ' << op << ' ' << b << " = " << a * b << std::endl;
*	else if (op == '/')
*		std::cout << a << ' ' << op << ' ' << b << " = " << a / b << std::endl;
* }
*
* int main() {
*	double a = getDouble();
*	double b = getDouble();
*	char op = getOperator();
*	printResult(a, b, op);
* }
*
*
*'������� 2'
* �������� ��������� ��������� - ��������� ������� ������ � �����.
* ������� ������������ ������������ ������ ������ ����� � ������.
* �� ��������� � ����������(9, 8� / �2) � � ���, ��� � ������ ��� ��������� ��������
* (��� ������ � �����).��������� ������ �������� ���������� �� �����, �� �������
* ��������� ����� ����� 0, 1, 2, 3, 4 � 5 ������ �������.����������� ������
* ���������� 0 ������(���� ������ ������ ������).
*
* #include <iostream>
*
* float getHeight() {
*	float value;
*	std::cout << "Enter a height: ";
*	std::cin >> value;
*
*	return value;
* }
*
* namespace constants {
*	const float g{ 9.8f };
* }
*
* void printResult(const float h, const int t) {
*	float result = h - constants::g * t * t / 2;
*	if (result < 0) result = 0;
*	std::cout << "At " << t << " seconds, the ball is at height: " << result << " meters" << std::endl;
* }
*
* int main() {
*	const float height = getHeight();
*	printResult(height, 0);
*	printResult(height, 1);
*	printResult(height, 2);
*	printResult(height, 3);
*	printResult(height, 4);
*	printResult(height, 5);
* }

#endif // �������� ���� �2

#ifdef �������� ���� �4

* '������� 1.'
* ��� ���������� ���� �� ������, ��� � ��� ������ ���� �������, ������ ��� ����
* �������� ��������� � ���������.�������� ���������, ������� ������������ ������
* �������.������ ����� ���� ������ : ogre, goblin, skeleton, orc � troll.����
* ��� ���������� ������������ C++11, �� ����������� ������ enum, ���� ��� �
* ������� ������������.
*
* ������ ������ ����� ������ ����� ���(����������� std::string) � ����������
* ��������, ������� ����������, ������� ����� �� ����� ��������, ������ ���
* �����.�������� ������� printMonster(), ������� ������� ��� ����� ���������.
* �������� �������� ���� goblin � orc, ��������������� ��, ��������� ������
* ���������������, � ��������� � ������� printMonster().
*
* ������ ���������� ���������� ����� ���������:
* This Goblin is named Johnand has 170 health.
* This Orc is named James and has 35 health.
*
* �������� "monster.h", "monster.cpp"
*
* #include "monster.h"
*
* int main() {
* Monster monster_A{ "John", 170, 5, MonsterType::GOBLIN };
* Monster monster_B{ "James", 35, 25, MonsterType::ORC };
*
* printMonster(monster_A);
* printMonster(monster_B);
*
}

#endif // �������� ���� �4

#ifdef �������� ���� �5

* '������� 1'
* � �������� ����� ����� �2 �� �������� ��������� �������� ������, ��������� �
*	�����. ��� ��� ����� �� ��� ������ �� ����� � ������ � �� ����� �� ������������,
*	�� ����� ������ ������ ���������� ����� ���� 5 ������.
*	�������� ���������, ����������� ����, ����� �������, ����� ����� �����
*	����� �� ���������� ������, ������� ���������� ��� ��� ���������� �����.
*
*	��. tower.cpp � tower.h
*	#include <iostream>
*	#include "tower.h"
*
*	int main() {
*		const float height = getHeight();
*		printResult(height);
*	}
*
* '������� 2'
* �������� ���������-���� ���� Hi-Lo:
*	1. ���� ��������� ������ ������� ��������� ����� ����� � ��������� �� 1 �� 100.
*	2. ������������ ������ 7 �������, ����� ������� ��� �����.
*	3. ���� ������������ �� ������ �����, �� ��������� ������ ������������,
*		���� �� ��� ������� ������� ������� ��� ������� ���������.
*	4. ���� ������������ ������ �����, �� ��������� ������ ��������, ��� ��
*		����� � �� ��������.
*	5. ���� �� � ������������ ��������� �������, � �� �� ������ �����, ��
*		��������� ������ �������� ���, ��� �� �������� � �������� ����������
*		���������.
*	6. � ����� ���� ��������� ������ �������� � ������������, �� ����� �� ��
*		������� ��� ���. ���� ������������ �� ������ �� y, �� n (� ���-�� ������), ��
*		��������� ������ �������� ��� ��� ���.
*
*	��. hi_lo.h, hi-lo.cpp, constants.h
*	#include "hi_lo.h"
*	#include <cstdlib>
*
*	int main() {
*		srand(0);
*		printStartGameMessage();
*		do
*		{
*			play();
*		} while (restartGame());
*		printEndGameMessage();
*	}

#endif // �������� ���� �5

#ifdef �������� ���� �6

* '������� �1:' 
* �����������, ��� �� ������ ����, � ������� ����� ����� ����� 3 ���� ���������:
*	����� ��������, ������ � ������. �������� ������������ � ����� ������
*	��������� � ������������� ������ ��� �������� ���������� ������� ����
*	���������, ������� ����� ��� ���� ����� (����������� �����������
*	������������� �������, � �� std::array). � ������ ������ ������ ���� ��� ���� 3
*	����� ��������, 6 ������� � 12 �����. �������� ������� countTotalItems(), �������
*	���������� ����� ���������� ���������, ������� ���� � ������. � ������� main()
*	�������� ��������� ������ ������� countTotalItems().
* 
* namespace ItemTypes
* {
* 	enum ItemTypes {
*		HEALTH_POTION,
*		TORCH,
*		ARROW,
*		MAX_ITEM_TYPES
*	};
* }
* 
* int countTotalItems(int *items) {
*	int totalItems{};
*	for (size_t i{}; i < ItemTypes::MAX_ITEM_TYPES; ++i)
*		totalItems += items[i];
*
*	return totalItems;
* }
*
* int main() {
*	int items[ItemTypes::MAX_ITEM_TYPES]{ 3, 6, 12 };
*	std::cout << "The player has " << countTotalItems(items) << " items in total.\n";
* }
* 
* 
* '������� �2:'
* �������� ���������, ���������� ��� � ������ ��������� (�� ����� �� 0 �� 100).
*	�������� � ������������, ������� �������� �� ����� ������. ����������� ��������
*	������ ��� �������� ���� ���������. ����� ��������� ������������ ������ ���
*	������� �������� ��� ��� � ������. ��� ������ ������������ ���� ��� ����� �
*	������, ������������ ������ ������ ��������� �� �������� (������� �����
*	������� ���). ����� �������� ��� ����� � ������ � ��������������� ����.
* 
* #include "student.h"
* int main() {
*	printStartMessage();
*	unsigned int numStudents = getInput(printErrorMessage);
*	Student* student = new (std::nothrow) Student [numStudents];
*	if (!student) {
*		std::cout << "Memory for Student has not been allocated" << std::endl;
*		return EXIT_FAILURE;
*	}
*	fillingStudents(student, numStudents);
*	orderByName(student, numStudents);
*	printStudents(student, numStudents);
*	orderByGrade(student, numStudents);
*	printStudents(student, numStudents);
*
*	deleteStudents(student);
* }
* 
* 
* '������� �3:'
* �������� ���� �������, ������� ������ ������� �������� ���� �������������
*	����������. �������� ������������� � ������� main().
* 
* namespace fu {
*	void swap(int &value1, int &value2) {
*		int temp = value1;
*		value1 = value2;
*		value2 = temp;
*	}
* }
*
* void printResult(int &value1, int &value2) {
*	std::cout <<
*		"value1 = " << value1 << '\n' <<
*		"value2 = " << value2 << '\n';
* }
*
* int main() {
*	int value1 = 5, value2 = 10;
*	printResult(value1, value2);
*	fu::swap(value1, value2);
*	std::cout << "*swap*" << std::endl;
*	printResult(value1, value2);
* }
*
* 
* '������� 4:'
* �������� ������� ��� ������ ������ C-style ������ �� ��������. �����������
*	��������� ��� �������� � ������ ������� ������� ���������. ���������� �����
*	��� ������������ � ����-������������.
* 
* void printCString(const char *symbol) {
*	while (*symbol != '\0')
*	{
*		std::cout << *symbol;
*		++symbol;
*	}
* }
*
* int main() {
*	printCString("Hello, world!");
* }
* 
* 
* '������� 5:'
* �����������, ��� �� ����� �������� ��������� ����.
*	a) � ������ ���� ��������� 52 ���������� �����: 13 ���������� (2, 3, 4, 5, 6, 7, 8, 9,
*		10, �����, ����, ������, ���) � 4 ����� (�����, �����, �����, ����). �������� ���
*		������������: ������ ��� �����, ������ ��� ���������� ����.
*	b) ������ ����� ������ ���� ������������ ���������� Card, � ������� ��������
*		���������� � ����������� � ����� ����� (��������, 4 �����, ������ �����).
*		�������� ��� ���������.
*	c) �������� ������� printCard(), ���������� ������� ����� ����������� ������
*		���� ��������� Card, ������� ����� �������� �������� ����������� � �����
*		������������ ����� � ���� 2-���������� ���� (��������, ����� ���� �����
*		���������� ��� VP).
*	d) ��� ������������� ����� ������ ���� (52 �����) �������� ������
*		deck (��������� std::array) � ��������������� ������ ������� ������������
*		������
*	�) �������� ������� printDeck(), ������� � �������� ��������� ���������
*		����������� ������ �� ������ deck � ������� ��� �������� (�����). �����������
*		���� foreach.
*	f) �������� ������� swapCard(), ������� ��������� ��� ����� � ������ �������
*		�� ��������.
*	g) �������� ������� shuffleDeck() ��� ����������� ������ ����. ��� �����
*		����������� ���� for � ��������� �� �������. ����������� ���� ������ ���������
*		52 ����. � ����� for �������� ��������� ����� �� 1 �� 52 � �������� swapCard(),
*		����������� ������� ����� ������� ����� � �����, ��������� ��������� �������.
*	h) �������� ������� getCardValue(), ������� ���������� �������� �����
*		(��������, 2 ������ 2, 3 ������ 3 � �.�., 10, �����, �������� ��� ������ � ��� 10, ���
*		� ��� 11).
*
*	��. "blackjack.cpp" "blackjack.h"

#endif // �������� ���� �6

#ifdef �������� ���� �8 

* '������� 1:'
*	a) �������� ����� � ������ Point. � ������ Point ������ ���� ��� ����������-
*		����� ���� double: m_a � m_b �� ���������� �� ��������� 0.0. ��������
*		����������� ��� ����� ������ � ������� ������ print().
*	b) ������ ������� ����� distanceTo(), ������� ����� ��������� ������ ������
*		������ Point � �������� ��������� � ����� ��������� ���������� ����� �����
*		���������. �������� ��� ����� (a1, b1) � (a2, b2), ���������� ����� ���� �����
*		��������� ��������� �������: sqrt((a1 - a2) * (a1 - a2) + (b1 - b2)
*		(b1 - b2)). ������� sqrt ��������� � ������������ ����� cmath.
*	c) �������� ������� distanceTo() �� ������ ������ � ������������� �������,
*		������� ����� ��������� ��� ������� ������ Point � �������� ����������.
*		������������ ��� ������� �� distanceFrom().
* 
* class Point
* {
*	double m_a, m_b;
*
* public:
*	Point(double a = 0, double b = 0) :
*		m_a(a), m_b(b)
*	{
*	}
*	Point &print() {
*		std::cout <<
*			"a = " << m_a << '\t' <<
*			"b = " << m_b << '\n';
*		return *this;
*	}
*	double distanceTo(const Point &p) {
*		return sqrt(
*			(m_a - p.m_a) * (m_a - p.m_a) +
*			(m_b - p.m_b) * (m_b - p.m_b));
*	}
*	friend double const distanceFrom(const Point &p1, const Point &p2);
* };
*
* double const distanceFrom(const Point &p1, const Point &p2) {
*	return sqrt(
*		(p1.m_a - p2.m_a) * (p1.m_a - p2.m_a) +
*		(p1.m_b - p2.m_b) * (p1.m_b - p2.m_b));
* }
*
* int main() {
*	Point first;
*	Point second(2.0, 5.0);
*	first.print();
*	second.print().print();
*	std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';
*	std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';
* }
* 
* 
* '������� 2'
* �������� ���������� ��� ���������� ������:
* class Welcome
* {
*	char *m_data;
*
* public:
*	Welcome()
*	{
*		m_data = new char[14];
*		const char *init = "Hello World!";
*		for (int i{}; i < 14; ++i)
*			m_data[i] = init[i];
*	}
*
*	~Welcome()
*	{
*		delete[] m_data;	// ��� �
*	}
*
*	const Welcome &print() const {
*		std::cout << m_data;
*		return *this;
*	}
* };
*
* int main() {
*	Welcome hello;
*	hello.print();
* }
* 
* 
* '������� 3'
*	a) ������� �������� ������������ MonsterType �� ���������� ������ ��������:
*		Dragon, Goblin, Ogre, Orc, Skeleton, Troll, Vampire � Zombie + ��������
*		MAX_MONSTER_TYPES, ����� ����� ����������� ���������� ����� ����������
*		���� ��������������.
*	b) ������ �������� ����� Monster �� ���������� ����� ����������
*		(�����������-�������): ��� (MonsterType), ��� (std::string) � ���������� ��������
*		(int).
*	c) ������������ MonsterType �������� ����������� ��� Monster, �������
*		����������� ��� ������ ������ ��� ������������ ������� public.
*	d) �������� �����������, ������� �������� ���������������� ��� ����������-
*		����� ������.
*	e) ������ ��� ����� ������� ���������� ��� ������ �������. ��� ����� �����
*		�������������� MonsterType � std::string. �������� ������� getTypeString(),
*		������� ����� ��������� �����������, � ������� ������ print().
*	f) ������ �� ��� ����� ������� ��� ��������� ��������. ��� ����� ��������
*		����������� ����� MonsterGenerator � ����������� ����� � ������
*		generateMonster(), ������� ����� ���������� ���������� �������. ���� ���
*		��������� ������ ������ ����� ��������� ������: (Monster::Orc, "Jack", 90).
*	g) ������ MonsterGenerator ������ ������������ ��������� ��������� ��������.
*		��� ����� ��� ����������� ��������� ���������� �����. �������������� ���������
*		��������:
*	h) ������ �������� ������� generateMonster() ��� ��������� ����������
*		MonsterType (����� 0 � Monster::MAX_MONSTER_TYPES-1) � ����������
*		���������� �������� (�� 1 �� 100). ��� ������ ���� ������. ����� ����, ��� �� ���
*		��������, ���������� ���� ����������� ������������� ������ s_names ��������
*		6 ��������� ������ ������� generateMonster() � ��������������� ��� 6-� ������
*		������� �� ��� �����. �������� ����������� ������ ���������� ����� �� �����
*		�������.
* 
*	#include <iostream>
*
*	class Monster
*	{
*	public: 
*		const enum MonsterType 
*		{
*			Dragon,
*			Goblin,
*			Ogre,
*			Orc,
*			Skeleton,
*			Troll,
*			Vampire,
*			Zombie,
*			MAX_MONSTER_TYPE
*		};
*	
*	private:
*		const MonsterType m_type;
*		const std::string m_name;
*		int m_health;
*
*	public:
*		Monster(const MonsterType type, const std::string name, int health)
*			: m_type(type), m_name(name), m_health(health)
*		{
*		}
*
*		std::string getTypeString() const {
*			switch (m_type)
*			{
*			case Dragon:	return "Dragon";
*			case Goblin:	return "Goblin";
*			case Ogre:		return "Ogre";
*			case Orc:		return "Orc";
*			case Skeleton:	return "Skeleton";
*			case Troll:		return "Troll";
*			case Vampire:	return "Vampire";
*			case Zombie:	return "Zombie";
*			}
*		}
*
*		const Monster& print() const {
*			std::cout <<
*				m_name << " is the " <<
*				getTypeString() << " has " <<
*				m_health << " health points." << '\n';
*			return *this;
*		}
*	};
*
*	class MonsterGenerator
*	{
*	private:
*		static const std::string s_names[6];
*
*	public:
*		static int getRandomNumber(int min, int max) {
*			return rand() % max + min;
*		}
*		static Monster generateMonster() {
*			return Monster(
*				static_cast<Monster::MonsterType>(getRandomNumber(0, Monster::MAX_MONSTER_TYPE)),
*				s_names[getRandomNumber(0, 6)],
*				getRandomNumber(1, 100)
*			);
*		}
*	};
*
*	const std::string MonsterGenerator::s_names[6] = { "Furokl", "Kyahta", "Nasty", "Umka", "God", "Pigmey" };
*
*	int main() {
*		srand(0);
*		Monster *m = new Monster[1]{ MonsterGenerator::generateMonster() };
*		for (int i{}; i < 100; ++i) {
*			Monster m = MonsterGenerator::generateMonster();
*			m.print();
*		}
*		return 0;
*	}

#endif // DEBUG

#ifdef �������� ���� �9
/*
* '������� 1'
* �������� ����� Average, ������� ����� ��������� ������� �������� ����
	������������ ��� ����� �����. ����������� ��� �����: ������ ������ ���� ����
	int32_t � �������������� ��� ���������� ����� ���� ������������ �����, ������
	������ ���� ���� int8_t � �������������� ��� ���������� ����������
	������������ �����. ����� ����� ������� ��������, ����� ��������� ����� ��
	����������.
* ��������� ��� ������� main():
*	int main() {
*		Average avg;
* 		avg += 5;
*		std::cout << avg << '\n';
*
*		avg += 9;
*		std::cout << avg << '\n';
*
*		avg += 19;
*		std::cout << avg << '\n';
*
*		avg += -9;
*		std::cout << avg << '\n';
*
*		(avg += 7) += 11;
*		std::cout << avg << '\n';
*
*		Average copy = avg;
*		std::cout << copy << '\n';
*	}
* ������ �������� ��������� ���������:
*	5
*	7
*	11
*	6
*	7
*	7
* 
* 
*	class Average 
*	{
*	private:
*		int32_t m_sum;
*		int8_t m_count;
*
*	public:
*		Average()
*			: m_sum{}, m_count{}
*		{
*			std::cout << "\t*Init*\n";
*		}
*
*		// �� ���������
*		Average(const Average &avg)
*			: m_sum(avg.m_sum), m_count(avg.m_count)
*		{
*			std::cout << "\t*Copy*\n";
*		}
*
*		Average& operator+=(int value);
*		friend std::ostream &operator<< (std::ostream &out, Average &avg);
*	};
* 
*	Average& Average::operator+= (int value) {
*		m_sum += value;
*		++m_count;
*		return *this;
*	}
*
*	std::ostream &operator<< (std::ostream &out, Average &avg) {
*		out << (double)avg.m_sum / avg.m_count;
*		return out;
*	}
*/
#endif // �������� ���� �9


