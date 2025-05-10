#include"Creature.h"
Creature::Creature(string name, int newStrength, int newHit,int hp)
{
	specieName = name;
	strength = newStrength;
	hitpoints = newHit;
	healPoints = hp;
}
int Creature::getStrength()const
{
	return strength;
}
int Creature::getHitPoints()const
{
	return hitpoints;
}
void Creature::setStrength(const int newStrength)
{
	strength = newStrength;
}
void Creature::setHitpoints(const int newHit)
{
	hitpoints = newHit;
}
int Creature::getDamage()const
{
	int damage  = (rand()%10 + getStrength()) + 1;
	return damage;
}
void Creature::heal()
{
	if (hitpoints < 0)
	{
		hitpoints = 0;
	}
	else
	{
		hitpoints += healPoints;
	}
}
string Creature::getSpecieName()const
{
	return specieName;
}
