#ifndef DEMON_H
#define DEMON_H
#include"Creature.h"
class Demon :public Creature
{
public:
	using Creature::Creature;
	virtual int getDamage()const;
};
#endif // !DEMON_H
