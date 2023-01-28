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

* '������� 2'
*	�������� ����� Average, ������� ����� ��������� ������� �������� ����
*		������������ ��� ����� �����. ����������� ��� �����: ������ ������ ���� ����
*		int32_t � �������������� ��� ���������� ����� ���� ������������ �����, ������
*		������ ���� ���� int8_t � �������������� ��� ���������� ����������
*		������������ �����. ����� ����� ������� ��������, ����� ��������� ����� ��
*		����������.
*	��������� ��� ������� main():
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
* 
* _______________________________________
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
* 
* 
* '������� 3'
* �������� ���� ����������� �����-������ ����� ����� IntArray (�� �����������
*	std::array ��� std::vector). ������������ ������ ���������� ������ ������� ���
*	�������� ������� ����� ������, � ��� ������ (����������-����) ������ ����������
*	�����������. ����������� ���������� assert ��� �������� ������������
*	��������, � ����� ���� ����������� ����������� � ���������� ���������
*	������������, ���� ��� ����������, ����� ��������� ���:
*	
*	IntArray fillArray() {
*		IntArray a(6);
*		a[0] = 6;
*		a[1] = 7;
*		a[2] = 3;
*		a[3] = 4;
*		a[4] = 5;
*		a[5] = 8;
*		return a;
*	}
*
*	int main() {
*		IntArray a = fillArray();
*		std::cout << a << '\n';
*			
*		IntArray b(1);
*		a = a;
*		b = a;
*		
*		std::cout << b << '\n';
*		
*		IntArray c(b);
*		std::cout << c << '\n';
*	
*		a[3] = 0;
*		b[4] = 0;
*		c[5] = 0;
*		std::cout << a << b << c << '\n';
*	}
* 
* _______________________________________
* 
*	class IntArray
*	{
*	private:
*		size_t m_length;
*		int* array;
*
*		void initialized() {
*			array = new (std::nothrow) int[m_length];
*			assert(array != nullptr);
*		}
*
*		void clear() {
*			delete[] array;
*			array = nullptr;
*		}
*
*		void copy(const IntArray &intArray) {
*			for (size_t index{}; index < m_length; ++index)
*				array[index] = intArray.array[index];
*		}
*		
*	public:
*		IntArray(size_t length)
*			: m_length(length)
*		{
*			initialized();
*		}
*		
*		~IntArray() 
*		{
*			clear();
*		}
*		
*		IntArray(const IntArray &intArray) 
*		{
*			m_length = intArray.m_length;
*			initialized();
*			copy(intArray);
*		}
*		IntArray &operator= (const IntArray &intArray) {
*			if (this == &intArray)
*				return *this;
*				
*			m_length = intArray.m_length;
*			clear();
*			initialized();
*			copy(intArray);
*		}
*		auto &operator[] (const int index) {
*			return array[index];
*		};
*		friend std::ostream &operator<< (std::ostream &out, IntArray &intArray) {
*			auto begin{ &intArray.array[0] };
*			auto end{ begin + intArray.m_length };
*			for (auto ptr = begin; ptr != end; ++ptr) {
*				out << *ptr << " ";
*			}
*			out << '\n';
*			return out;
*		}
*	};

#endif // �������� ���� �9

#ifdef �������� ���� �10

* '������� 1'
*	a) �������� ������ Apple � Banana, ������� ��������� ����� Fruit. � ������ Fruit ����
*		��� ����������-�����: name � color.
*	b) �������� ����� ����� GrannySmith, ������� ��������� ����� Apple.
*	��������� ���:
*	int main() {
*		Apple a("red");
*		Banana b;
*		GrannySmith c;
*
*		std::cout << a;
*		std::cout << b;
*		std::cout << c;
*	};
* 
* _______________________________________
* 
* class Fruit
* {
* private:
* 	std::string name;
* 	std::string color;
* 
* public:
* 	Fruit(std::string color, std::string name)
* 	{
* 		this->color = color;
* 		this->name = name;
* 	}
* 
* 	std::string getName() const { return name; }
* 	std::string getColor() const { return color; }
* 	friend std::ostream &operator<<(std::ostream &out, const Fruit &fruit);
* };
* 
* std::ostream &operator<<(std::ostream &out, const Fruit &fruit) {
* 	out << "My " << fruit.name << " is " << fruit.color << '\n';
* 	return out;
* }
* 
* class Apple : public Fruit
* {
* public:
* 	Apple(std::string color = "green", std::string name = "Apple")
* 		: Fruit(color, name)
* 	{
* 	}
* };
* 
* class Banana : public Fruit
* {
* public:
* 	Banana(std::string color = "yellow", std::string name = "Banana")
* 		: Fruit(color, name)
* 	{
* 	}
* };
* 
* class GrannySmith: public Apple
* {
* public:
* 	GrannySmith(std::string color = "green", std::string name = "Granny Smith apple")
* 		: Apple(color, name)
* 	{
* 	}
* };
* 
* 
* '������� 2'
* ��������� ���� ��� ��������
* 
* #include "PlayerController.h"
* 
* int main() {
*	PlayerController player;
*	Monster monster;
*	std::cout << std::boolalpha;
*	while (!player.hasWon() && !player.isDead())
*	{
*		player.playerTurn(monster);
*	}
*	std::cout << "\n\n\n" <<
*		"Gold: " << player.getGold() << '\n' <<
*		"Level: " << player.getLevel() << '\n' <<
*		"Thank you, " << player.getName() << '!' << std::endl;
* }

#endif // �������� ���� �10

#ifdef �������� ���� �12

* '������� 1'
* a) �������� ����������� ����� Shape. ���� ����� ������ ����� ��� ������:
*	������ ����������� ������� print() � ���������� ���� std::ostream;
*	���������� operator<<;
*	������ ����������� ����������.
* 
* b) �������� ��� ������: Triangle � Circle, ������� ��������� ����� Shape.
*	Triangle ������ ����� 3 ����� � �������� ����������-������.
*	Circle ������ ����� ���� ����������� ����� � ������������� ������ �
*	�������� ����������-������.
* 
* c) ��������� ��� �� ���������� ������� (������ Point, Shape, Circle � Triangle)
*	��������� ��������� ���������:
*	int main() {
*		std::vector<Shape*> v;
*		v.push_back(new Circle(Point(1, 2, 3), 7));
*		v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
*		v.push_back(new Circle(Point(4, 5, 6), 3));
*
*		// ����� ��������� ������� v �����
*
*		std::cout << "The largest radius is: " << getLargestRadius(v) << '\n';
*		 // ���������� ��� �������
*
*		// �������� ��������� ������� v �����
*	}
* 
*	_______________________________________
* 
*	#include "Circle.h"
*	#include "Triangle.h"
*	
*	int getLargestRadius(const std::vector<Shape *> &v) {
*		int largestRadius{};
*		for (auto const &el : v)
*		{
*			if (Circle *c = dynamic_cast<Circle *>(el))
*			{
*				if (c->getRadius() > largestRadius)
*					largestRadius = c->getRadius();
*			}
*		}
*	
*		return largestRadius;
*	}
*	
*	int main() {
*		std::vector<Shape*> v;
*		v.push_back(new Circle(Point(1, 2, 3), 7));
*		v.push_back(new Circle(Point(4, 5, 6), 3));
*		v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
*	
*		for (auto const &el : v)
*			std::cout << *el << '\n';
*	
*		std::cout << "The largest radius is: " << getLargestRadius(v) << '\n';
*	
*		for (auto const &el : v)
*			delete el;
*	}

#endif // �������� ���� �12

#ifdef �������� ���� �13
/*
* '������� 1'
* ���������� ����� Pair, ������� ��������� ������������ ������������ ������ ����
*	������ � ������������ �����
* 
* '������� 2'
* �������� ������ ������ StringValuePair, � ������� ������ �������� ������
*	�������� ���� string, � ������ ����� ���� ������ ����. ���� ������ ������ ������
*	����������� �������� ������������������ ����� Pair (� ������� ������ ��������
*	���� std::string, � ������ � ������ ��� �������).
* 
*	template <class T1, class T2>
*	class Pair
*	{
*	private:
*		T1 m_p1;
*		T2 m_p2;
* 
*	public:
*		Pair(const T1 &p1, const T2 &p2)
* 			: m_p1(p1), m_p2(p2)
* 		{
* 		}
* 
*	 	const T1& first() const { return m_p1; }
*		const T2& second() const { return m_p2; }
*	};
* 
*	template <class T1>
*	class StringValuePair: public Pair<std::string, T1>
*	{
*	public:
* 		StringValuePair(const std::string &key, const T1 &value)
* 			: Pair<std::string, T1>(key, value)
* 		{
* 		}
*	};
*/
#endif // �������� ���� �13

#ifdef �������� ���� �14
/*
* '������� 1'
* �������� ����� Fraction, ����������� �������� ��������� ��������� � �����������.
*	���� ������������ ������� � �������� ����������� 0, �� ������������ ����������
*	���� std::runtime_error (������� ��������� � ������������ ����� stdexcept). �
*	������� main() ��������� ������������ ������ ��� ����� �����. ���� �����,
*	������� ���� ������������, ����������, �� �������� ����������� ������ ������
*	Fraction. ���� �� ����� ������������, �� �� ������ ������������ ����������
*	���� std::exception � �������� ������������, ��� �� ���� ������������ ������.
* 
*	class Fraction
*	{
*	private:
* 		int numerator, denominator;
* 
*	public:
* 		Fraction(int numerator, int denominator)
* 		{
* 			try
* 			{
* 				if (numerator == 0) throw std::runtime_error("invalid numerator");
* 				if (denominator == 0) throw std::runtime_error("invalid denominator");
* 				this->numerator = numerator;
* 				this->denominator = denominator;
* 				std::cout << numerator << '/' << denominator << '\n';
* 			}
* 			catch (std::exception &e) {
* 				std::cerr << "Your fraction has an " << e.what() << '\n';
* 			}
* 		}
*	};
* 
*	int main() {
* 		Fraction(1, 2);
* 		Fraction(0, 2);
* 		Fraction(1, 0);
*	}
*/
#endif // �������� ���� �14





