#ifndef FUNCTION_PTR_H
#define FUNCTION_PTR_H

#include <functional>
#include <array>
inline int add(const int &a, const int &b) { return a + b; }
inline int subtract(const int &a, const int &b) { return a - b; }
inline int multiply(const int &a, const int &b) { return a * b; }
inline int devide(const int &a, const int &b) { return a / b; }

inline bool isCalculateOperation(const char &value) { 
    return !(value == '+' || value == '-' || value == '*' || value == '/');
}
inline bool defaultCalculateCondition(const char &value) { return true; }

using cinCondition = std::function<bool(const char &value)>;
char getSymbol(cinCondition fptr_condition);
int getNumber();

using arithmeticFcn = std::function<int(const int &, const int &)>;
arithmeticFcn getArithmeticFcn(const char &op);

#endif // !FUNCTION_PTR_H
