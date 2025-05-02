#include"Creature.h"
Creature::Creature(string name, int newStrength, int newHit)
{
	specieName = name;
	strength = newStrength;
	hitpoints = newHit;
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
string Creature::getSpecieName()const
{
	return specieName;
}
