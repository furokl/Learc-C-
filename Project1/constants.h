#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace myConst
{
	const double g(9.8);
}

namespace hiloRules 
{
	const unsigned int
		min_random_number	= 1u,
		max_random_number	= 100u,
		tries				= 7u;
}

namespace students
{
	namespace grade
	{
		const unsigned int
			min = 0u,
			max = 100u;
	}
}

namespace game
{
	const int win = 20;

	namespace player
	{
		const char symbol = '@';
		const int health = 10;
		const int damage = 1;
		const int gold = 0;
		const int level = 1;
	}
}

#endif // !CONSTANTS_H
