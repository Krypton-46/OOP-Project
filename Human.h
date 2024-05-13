#ifndef HUMAN_H
#define HUMAN_H
#include"Creature.h"
class Human :public Creature
{
public:
	using Creature::Creature;
	virtual int getDamage()const;
};
#endif // !HUMAN_H
