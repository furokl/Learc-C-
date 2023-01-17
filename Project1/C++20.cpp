#ifdef C++20
/*
* Избавили геморой с диапазонами #include <ranges>
* Пример
* std::array data{ 0, 1, 2, 3, 4, 5, 6 };
* std::ranges::sort(data, std::greater{});
* for (auto const &i : data) 
*	std::cout << i << ' ';
* 
* Обычные функции могут использовать auto с параметрами.
* Пример
* auto sum(auto a, auto b);
*/
#endif // C++20
