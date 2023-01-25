#ifdef Различные задачи

* 'Указатели на функции:'
* 'Задание №1'
*  В этот раз мы попытаемся написать версию базового калькулятора с помощью
*   указателей на функции.
* 
*   a) Напишите короткую программу, которая просит пользователя ввести два целых
*       числа и выбрать математическую операцию: +, -, * или /. Убедитесь, что
*        пользователь ввел корректный символ математической операции (используйте
*        проверку).
* 
*   b) Напишите функции add(), subtract(), multiply() и divide(). Они должны принимать
*        два целочисленных параметра и возвращать целочисленное значение.
* 
*   c) Создайте typedef с именем arithmeticFcn для указателя на функцию, которая
*        принимает два целочисленных параметра и возвращает целочисленное значение.
* 
*   d) Напишите функцию с именем getArithmeticFcn(), которая принимает символ
*        выбранного математического оператора и возвращает соответствующую функцию в
*        качестве указателя на функцию.
* 
*   e) Добавьте в функцию main() вызов функции getArithmeticFcn().
* 
* 
* 'Задание №2'
* Теперь давайте изменим программу, которую мы написали в первом задании,
*   чтобы переместить логику из getArithmeticFcn в массив.
*  
*   a) Создайте структуру с именем arithmeticStruct, которая имеет два члена:
*       математический оператор типа char и указатель на функцию arithmeticFcn.
* 
*   b) Создайте статический глобальный массив arithmeticArray, используя
*       структуру arithmeticStruct, который будет инициализирован каждой из 4
*       математических операций.
* 
*   c) Измените getArithmeticFcn для выполнения цикла по массиву и возврата
*       соответствующего указателя на функцию.
* 
* Решение:
* #include <iostream>
* #include "function_ptr.h"
*
* int main() {
*	std::cout << "Enter num#1: ";
*	int a = getNumber();
*	std::cout << "Enter num#2: ";
*	int b = getNumber();
*	std::cout << "Choise operation (+, -, * or /): ";
*	char operation = getSymbol(isCalculateOperation);
*
*	arithmeticFcn getResult = getArithmeticFcn(operation);
*	std::cout << getResult(a, b);
* }
*
*
* 'Дружественные функции'
* 'Задание 1'
* Точка в геометрии - это позиция в пространстве.
* Мы можем определить точку в 3D-пространстве, как набор координат x, y и z.
* Например
* Point(0.0, 1.0, 2.0); будет точкой в координатном пространстве x = 0, y = 1.0, z = 2.0
* 
* Вектор в физике - это величина, которая имеет длину и направление.
* Мы можем определить вектор в 3D-пространстве через значения x, y и z.
* Например
* Vector(1.0, 0.0, 0.0); будет вектором, представляющее направление только вдоль оси x, длиной 1.0
* 
* Вектор может применятся к точке для перемещения точки на новую позицию.
* Это делается путем добавления направления вектора к позиции точки.
* Например
* Point(0.0, 1.0, 2.0) + Vector(0.0, 2.0, 0.0) даст точку (0.0, 3.0, 2.0)
* #include "vector3D.h"
* #include "point3D.h"
* 
* int main() {
* 	Point3D p(3.0, 4.0, 5.0);
* 	Vector3D v(3.0, 3.0, -2.0);
* 	p.print();
* 	p.moveByVector(v);
* 	p.print();
* }
*
*
* 'Список инициализации' std::initializer_list<int>
* 'Задание 1'
* Написать класс ArrayInt, чтобы следующий код:
* int main() {
*	ArrayInt array{ 7, 6, 5, 4, 3, 2, 1 };
*
*	for (int count{}; count < array.getLength(); ++count)
*		std::cout << array[count] << ' ';
*		
*	std::cout << '\n';
*
*	array = { 1, 4, 9, 12, 15, 17, 19, 21 };
*
*	for (int count{}; count < array.getLength(); ++count)
*		std::cout << array[count] << ' ';
* }
* отработал без ошибок.
* 
* _______________________________________
*
* class ArrayInt
* {
* private:
*	int m_length;
*	int *m_data;
*
* public:
* 	ArrayInt()
* 		: m_length(0), m_data(nullptr)
* 	{
* 	}
* 	~ArrayInt()
* 	{
* 		delete[] m_data;
* 		m_data = nullptr;
* 	}
* 	ArrayInt(int length)
* 		: m_length(length)
* 	{
* 		m_data = new (std::nothrow) int[length];
* 		assert(m_data != nullptr);
* 	}
* 	ArrayInt(const std::initializer_list<int> &list) 
* 		: ArrayInt(list.size())
* 	{
* 		int i{};
* 		for (auto &el : list)
* 		{
* 			m_data[i] = el;
* 			++i;
* 		}
* 	}
* 	ArrayInt& operator= (const std::initializer_list<int> &list) 
* 	{
* 		if (list.size() != static_cast<size_t>(m_length))
* 		{
* 			delete[] m_data;
* 			m_length = list.size();
* 			m_data = new int[m_length];
* 		}
* 
* 		int i{};
* 		for (auto &el : list)
* 		{
* 			m_data[i] = el;
* 			++i;
* 		}
* 
* 		return *this;
* 	}
* 	int &operator[] (int index) {
* 		assert(index >= 0 && index < m_length);
* 		return m_data[index];
* 	}
* 	int getLength() const {
* 		return m_length;
* 	}
* };



#endif // Различные задачи
