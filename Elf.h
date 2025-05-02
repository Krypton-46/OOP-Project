#include"Creature.h"
class Elf: public Creature
{
public:
	using Creature::Creature;
	virtual int getDamage()const;
};