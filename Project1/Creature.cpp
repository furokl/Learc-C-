#include <iostream>
#include "Creature.h"

std::ostream &operator<< (std::ostream &out, Creature &creature) {
	out <<
		"The " << creature.getName() <<
		" has " << creature.getHealth() <<
		" health and is carrying " << creature.getGold() << " gold.\n";
	return out;
}