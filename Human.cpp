#include"Human.h"
int Human::getDamage()const
{
	int damage = Creature::getDamage();
	cout << '\n' << getSpecieName() << " attacks for " << damage << " points!" << '\n';
	return damage;
}
