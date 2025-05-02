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
	srand(time(0));
	int damage  = (rand() & getStrength()) + 1;
	cout << '\n' << getSpecieName() << " attacks for " << damage << " points!" << '\n';
	return damage;
}
string Creature::getSpecieName()const
{
	return specieName;
}
