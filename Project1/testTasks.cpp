#ifdef Итоговый тест №1

* 'Задание 1'
* Напишите однофайловую программу(с именем main.cpp), которая запрашивает у
* пользователя два целых числа, складывает их, а затем выводит результат.В
* программе должно быть 3 функции:
*1. функция readNumber(), которая запрашивает у пользователя целое число, а
* затем возвращает его в main();
*2. функция writeAnswer(), которая выводит результат на экран.Функция должна
* быть без возвращаемого значения и иметь только один параметр;
*3. функция main(), которая соединяет всё и вся.
*
* 'Задание 2'
* Измените программу из задания №1 так, чтобы функции readNumber() и
* writeAnswer() находились в отдельном файле io.cpp.Используйте предварительные
* объявления для доступа к этим функциям с функции main().
*
* 'Задание 3'
* Измените программу из задания №2 так, чтобы она использовала заголовочный
* файл io.h для доступа к функциям(вместо использования предварительных
	* объявлений).Убедитесь, что ваш заголовочный файл использует header guards.
	*
	* смотреть "io.h", "io.cpp"
	*
	*#include "io.h"
	*
	*int main() {
	*int a = readNumber();
	*int b = readNumber();
	*writeAnswer(a + b);
	*
}

#endif // Итоговый тест №1

#ifdef Итоговый тест №2

* 'Задание 1'
* Напишите следующую программу.Сначала пользователю предлагается ввести 2
* числа типа с плавающей точкой(используйте тип double).Затем предлагается ввести
* один из следующих математических символов : +, -, * или / .Программа выполняет
* выбранную пользователем математическую операцию между двумя числами, а
* затем выводит результат на экран.Если пользователь ввел некорректный символ,
* то программа ничего не должна выводить. Например :
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
*'Задание 2'
* Напишите небольшую программу - симулятор падения мячика с башни.
* Сначала пользователю предлагается ввести высоту башни в метрах.
* Не забывайте о гравитации(9, 8м / с2) и о том, что у мячика нет начальной скорости
* (его держат в руках).Программа должна выводить расстояние от земли, на котором
* находится мячик после 0, 1, 2, 3, 4 и 5 секунд падения.Минимальная высота
* составляет 0 метров(ниже мячику падать нельзя).
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

#endif // Итоговый тест №2

#ifdef Итоговый тест №4

* 'Задание 1.'
* При разработке игры мы решили, что в ней должны быть монстры, потому что всем
* нравится сражаться с монстрами.Объявите структуру, которая представляет вашего
* монстра.Монстр может быть разным : ogre, goblin, skeleton, orc и troll.Если
* ваш компилятор поддерживает C++11, то используйте классы enum, если нет —
* обычные перечисления.
*
* Каждый монстр также должен иметь имя(используйте std::string) и количество
* здоровья, которое отображает, сколько урона он может получить, прежде чем
* умрет.Напишите функцию printMonster(), которая выведет все члены структуры.
* Объявите монстров типа goblin и orc, инициализируйте их, используя список
* инициализаторов, и передайте в функцию printMonster().
*
* Пример результата выполнения вашей программы:
* This Goblin is named Johnand has 170 health.
* This Orc is named James and has 35 health.
*
* смотреть "monster.h", "monster.cpp"
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

#endif // Итоговый тест №4

#ifdef Итоговый тест №5

* 'Задание 1'
* В итоговом тесте главы №2 мы написали программу имитации мячика, падающего с
*	башни. Так как тогда мы еще ничего не знали о циклах и не умели их использовать,
*	то время полета мячика составляло всего лишь 5 секунд.
*	Измените программу, приведенную ниже, таким образом, чтобы мячик падал
*	ровно то количество секунд, которое необходимо ему для достижения земли.
*
*	см. tower.cpp и tower.h
*	#include <iostream>
*	#include "tower.h"
*
*	int main() {
*		const float height = getHeight();
*		printResult(height);
*	}
*
* 'Задание 2'
* Напишите программу-игру типа Hi-Lo:
*	1. Ваша программа должна выбрать случайное целое число в диапазоне от 1 до 100.
*	2. Пользователю дается 7 попыток, чтобы угадать это число.
*	3. Если пользователь не угадал число, то программа должна подсказывать,
*		была ли его догадка слишком большой или слишком маленькой.
*	4. Если пользователь угадал число, то программа должна сообщить, что всё
*		верно — вы выиграли.
*	5. Если же у пользователя кончились попытки, и он не угадал число, то
*		программа должна сообщить ему, что он проиграл и показать правильный
*		результат.
*	6. В конце игры программа должна спросить у пользователя, не хочет ли он
*		сыграть еще раз. Если пользователь не введет ни y, ни n (а что-то другое), то
*		программа должна спросить его еще раз.
*
*	см. hi_lo.h, hi-lo.cpp, constants.h
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

#endif // Итоговый тест №5

#ifdef Итоговый тест №6

* 'Задание №1:' 
* Представьте, что вы пишете игру, в которой игрок может иметь 3 типа предметов:
*	зелья здоровья, факелы и стрелы. Создайте перечисление с этими типами
*	предметов и фиксированный массив для хранения количества каждого типа
*	предметов, которое имеет при себе игрок (используйте стандартные
*	фиксированные массивы, а не std::array). У вашего игрока должны быть при себе 3
*	зелья здоровья, 6 факелов и 12 стрел. Напишите функцию countTotalItems(), которая
*	возвращает общее количество предметов, которые есть у игрока. В функции main()
*	выведите результат работы функции countTotalItems().
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
* 'Задание №2:'
* Создайте структуру, содержащую имя и оценку учащегося (по шкале от 0 до 100).
*	Спросите у пользователя, сколько учеников он хочет ввести. Динамически выделите
*	массив для хранения всех студентов. Затем попросите пользователя ввести для
*	каждого студента его имя и оценку. Как только пользователь ввел все имена и
*	оценки, отсортируйте список оценок студентов по убыванию (сначала самый
*	высокий бал). Затем выведите все имена и оценки в отсортированном виде.
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
* 'Задание №3:'
* Напишите свою функцию, которая меняет местами значения двух целочисленных
*	переменных. Проверку осуществляйте в функции main().
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
* 'Задание 4:'
* Напишите функцию для вывода строки C-style символ за символом. Используйте
*	указатель для перехода и вывода каждого символа поочерёдно. Остановите вывод
*	при столкновении с нуль-терминатором.
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
* 'Задание 5:'
* Предположим, что мы хотим написать карточную игру.
*	a) В колоде карт находятся 52 уникальные карты: 13 достоинств (2, 3, 4, 5, 6, 7, 8, 9,
*		10, Валет, Дама, Король, Туз) и 4 масти (трефы, бубны, червы, пики). Создайте два
*		перечисления: первое для масти, второе для достоинств карт.
*	b) Каждая карта должна быть представлена структурой Card, в которой хранится
*		информация о достоинстве и масти карты (например, 4 бубны, король трефы).
*		Создайте эту структуру.
*	c) Создайте функцию printCard(), параметром которой будет константная ссылка
*		типа структуры Card, которая будет выводить значения достоинства и масти
*		определенной карты в виде 2-буквенного кода (например, валет пики будет
*		выводиться как VP).
*	d) Для представления целой колоды карт (52 карты) создайте массив
*		deck (используя std::array) и инициализируйте каждый элемент определенной
*		картой
*	е) Напишите функцию printDeck(), которая в качестве параметра принимает
*		константную ссылку на массив deck и выводит все значения (карты). Используйте
*		цикл foreach.
*	f) Напишите функцию swapCard(), которая принимает две карты и меняет местами
*		их значения.
*	g) Напишите функцию shuffleDeck() для перетасовки колоды карт. Для этого
*		используйте цикл for с итерацией по массиву. Перетасовка карт должна произойти
*		52 раза. В цикле for выберите случайное число от 1 до 52 и вызовите swapCard(),
*		параметрами которой будут текущая карта и карта, выбранная случайным образом.
*	h) Напишите функцию getCardValue(), которая возвращает значение карты
*		(например, 2 значит 2, 3 значит 3 и т.д., 10, валет, королева или король — это 10, туз
*		— это 11).
*
*	см. "blackjack.cpp" "blackjack.h"

#endif // Итоговый тест №6

#ifdef Итоговый тест №8 

* 'Задание 1:'
*	a) Напишите класс с именем Point. В классе Point должны быть две переменные-
*		члены типа double: m_a и m_b со значениями по умолчанию 0.0. Напишите
*		конструктор для этого класса и функцию вывода print().
*	b) Теперь добавим метод distanceTo(), который будет принимать второй объект
*		класса Point в качестве параметра и будет вычислять расстояние между двумя
*		объектами. Учитывая две точки (a1, b1) и (a2, b2), расстояние между ними можно
*		вычислить следующим образом: sqrt((a1 - a2) * (a1 - a2) + (b1 - b2)
*		(b1 - b2)). Функция sqrt находится в заголовочном файле cmath.
*	c) Измените функцию distanceTo() из метода класса в дружественную функцию,
*		которая будет принимать два объекта класса Point в качестве параметров.
*		Переименуйте эту функцию на distanceFrom().
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
* 'Задание 2'
* Напишите деструктор для следующего класса:
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
*		delete[] m_data;	// вот я
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
* 'Задание 3'
*	a) Сначала создайте перечисление MonsterType со следующими типами монстров:
*		Dragon, Goblin, Ogre, Orc, Skeleton, Troll, Vampire и Zombie + добавьте
*		MAX_MONSTER_TYPES, чтобы иметь возможность подсчитать общее количество
*		всех перечислителей.
*	b) Теперь создайте класс Monster со следующими тремя атрибутами
*		(переменными-членами): тип (MonsterType), имя (std::string) и количество здоровья
*		(int).
*	c) Перечисление MonsterType является специфичным для Monster, поэтому
*		переместите его внутрь класса под спецификатор доступа public.
*	d) Создайте конструктор, который позволит инициализировать все переменные-
*		члены класса.
*	e) Теперь нам нужно вывести информацию про нашего монстра. Для этого нужно
*		конвертировать MonsterType в std::string. Добавьте функцию getTypeString(),
*		которая будет выполнять конвертацию, и функцию вывода print().
*	f) Теперь мы уже можем создать сам генератор монстров. Для этого создайте
*		статический класс MonsterGenerator и статический метод с именем
*		generateMonster(), который будет возвращать случайного монстра. Пока что
*		возвратом метода пускай будет анонимный объект: (Monster::Orc, "Jack", 90).
*	g) Теперь MonsterGenerator должен генерировать некоторые случайные атрибуты.
*		Для этого нам понадобится генератор случайного числа. Воспользуйтесь следующей
*		функцией:
*	h) Теперь измените функцию generateMonster() для генерации случайного
*		MonsterType (между 0 и Monster::MAX_MONSTER_TYPES-1) и случайного
*		количества здоровья (от 1 до 100). Это должно быть просто. После того, как вы это
*		сделаете, определите один статический фиксированный массив s_names размером
*		6 элементов внутри функции generateMonster() и инициализируйте его 6-ю любыми
*		именами на ваш выбор. Добавьте возможность выбора случайного имени из этого
*		массива.
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

#ifdef Итоговый тест №9

* 'Задание 2'
*	Напишите класс Average, который будет вычислять среднее значение всех
*		передаваемых ему целых чисел. Используйте два члена: первый должен быть типа
*		int32_t и использоваться для вычисления суммы всех передаваемых чисел, второй
*		должен быть типа int8_t и использоваться для вычисления количества
*		передаваемых чисел. Чтобы найти среднее значение, нужно разделить сумму на
*		количество.
*	Следующий код функции main():
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
*		// Не требуется
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
* 'Задание 3'
* Напишите свой собственный класс-массив целых чисел IntArray (не используйте
*	std::array или std::vector). Пользователи должны передавать размер массива при
*	создании объекта этого класса, а сам массив (переменная-член) должен выделяться
*	динамически. Используйте стейтменты assert для проверки передаваемых
*	значений, а также свой конструктор копирования и перегрузку оператора
*	присваивания, если это необходимо, чтобы следующий код:
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

#endif // Итоговый тест №9

#ifdef Итоговый тест №10

* 'Задание 1'
*	a) Создайте классы Apple и Banana, которые наследуют класс Fruit. У класса Fruit есть
*		две переменные-члены: name и color.
*	b) Добавьте новый класс GrannySmith, который наследует класс Apple.
*	Следующий код:
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
* 'Задание 2'
* Текстовая игра про монстров
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

#endif // Итоговый тест №10

#ifdef Итоговый тест №12

* 'Задание 1'
* a) Создайте абстрактный класс Shape. Этот класс должен иметь три метода:
*	чистую виртуальную функцию print() с параметром типа std::ostream;
*	перегрузку operator<<;
*	пустой виртуальный деструктор.
* 
* b) Создайте два класса: Triangle и Circle, которые наследуют класс Shape.
*	Triangle должен иметь 3 точки в качестве переменных-членов.
*	Circle должен иметь одну центральную точку и целочисленный радиус в
*	качестве переменных-членов.
* 
* c) Используя код из предыдущих заданий (классы Point, Shape, Circle и Triangle)
*	завершите следующую программу:
*	int main() {
*		std::vector<Shape*> v;
*		v.push_back(new Circle(Point(1, 2, 3), 7));
*		v.push_back(new Triangle(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9)));
*		v.push_back(new Circle(Point(4, 5, 6), 3));
*
*		// Вывод элементов вектора v здесь
*
*		std::cout << "The largest radius is: " << getLargestRadius(v) << '\n';
*		 // реализуйте эту функцию
*
*		// Удаление элементов вектора v здесь
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

#endif // Итоговый тест №12

#ifdef Итоговый тест №13
/*
* 'Задание 1'
* Реализуйте класс Pair, который позволяет пользователю использовать разные типы
*	данных в передаваемых парах
* 
* 'Задание 2'
* Напишите шаблон класса StringValuePair, в котором первое значение всегда
*	является типа string, а второе может быть любого типа. Этот шаблон класса должен
*	наследовать частично специализированный класс Pair (в котором первый параметр
*	типа std::string, а второй — «любой тип данных»).
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
#endif // Итоговый тест №13




