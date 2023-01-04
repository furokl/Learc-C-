#include "binary.h"

// ¬ывод 8-битного числа бинарном виде
std::string getBinValue(int value) {
	std::string binValue{};

	const int bit7{ 128 };
	const int bit6{ 64 };
	const int bit5{ 32 };
	const int bit4{ 16 };
	const int bit3{ 8 };
	const int bit2{ 4 };
	const int bit1{ 2 };
	const int bit0{ 1 };

	(bit7 <= value) ? value -= bit7, binValue += '1' : binValue += '0';
	(bit6 <= value) ? value -= bit6, binValue += '1' : binValue += '0';
	(bit5 <= value) ? value -= bit5, binValue += '1' : binValue += '0';
	(bit4 <= value) ? value -= bit4, binValue += '1' : binValue += '0';
	binValue += '\'';
	(bit3 <= value) ? value -= bit3, binValue += '1' : binValue += '0';
	(bit2 <= value) ? value -= bit2, binValue += '1' : binValue += '0';
	(bit1 <= value) ? value -= bit1, binValue += '1' : binValue += '0';
	(bit0 <= value) ? value -= bit0, binValue += '1' : binValue += '0';

	return binValue;
}

// ¬ывод 8-битного числа бинарном виде (использу€ побитовые операторы)
std::string getBinValue2(int value) {
	std::string binValue{};

	const unsigned char bit0 = 0x01;
	const unsigned char bit1 = 0x02;
	const unsigned char bit2 = 0x04;
	const unsigned char bit3 = 0x08;
	const unsigned char bit4 = 0x10;
	const unsigned char bit5 = 0x20;
	const unsigned char bit6 = 0x40;
	const unsigned char bit7 = 0x80;

	(value & bit7) ? binValue += '1' : binValue += '0';
	(value & bit6) ? binValue += '1' : binValue += '0';
	(value & bit5) ? binValue += '1' : binValue += '0';
	(value & bit4) ? binValue += '1' : binValue += '0';
	binValue += '\'';
	(value & bit3) ? binValue += '1' : binValue += '0';
	(value & bit2) ? binValue += '1' : binValue += '0';
	(value & bit1) ? binValue += '1' : binValue += '0';
	(value & bit0) ? binValue += '1' : binValue += '0';

	return binValue;
}

// ¬ывод 8-битного числа бинарном виде (использу€ std::bitset)
std::bitset<8> getBinValue3(int value) {
	std::bitset<8> binValue{static_cast<uint8_t>(value)};
	return binValue;
}