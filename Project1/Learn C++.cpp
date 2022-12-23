/*
* Created by Logunov on 22/12/2022
* @comment: ����������� � ���������������� ����� "Ravesli"
* ����. �������
*	������		-	@.'
*	������		-	#.'
*	�������		-	!.'
*/

#ifdef �������� � ����������������

* @.'���������' -��� '����� ����������', ������� ��������� ����������, ��� ��� ����� ������.
*
* @.'������' - ���������� �����, ����������� ��� ����������.
*
* @.'�������� ���' - ������������ ����� ����������, ������� ���������� �������� ���������.
*	1. ������ ������� ������� �� ������������ ������������������ 0 � 1 (���� / �������� ���)
*	2. ������ ����� ��� ����������� ����������� � ���������� ��� ���������� ������������� ������� (��������, �������� ��� �����)
*	������: 10110000 01100001
*
* @.'���� ����������' - ������ ��, � ������� ������ ������� ���������������� �������� ������.
*	1. ������������: ������������������
*	2. ����������: ���������������� ������������ � ����������� ����������.
*	������: mov al, 061h
*
* @.'��������������� ��' - ��������� ������ � ��������� ���������, �� ��������� � ������������� ���� � ������� ������������� �����������.
*	���������, ���������� �� ��� ����� ������ ���� ���������� � �������� ��� ����� �����������.
*	���� ��� �������� ��� �������:
*		1. ����������
*		2. �������������
*
* @.'����������' - ���������, ������� ������ ��� � '�������' ���������� '����������� ���������', ������� ��������� �������� ��������.
*	1. ������������: ��� ��������� ������� ��������� ���������� �� �����������.
*	������: 
*		'��� ��				->	����������		->	����������� ����'
*		'����������� ����	->	���������		->	��������� ���������'
*		(C, C++, Pascal)
*
* @.'�������������' - ���������, ������� '�������� ��������� ���', ��� ��� ���������� ��������� � ����������� ����.
*	1. ������������: ��������
*	2. ����������: ������� ������������� ����������� �������� ��� ������ ������� ���������
*	������: 
*		'��� ��				->	�������������	->	���������	->	��������� ���������'
*		(Perl, JavaScript)
*	(*Java ����� ��� ���������������, ��� � ������������������)

#endif // �������� � ����������������

#ifdef �������� � �� � � �++

* @.'���� � "��"'
* ���������� � 1972 �. �������� �����, ��� ���� ��� ��.
*	����: ��������������� ����, ������� ������������ �� ����������� ������ � ������, � ������������ ������� �����������
*	���������:
*		ANSI 	C89
*		ISO		C90
*		ANSI	C99
*
* @.'���� �++'
* ���������� � 1979 �. ������� ������������ � �������� ���������� � ��.
*	�����������: �������� ���
*	���������:
*		ISO 1998
*		C++03
*		C++11 (* ������ 3 ����)
*		C++14
*		C++17
*		C++20
*
* @.'���������'
* ����� ���������� ���������� "�������� ������������"
*	���������� �� ����� ������ ������� ���-�� �����, ��� ����� �����,
*		�� ����� �� ����� ������ ������� ���-�� �����, ��� ����� �������� � ���� ���������.

#endif // �������� � ����� ���������������� � � �++

#ifdef �������� � ���������� ��

* @.'����� ���������� ��'
*
*	1.'���������� ��������'
*		��� ��� "���?"
*		���������� ������, ��� �� ������, ����� ���� ��������� ������
*
*	2.'������������ �������'
*		������ "���?"
*		����� ������� ����� ������ ��������;
*			�������� ����� ������������, �������� ������� ������ ����� ���� �����,
*			������ ����� �� ��� - �������, � ����� - ������
*		��� �������, ������� ������� �������� ���������� ����������������
*			'��������'
*			'������� ������������'
*			'��������� �������' (����� ���� �������� ������������, �������� �����)
*			'����������' (�������� �� ������)
*
*	3.'�������� ���������, ��������� �������'
*
*	4.'������������� ���������'
*		@.'������ �����������' ������� �� ���� ������:
*			�������� ��������� �� ������������ �������� ����� �++ (�������� ����������)
*			����������� ������� ��������� ����� (*.cpp) � ����� � ��������� ���� �� �������� �����
*
*	5.'��������� ��������� ����� (�������)'
*		@.'�������' - ������� ���������� ���� ��������� ������, ������������ ������������, � ������ ����������� ���������.
*		��� �������� ��� ������ ��������� ������ / �����������
*		'����������� ����	->	����������	->	��������� ����	->	 ������	->	����������� ����'
*
*	6.'������������� � �������� ���������'
*		��� ������ ����������� ���������; ����� IDE ����� ��� ������������:
*			����������� ������
*			���������� ����
*			������� �������� ������

#endif // �������� � ���������� ��

#ifdef ������ ������������ Debug � Release

* @.'������������ ������' - ��� '����� ��������' �������, ������� ���������� ������� ��� ����������.
*	������� ��:
*		����� ������������ �����
*		����� ���������� ������������ �����
*		���� ����������, � ������� IDE ����� ������ ������ ��� � ����� ���������
*		���������� �� ������� � ���������� ����������� ������ �������
* 
* @.'Debug' - ������������ ��� ������� ���������.
*	��������� ��� ��������� �� �����������
*	�������� ���������� �� �������
* 
* @.'Release' - ������������ �� ����� ������ ��������� ��� � ����������� �������
*	�������������� �� ������� � ������������������
*	�� �������� �������������� ���������� �� �������

#endif // ������ ������������ Debug � Release

#ifdef ������������ �����������

* �������� ������ Visual Studio ��� ��������
* ������������ �������	
*	->	�������� (* ���������� '��� ������������')
*		->	C/C++	
*			->	�����	
*				->	'������� �������������� 4'
*			->	����	
*				->	'�������� ����� �++ (�++20?)'
*				->	'��������� ���������� ����� ��'

#endif // ������������ �����������

#ifdef ��������� ��������

* @.'���������' - ���������������� ��� ����������, '���������� ����������� �������' � ����� �++.
* ������
*	// ��������� ����������
*	int x;
*	// ��������� ������������
*	x = 5;
*	// ��������� ������
*	std::cout << x;
* 
* @.'���������' - ��� �������������� ������, ������� ��������� ��� ���������� ���������� � ���������� ����������.
* ������
*	2 + 3
*	2 + x
*	x + y
*	(2 + x) * (y - 3)
* 
* @.'�������' - ��� ������������������ ����������� ��� ���������� ������������� �������.
*	������ ��������� � �++ ������ ��������� ������� ������� main(),
*		������ � ������� ����������, ������������ � ������� main() ���������� ���������� ���� ���������.
* ������
*	������� max() ����� ��������� ����������, ��� ����������� ����������� �� �������� �����.
* 
* #.'�����'
*	���������� ������� main() � ����� .cpp � ������, ����������� � ������ �������
* 
* @.'����������' - ��� '����� ����������������� ����', ������� ��� '��������' 
*		��� ���������� ������������� � ������ ����������
* ������
*	#include <iostream>
* 
* @.'������ ������� ���������'
*	1.	#include <iostream>
*	2.	
*	3.	int main()
*	4.	{
*	5.		std::cout << "Hello, world!";
*	6.		return 0;
*	7.	}
*	
*	������ �1: 
*		@.'��������� �������������' - �������� �����������, ��� ��� ����� ��������� ������������ �������,
*			� ������ ������ ���������� ���������� ����� <iostream>
*
*	������ �2:
*		������ ������������, ������������ ������������
*
*	������ �3:
*		���������� ������� ������� main()
*
*	������ �4 � �7:
*		��������� ����������� ������� ��������� ������� main()
*
*	������ �5:
*		��������� ������.
*			std::cout - ��� ����������� ������, ��������� ������� �� ����� �������� ������ �� �����
*			<< - ��� �������� ������
*			��, ��� ������������ � std::cout - ��������� �� ����� ("Hello, world!")
*
*	������ �6:
*		�������� �������� 'return'
*		@.'��� ���������' - ����� ��������� ��������� ���� ����������, ������� main() �������� ������� � ��
*			��������, ������� ��������� �� ��������� ���������� ���������
*				0 - �� ������
*				����� - ���-�� ����� �� ���

#endif // ��������� ��������

#ifdef �����������

* @.'�����������' - ��� ������/������ ������, ����������� � �������� ���,
*		��� ���������� ����, ��� ���� ��� ������.
* 
* '������������ �����������'	-	//
*	����� ��������� ��� �������� ����
*	������
*		// cout � endl ��������� � ���������� iostream
*		std::cout << �Hello, world!� << std::endl;
* 
* '������������� �����������'	-	/* */
*	������
*		/*
*		* �������� �����
*		* �������� ������ ������
*		*/
*
*		/* ��� ������������� ����������� /* */ � ��� ��� �� ����������� */
*
* !.'�������' - �� ����������� ��������� �����������!
* 
* @.'��� ��������� ������ �����������?'
*	1. �� ������ ���������/��������/������� ����������� �������� �� ������
*		'���?'
*	������
*		// ��� ������� ���������� ����� ������� ��� ���������� ����� �������
* 
*	2. ������ ���������/��������/������� ����������� �������� �� ������
*		'���?'
*	������
*		// ����� �������� ��������� (���������) �������, �� ��������� ���������:
* 
*		// 1) ���������� ������ ���� ���������.
*		// 2) ��������� ������� �������� ��� ������� ��������, ������ �� ��� ����, ����� � ����.
*		// 3) �������� ����� �����.
*		// 4) ���������� ������������ �������� �������� ���������� �����.
*		// 5) ���������� ��������� �������.
* 
*	3. �� ������ ����������� ����������� �������� �� ������
*		'������?'
*	������
*		// �� ������ ������������ ������ ������ �������,
*		// ������ ��� ������� ������������ ��������� �������.
* 
* @.'���������������� ���' - �������������� ���� ��� ��������� ����� ���� � �����������.
*	����� �������, ��������� ����� ���� �� ����������.
*	� Visual Studio '������� �������'
*		����������������	-	'Ctrl + K' ����� 'Ctrl + C'
*		�����������������	-	'Ctrl + K' ����� 'Ctrl + U'
*
* ������� ���������������� ���:
*	1. �� ��������� ��� ����� ������ ����, ������� ���� ��� �� �������.
*	2. �� �������� ���, ������� �������������, �� �������� �� ���, ��� �����
*		� ������ � ��� ��� ������� � ���� ��������.
*	3. ����� ����� ������, ���������� �������� ����� ������ ����.

#endif // �����������

#ifdef ������

* @.'������' - ��� '����� ������', ������� ����� ������� ��������.
* ��� �������� �������, ����� ����������� ������ ���������� ��� ����� �������.
* ��������
*	�������� ����, ���� �� �������� ���������� � ������ �� ���������
* 
* @.'����������' - ������ � ������.
* ��������� a = 8;
*	��� '�' - ��� ����������.
* 
* ��� ���������� �������� l-values & r-values 
* 'l-values' - ��������, ������� '�����' ���� ����������� '�����' � ������ 
* 'r-values' - ��������, '�� ��������' ����������� '������' � ������
* (��������� � ��������� ������)
* 
* ����� ������ ������������� � ������������ (?)
* '������������'
*	int a;
*	a = 8;
* '�������������'
*	int a = 8
* 
* !.'�������' - ���� � ��� ���������� '������� ��������' ��� ����������, ��
*	'����������� �������������', ������ ������������
* 
* ��� ���������� ����������, �� ������ ������ � ������, ��� ���� � ��� ����� �������� �����
*	int a;
*	std::cout << a; // ������ ���������� (� ������ ������� ������� ����� �� ���� 2362346)

#endif // ������

#ifdef ��������� � ��������� �������

* @.'�������� �������' - ��� '����������, ������� ������������ � �������' � ��������
*	������� ������������� caller (���������� ������).
* ������
*	void printValue(int a) // ���� �������� ���� int
*	{
*		std::cout << a << std::endl;
*	}
* 
* @.'�������� �������' - ��� '��������', ������� ���������� �� caller - a � �������
*	� ������� '����������� � �������' ��� ������ ������� � caller - e
* ������
*	printValue(7); // 7 - �������� ������� printValue()
*
* '������������ ��� ��������� �������'
*	1. ���, ������� ���������� ����� ������ ���� � ���������, ����� ���������� � ���� �������.
*	2. ���, ������� ������������ ��� ���������� ����-����, ����� �������� � ���� ��������� �������.
*	3. ������� ������ ��������� ���� �������.
*	4. ����� ������� ���������� ������� �������, ������� ��� ���������� - � ������� ������� �� ��������� ����������.
*
* @.'��������� ������� ���������' - ��������� �������, ����������, ������� ��������� ������ �������.
*	��������� � ����� ���������� � ������������, ����� ������� �� ������� ���������.
* 
* !.'�������' - �����, ������� ������������ ������ ������� (������� ���������),
*	��������/����� ������ ������ ���� �� �������

#endif // ��������� � ��������� �������

#ifdef �������� ����� � ��������������

* @.'�������� �����' - ����� � �� (�++), ����������������� ��� ������������ �������������
* ������
*	auto
*	break
*	char
* @.'�������������' - ��� ����������, �������, ������ ��� ������� ������� �� ����� �++.
* !.'�������' ������� ����� ���������:
*	1. ������������� �� ����� ���� �������� ������.
*	2. ������������� ����� �������� ������ �� ����, ���� � �������� �������������
*	3. ������������� ������ ���������� � �����
*	4. �++ ��������� ������ ������� �� �������� (nvalue �� ���� ����� ��� nValue)
* ������ 
*	// ��������� (����������� �������� �������������)
*	int my_variable_name;
*	void my_function_name();	
* 
*	// ��������� (������������ CamelCase "��������� �����"
*	int myVariableName;
*	void myFunctionName();
* 
*	// ����������� (������� ���������)
*	int my variable name;
*	void my function name();
* 
*	// ��������, �� �� ������������� (������� �������� � ����� � ������ ��������)
*	int MyVariableName;
*	void MyFunctionName();
* 
* #.'������������':
*	1. ��� ������ � ����� �����, ��������������� ��� �����
*	2. �� ��������� ���� ����� � ������� �������������, ��� ��� ��������������� ��� ��, ����������
*		� ������������ ������������
*	3. � �������� ��������������� ����������� �� �����, ������� ������� ��������� ��, ��� �������� ������
*	4. ���������� ����������� ������ ����� ������ (������ ������� ������� ������� ��������)
* 
* *'����������:' ����� ������������ ����������� ����� ��� ����������,
*		������� ����� ����������� ������������� (���������� � �����, ������� ���������. ������� � ��)

#endif // �������� ����� � ��������������

#ifdef ���������

* @.'�������' - ��� '������������� ��������', ������� ������������ � �������� ����.
* ������
*	int a = 3;						// a - ��� ����������, 3 - �������
*	std::cout << 5 + 2;				// 5 + 2 - ���������, 5 � 2 - ��������
*	std::cout << "Hello, world!";	// "Hello, world!" - ���� �������
* 
* @.'�������' - ��� '������, � �������� �������� ���������'
* 
* @.'��������' - ��� ����. '�������, ���������� � ���������' ��� ��������� ������ ��������.
* 
* @.'��������� ������ ��� �����'
*	1. �������		// -7
*	2. ��������		// 5 + 2
*	3. ���������	// ������ ���� ?:

#endif // ���������

#ifdef ������� �������������� ����

* �������, ������������ ��� ������������� ����, ����� ������������ ������������
*	(����� ��������� ��� ������� �������)
* 
* #.'������������':
*	1. ������ ��������� ('\t') ����������� 4 ������� 
*		(��� �������� ���������� �������� �� ������ IDE)
* 
*	2. �������� ������
*		�� ����� ������
*			int main()
*			{
*			}
*		��� ����� �������
*			int main() {
*			}
* 
*	3. ������ ��������� ������� ������ ���� � ��������������� �������� (tab)
*			int main()
*			{
*				std::cout << "Hello, world!" << std::endl;
*				std::cout << "Nice to meet you." << std::endl;
*			}
* 
*	4. ������ �� ������ ���� ������� �������� (?).
*		�� 80 �������� - ��� ����������� �������� ������
* 
*	5. ���� ������� ������ ������� �� ����� � ������� ���������, �� ���� �������� ������ ����������
*		� ����� ���� �� ������.
*			std::cout << "This is a really, really, really, really, really, really, really, " <<
*				"really long line" << std::endl;
*			if (condition == "firstName" ||
*				condition == "lastName")
* 
*	6. ����������� ������� � �������� ����� ����� ������������, ��� ��������� ������������� ������ ����
*			nConst			= 57;
*			nPricePerItem	= 24;
*			nValue			= 5;
*			nNumberOfItems	= 17;

#endif // ������� �������������� ����

#ifdef �������� ������� � ��������������� ����������

* *'��������:'
* int main() {
*	std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
*	return 0;
* }
* 
* int add(int x, int y) {
*	return x + y;
* }
* // add: ������������� �� ������
* // ����������, �������� � ���� main(), ��� �� ����� � ������� add(int, int)
* 
* 
* @.'��������������� ����������' - '�������� ����������� � ������������� ��������������' �� 
*		��� ������������ �����������
* ������
*	int add(int x, int y) {
*		return x + y;
*	}
* 
*	int main() {
*		std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
*		return 0;
*	}
* 
* @.'�������� �������' - ������� �� ���� �������� �������, � ����� � ����������.
*	� ������� ��������� ����� �������� ����� ���������� �������
* ������ 
*	int add(int, int);	
* 
*	int main() {
*		std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
*		return 0;
*	}
* 
*	int add(int x, int y) {
*		return x + y;
*	}
* 
* 
* @.'�����������' - �������� ��������� ������ ��� ��������������.
* ������
*	int add(int x, int y)	// ���������� ������� z
*	{
*		int z = x + y;		// ���������� ���������� z
*		return z;
*	}
* !.'�������':
*	1. ������ ����� �������/������/���/������ ����� ����� ������ '���� �����������'
*	2. ������ ��������� ������/������� ����� ����� ������ '���� �����������'
*	3. ������ ��������� ����/������� �������/���������� ������� ����� ����� '��������� �����������',
*		'����' ��� '���������'
*	��������� ������� 1 - ������ ����������
*	��������� ������� 2 ��� 3 - ������ ��������
*
* @.'����������' - ��� ���������, ������� �������� ����������� � ������������� �������������� � � ��� ����.
* ������
*	int add(int x, int y);	// ��������� ������� add
*	int x;					// ��������� ���������� x
* 
* '�����������' - ��� ��, ��� '���������' ���������� ������ ��� '�����������', ��� � '�������'
* '����������' - ��, ��� ���������� '���' ���������� ������ '�����������', '�� ������������ ���' ���������� ������ '�������'

#endif // �������� ������� � ��������������� ����������

#ifdef ��������� �������������

* @.'������������' - ��������� ���������, ������� '����������� ����� �����������'.
* ��� ������� ���������, ������������ ������������� ��� ������ ����, ���� �� ������, � ������ ��������.
* 
* @.'���������' - '����������� �������', ������� ���������� � ������� '#' � �� ������������� ';'
* 
* '��������� #include' - ������������ '�������� ���������� ������������� �����' 
*	� ������� ���� ����� ����� ������ � #include
*		������� ������ < >
*			�������� ������������� ������ ���� � '��������� �����'
*			#include <filename>
*		������� ������� " "
*			�������� ������������� ������ ���� � '������� ���������� �������'
*			#include "filename"
* 
* '��������� #define' - ������������ ��� �������� ��������
* 
* @.'������' - ��� �������, ������� ���������� '����������� �������������� � ��������� ������'.
*	���� ��� ���� ��������
*		'�������-�������' ����� ���� ��� ������� � ������������ � ��� �� �����.
*		'�������-�������' 
*			������
*			#define MY_FAVORITE_NUMBER 9	// MY_FAVORITE_NUMBER ���������� ������ 9
*			#define USE_YEN					// USE_YEN ���������� ������ ������
*				'�� ������������� ������������ ��� ������!'
*					1. ��-�� ���������� ������� ���������
*					2. ��-�� ������������� ������� ���������� �������� � ���������
*
* @.!'�������:' �� ����������� ��������� #define ��� �������� ���������� ��������
* 
* '��������� �������� ����������'
*	#ifdef		// ���� �� ���������� � ������� #define?
*	#ifndef		// ���� �� �� ���������� � ������� #define?
*	#endif		// ����� �������� ����������
* ������ ('Header Guards')
*	@.'Header Guards'
*	����� ������������ � '.h' ������, ��� �������������� ����������� ������ � ���� �� �����.
*		#ifndef SOME_UNIQUE_NAME_HERE
*		#define SOME_UNIQUE_NAME_HERE
*
*		// �������� ����� ����
* 
*		#endif
* 
*	#pragma once - ������������ ������� ����, ������ � ����� ���������� �������.
*		��, �� �������� ����������� ������ ����� �++ � �� ��� ����������� � ������������.
*		������� ������������� ������������ Header Guards (?)

#endif // ��������� �������������

#ifdef �������� ���� � std namespace

* ����������� ���������� ���� ���������� � ���� �������:
*	1. ����� ����������� � ���� ������, ���� ������� � ����������� ������� (�������)
*	2. ���� .cpp ���������� ������������ ����, � ������� ������������� ����������� � 
*		��������������� �� ����� .cpp (����������)
* 
* ���� ���������� ����������� ���������� �++ ��������� ������ ������������ ���� std (����. �� "standart")
* 
* @.'�������� ���������� ������� ��������� ::' - ������ �������� �����������, ��� ������������� ��������� � 
*	������������ ������������ ����.
* ������
*	// ��������, ��� ����� ������������ cout �� ������������ ���� std
*	std::cout << "Hello, world!";

#endif // �������� ���� � std namespace

#ifdef ���������� ����� ������ ��������

* ��� �1: '���������� ��������'
*	�������������� ��������, ������� ����� ���� ������.
*	������
*		� ���� �������� ���������-���������� ��� �������� �������� � ��������������
*			���� ���������� ������� � �������.
* 
* ��� �2: '���������� ���� ��������������, ���� � ���� ������'
*	��� ������� ����� �� ���� �������������� �������:
*		����� ���� ������� ��������� � ����� � ��� �����������?
*		�� ����� �����������/�� ���� ��������� ����� ��������?
*		����� �������������� �� ������ ������������?
*		������ �� �� ������������� ��������� � �������� ��� � ������� �������?
*		������ ����������.
*		����������� ��������� ������������/�������� �����/������.
*		�������� ����� ������ � ������ ����������� �������.
* 
* ��� �3: '�������� �������� �� �����'
*	����� ������� � ��� ������������ ��������� ��������.
*	������: 
*		�������� ������ � ��������
*	�������� �� ���������:
*		�������� ������ � ��������
*			����� ���������� � ��������
*			�������� �����
*			���������� ������� ������ ����� ��������� �����������
*			����������
*	������ �� ��� ����������� - �������� ���������:
*		�������� ������ � ��������
*			����� ���������� � ��������
*				������� � ���������� �� �������� � ��������
*				�������� ���������� � ���������
*				������ ������� � ��������������� �������� �� ����������� ���������
*			�������� �����
*				���������� � �����������
*				���������� �� ���������
*				���������� �� ����������
*			���������� ������� ������ ����� ��������� �����������
*			����������
* 
* ��� �4: '���������� ������������������ �������'
*	���� ����������, ��� ������� ��� ������ ������.
*	����� ����� ������, ��� ��� ���������� ����� ������, ����� ������������� ���������� ������.
* 
* ��� �5: '���������� ������ ����� � ������ ������ �� ������ �����'
* ��� �6: '������������ � �������'
* ��� �7: '��������� ������ ����� � ������� ������ � ���������'

#endif // ���������� ����� ������ ��������

#ifdef ������� ��������

* ���� ������
*	@.'�������������� ������' - ����� �� ������ ���, ������� �� ������������� �������� ���������� �� �++
*	@.'������������� ������' - ����� ��� ������������� ����������, �� ������ �� ��, ��� ������� �����������
* 
* @.'��������'/'��������' - ���������, ������� ��������� ������������ '�������������� ���������� ����'.
*	��������, ��� ���������� ��������� ��������, ��������������� ������ �������� ���������� � ���������.
* 
* '����������:' ���������, ��� �� ���������� � ������ ������������ Debug
* 
* @.'��������' - ����������� ��������� ��������� ��� �������� (������ �� �������).
*	���� ��� ������� ���������:
*		'��� � �������'							| F11
*		'��� � �������'							| F10
*		'��� � �������'							| shift + F11
* 
* ������� "��������� �� ������� �������"		| ��� �� ������ � ��������� �� ������� �������
*	�������� ���� ��� �� ������, ������������ ��������.					
* 
* ������� "����������"							| F5
*	��������� ���������� �� ����� ��������� ��� �� ��������� ����������� �����.
* 
* @.'����� ��������' - '����������� �������',	| ��� �� ��������� ���� ����� �� ������ ������
*	�� ������� �������� '������������� ������� ����������' ���������.
* 
* @.'������������ ����������' - ��� ������� �������� �������� ���������� �� ����� �������.
* @.'���� �������' - ��� ������ ���� ��������� �������, ������� ���������� �� �������� ��������������.
*	'�������'	->	'����'	->	'���� �������'

#endif // ������� ��������

#ifdef �������� ���� �1

* '������� 1'
* �������� ������������ ��������� (� ������ main.cpp), ������� ����������� �
*	������������ ��� ����� �����, ���������� ��, � ����� ������� ���������. �
*	��������� ������ ���� 3 �������:
*		1. ������� readNumber(), ������� ����������� � ������������ ����� �����, �
*			����� ���������� ��� � main();
*		2. ������� writeAnswer(), ������� ������� ��������� �� �����. ������� ������
*			���� ��� ������������� �������� � ����� ������ ���� ��������;
*		3. ������� main(), ������� ��������� �� � ���.
* 
* '������� 2'
* �������� ��������� �� ������� �1 ���, ����� ������� readNumber() �
*	writeAnswer() ���������� � ��������� ����� io.cpp. ����������� ���������������
*	���������� ��� ������� � ���� �������� � ������� main().
* 
* '������� 3'
* �������� ��������� �� ������� �2 ���, ����� ��� ������������ ������������
*	���� io.h ��� ������� � �������� (������ ������������� ���������������
*	����������). ���������, ��� ��� ������������ ���� ���������� header guards.
* 
* 
* '�������:'
*	�������� "io.h", "io.cpp"
*
*		#include "io.h"
*
*		int main() {
*			int a = readNumber();
*			int b = readNumber();
*			writeAnswer(a + b);
*		}

#endif // �������� ���� �1

#ifdef �������������, ������������ � ���������� ����������

* �++ ������������ 3 �������� ������� ������������� ����������.
*	1. ���������� �������������
*		int nValue = 5;
*	2. ������ �������������
*		int nValue(5);
*	3. uniform-�������������
*		������������: ���������� ������ �������������� ��� ��������� �� ������.
*			int nValue{5};
*			// �� ��������� �������� 0
*			int nValue{}
*			������������:
* 
* !.'�������:' ����������� uniform-�������������
* 
* ����������� ���������� ����������:
*	int a, b;
* 
*	int a;
*	int b;
* 
* !.'�������:' ���������� ���������� ��� ����� ����� � �� ������� �������������.

#endif // �������������, ������������ � ���������� ����������

#ifdef ��� ������ void

* @.'void' - ��� ������, ������� �������� '���������� ������ ���� ������'
* 
* ���������� �� ����� ���� ���� void
* 
* �������������:
*	1. ������� �� ���������� ��������
*		void writeValue(int x)
*	2. ������� �� ����� ������� ���������� (������� �� ��)
*		int getValue(void)	<=>	int getValue()
*	3. TO DO

#endif // ��� ������ void

#ifdef ��� ������

* '���������'						'���'				'����������� ������'
* ���������� ��� ������				bool				1�
* 
* ���������� ��� ������				char				1�
*									wchar_t				1�
*									wchar16_t			2�
*									wchat32_t			4�
* 
* ������������� ��� ������			short				2�
*									int					2�
*									long				4�
*									long long			8�
* 
* ��� ������ � ��������� �������	float				4�
*									double				8�
* 									long double			8�
* 
* 
* '��� ������������� ����:'
* @.'�������� sizeof' - �������, ��������� � ���������� '������' ���������� ��� ������������� ����
*		'������' � ������
* 
* @.'�������� ����� signed' - ����������, ��� ���������� ����� ��������� '+' � '-' ��������.
*	�� ��������� ����� ����� ������� signed
* 
* @.'�������� ����� unsigned' - ����������, ��� ���������� ����� ��������� ������ '+' ��������.
* 
* �������� �������� (������)
*	1� signed			-128	:	127
*	1� unsigned		0		:	255
* 
* !!!��� �������, unsigned ��������, ��-�� �������������� ������.
*	(��� ���������� signed � unsigned)
* 
* @.'������������' - '������ ����' ��-�� ����, ��� ���������� '�� ���� �������� ���������� ������' ��� �� ��������.
* ������
*	4-������ ����������:
*		21 = 0b10101 (�������� ���)
*			������� ����� ��� ����������, ��������� �������� 4 ����.
*			�������: 0b0101 = 5
* 
* !.'�������:' ������� �� ���������� ������������� ������������ � ����� ����������!
* 
* ��� ������� '�����' ����� � C++ ������� ����� '�������������!'
* ������
*	// �����
*	8 / 5 = 1.6
*	// ���������
*	8 / 5 = 1
* 
* ������ ������������� ����� �� �������� �������������,
*	�������� � ����� ��, ����� ������������������ ����� �������������� ��������,
*	����� ���������� ��� �������������� ��������� �������� ���������� ������ ��� �������������
*	���� ������ � ����������� �� ������������ �����������.
* 
* � �++ �������� ����� ������������� ����� �������������� �������
*	int8_t	uint8_t
*	int16_t	uint16_t
*	int32_t	uint32_t
*	int64_t	uint64_t
* 
*	*�� �++11 ��������� ���������� <stdint.h>
* 
*	*'��������������', int8_t uint8_t ����� ���� ���������� ��� ��� char
* 
* 
* '��� ���� ������ � ��������� ������:'
* ������� �����, ��� ��������� ������ ��������:
*	5		-	int
*	5.0		-	double
*	5.		-	double
*	5.0f	-	float
*	5.f		-	float
* 
* '���������������� ������'
*	5000.0		=	5e3
*	0.05		=	5e-2
*	42030		=	4.203e4		// ����������� ��������� 0
*	0.0078900	=	7.8900e-3	// �� ������� ����� 0 �� �������������
* 
* ����� �������������� '��������' cout, ��������� ������� std::setprecision(),
*	������� ��������� � ������������ ����� <iomanip>
* ������
*	float f		=	3.33333333333333333333333333333333333333f;
*	double d	=	3.33333333333333333333333333333333333333;
*	std::cout << std::setprecision(17);
*	std::cout << f << std::endl;
*	std::cout << d << std::endl;
* �����:
*	3.3333332538604736
*	3.3333333333333335
* 
* '������ ����������'
* ������
* double a{1.0};
* double b{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
* std::cout << a << '\n' << b << std::endl;
* �����:
*	1
*	0.99999999999999989
* 
* 'nan � inf'
*	inf - �������������
*	nan - �� ����� (��������� �����)
* ������
*	double zero = 0.0;
*	double posinf = 5.0 / zero;
*	double neginf = 5.0 / zero;
*	double nan = zero / zero;
*	std::cout << 
*		posinf << '\n' <<
*		neginf << '\n' <<
*		nan << std::endl;
* �����
*	inf
*	-inf
*	-nan(ind)
* 
* 
* '��� ���������� ��� ������:'
* ����� std::cout ������� true ��� false, ����������� ����������� std::boolalpha
*	std::cout << std::boolalpha;
* 
* 
* '��� char'
* ���������������� ��� ASCII-������
*	(���������� �������, ��� ������ �� 0 �� 127 �������� ���� ������)
*	������
*		char ch(5);		// ������������� ����� ������ 5
*		char ch('5');	// ������������� �������� '5' (�� ���� �����)
* 
* @.'�������� static_cast' - ������ '������ ����������� ����������' �� ������ ���� ������ � ������
* ������
*	char ch(97)
*	std::cout << ch << std::endl;
*	std::cout << static_cast<int>(ch) << std::endl;
* �����
*	a
*	97
* '����������:' � static_cast '��� ��������' �� �������� ��������; 
*	�� ����� �������� ������� '������������'.
* 
* @.'����������� �������' - ���������� � '\', ����� ���� ����������.
*	'��������'					'������'		'��������'
*	��������������				\a				�������� ������
*	Backspace					\b				�������. ������� �� ���� ������� �����
*	Formfeed					\f				�������. ������� � ��������� �����. �������� (?)
*	Newline						\n				�������. ������� �� ��������� ������
*	Carriage Return				\r				�������. ������� � ������ ������
*	Horizontal tab				\t				������� ��������������� TAB-a
*	Vertical tab				\v				������� ������������� TAB-a
*	��������� �������			\'				'������� ��������� ������� (��� ���������)
*	������� �������				\"				"������� ������� �������
*	�������						\\				������� �������� ����� �����
*	�������������� ����			\?				������� ����� �������
*	������������ �����			\(number)		������� ����� �� ������������ �� � ��� char
*	����������������� �����		\x(number		������� ����� �� ����������������� �� � ��� char
* 
* '\n' vs std::endl;
*	������������ 'std::endl ������� �����'
*		����������� std::endl � �������, ��� �����, ����� ������ ���������� ����� ��
*			* ������ � ����
*			* ��� ���������� ���������� ��������� ��������
*		'\n' - �� ���� ��������� �������
	
#endif // ��� ������

#ifdef ���������

* !.'�������:' ����� ����������, ������� �� ������ �������� ���� �������� ����� �������������,
*	������ ���� ��������� � ������� ������������� const ��� constexpr
* 
* ��������� ����������� � '��������������'.
* 
* ���� ��� ���� ��������:
*	��������� ������� ���������� ('const')
*		- �������� ����������� �� ����� ���������� ���������
*	��������� ������� ���������� ('constexpr')
*		- �������� ����������� �� ����� ���������� ���������
* 
* '�������� ������������� ���������� ��������:'
*	1. ������� '������������ ����' ��� �������� ��������.
*	2. � ������������ ����� �������� ������������ ���.
*	3. �������� ��� ��������� � ��������� ������������ ���.
*	4. #include ���� ���� �����, ��� ����� ���������.
* ������ 
*	"constants.h"
*		#ifndef CONSTANTS_H
*		#define CONSTANTS_H
*		
*		namespace constants
*		{
*			const double pi{ 3.14159 };
*		}
* 
*		#endif CONSTANTS_H
* 
*	".cpp ����"
*		#include "constants.h"
* 
*		//...
*		double circumference = 2 * radius * constants::pi;
*		//...		

#endif // ���������

#ifdef �������� ���� �2

* '������� 1'
* �������� ��������� ���������. ������� ������������ ������������ ������ 2
*	����� ���� � ��������� ������ (����������� ��� double). ����� ������������ ������
*	���� �� ��������� �������������� ��������: +, -, * ��� /. ��������� ���������
*	��������� ������������� �������������� �������� ����� ����� �������, �
*	����� ������� ��������� �� �����. ���� ������������ ���� ������������ ������,
*	�� ��������� ������ �� ������ ��������. ��������:
*		Enter a double value: 7
*		Enter a double value: 5
*		Enter one of the following: +, -, *, or /: *
*		7 * 5 = 35
*	#include <iostream>
*
*	double getDouble() {
*		double value;
*		std::cout << "Enter a double value: ";
*		std::cin >> value;
*
*		return value;
*	}
*
*	char getOperator() {
*		char value;
*		std::cout << "Enter one of the following: +, -, *, /" << '\t';
*		std::cin >> value;
*
*		return value;
*	}
*
*	void printResult(double a, double b, char op) {
*		if (op == '+')
*			std::cout << a << ' ' << op << ' ' << b << " = " << a + b << std::endl;
*		else if (op == '-')
*			std::cout << a << ' ' << op << ' ' << b << " = " << a - b << std::endl;
*		else if (op == '*')
*			std::cout << a << ' ' << op << ' ' << b << " = " << a * b << std::endl;
*		else if (op == '/')
*			std::cout << a << ' ' << op << ' ' << b << " = " << a / b << std::endl;
*
*	}
*
*	int main() {
*		double a = getDouble();
*		double b = getDouble();
*		char op = getOperator();
*		printResult(a, b, op);
*	}
* 
* 
* '������� 2'
* �������� ��������� ���������-��������� ������� ������ � �����. 
*	������� ������������ ������������ ������ ������ ����� � ������.
*	�� ��������� � ���������� (9,8�/�2) � � ���, ��� � ������ ��� ��������� ��������
*	(��� ������ � �����). ��������� ������ �������� ���������� �� �����, �� �������
*	��������� ����� ����� 0, 1, 2, 3, 4 � 5 ������ �������. ����������� ������
*	���������� 0 ������ (���� ������ ������ ������).
* 
*	#include <iostream>
*
*	float getHeight() {
*		float value;
*		std::cout << "Enter a height: ";
*		std::cin >> value;
*
*		return value;
*	}
*
*	namespace constants {
*		const float g{ 9.8f };
*	}
*
*	void printResult(const float h, const int t) {
*		float result = h - constants::g * t * t / 2;
*		if (result < 0) result = 0;
*		std::cout << "At " << t << " seconds, the ball is at height: " << result << " meters" << std::endl;
*	}
*
*	int main() {
*		const float height = getHeight();
*		printResult(height, 0);
*		printResult(height, 1);
*		printResult(height, 2);
*		printResult(height, 3);
*		printResult(height, 4);
*		printResult(height, 5);
*	}

#endif

#include <iostream>

int main() {

}