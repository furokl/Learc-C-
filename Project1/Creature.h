#pragma once
#include <string>

class Creature
{
protected:
	std::string name;
	char symbol;
	int health;
	int damage;
	int gold;

public:
	Creature(std::string name, char symbol, int health, int damage, int gold) 
	{
		this->name = name;
		this->symbol = symbol;
		this->health = health;
		this->damage = damage;
		this->gold = gold;
	}

	std::string getName() const { return this->name; }
	char getSymbol() const { return this->symbol; }
	int getHealth() const { return this->health; }
	int getDamage() const { return this->damage; }
	int getGold() const { return this->gold; }

	bool isDead() { return this->health <= 0; }
	void reduceHealth(int damage) { this->health -= damage; }
	void addGold(int gold) { this->gold += gold; }
};

std::ostream &operator<< (std::ostream &out, Creature &creature);