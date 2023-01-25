#ifdef ��������� ������

* '��������� �� �������:'
* '������� �1'
*  � ���� ��� �� ���������� �������� ������ �������� ������������ � �������
*   ���������� �� �������.
* 
*   a) �������� �������� ���������, ������� ������ ������������ ������ ��� �����
*       ����� � ������� �������������� ��������: +, -, * ��� /. ���������, ���
*        ������������ ���� ���������� ������ �������������� �������� (�����������
*        ��������).
* 
*   b) �������� ������� add(), subtract(), multiply() � divide(). ��� ������ ���������
*        ��� ������������� ��������� � ���������� ������������� ��������.
* 
*   c) �������� typedef � ������ arithmeticFcn ��� ��������� �� �������, �������
*        ��������� ��� ������������� ��������� � ���������� ������������� ��������.
* 
*   d) �������� ������� � ������ getArithmeticFcn(), ������� ��������� ������
*        ���������� ��������������� ��������� � ���������� ��������������� ������� �
*        �������� ��������� �� �������.
* 
*   e) �������� � ������� main() ����� ������� getArithmeticFcn().
* 
* 
* '������� �2'
* ������ ������� ������� ���������, ������� �� �������� � ������ �������,
*   ����� ����������� ������ �� getArithmeticFcn � ������.
*  
*   a) �������� ��������� � ������ arithmeticStruct, ������� ����� ��� �����:
*       �������������� �������� ���� char � ��������� �� ������� arithmeticFcn.
* 
*   b) �������� ����������� ���������� ������ arithmeticArray, ���������
*       ��������� arithmeticStruct, ������� ����� ��������������� ������ �� 4
*       �������������� ��������.
* 
*   c) �������� getArithmeticFcn ��� ���������� ����� �� ������� � ��������
*       ���������������� ��������� �� �������.
* 
* �������:
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
* '������������� �������'
* '������� 1'
* ����� � ��������� - ��� ������� � ������������.
* �� ����� ���������� ����� � 3D-������������, ��� ����� ��������� x, y � z.
* ��������
* Point(0.0, 1.0, 2.0); ����� ������ � ������������ ������������ x = 0, y = 1.0, z = 2.0
* 
* ������ � ������ - ��� ��������, ������� ����� ����� � �����������.
* �� ����� ���������� ������ � 3D-������������ ����� �������� x, y � z.
* ��������
* Vector(1.0, 0.0, 0.0); ����� ��������, �������������� ����������� ������ ����� ��� x, ������ 1.0
* 
* ������ ����� ���������� � ����� ��� ����������� ����� �� ����� �������.
* ��� �������� ����� ���������� ����������� ������� � ������� �����.
* ��������
* Point(0.0, 1.0, 2.0) + Vector(0.0, 2.0, 0.0) ���� ����� (0.0, 3.0, 2.0)
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
* '������ �������������' std::initializer_list<int>
* '������� 1'
* �������� ����� ArrayInt, ����� ��������� ���:
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
* ��������� ��� ������.
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



#endif // ��������� ������
