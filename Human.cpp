#include"Human.h"
int Human::getDamage()const
{
	int damage = (rand() % 10 + getStrength()) + 1;
	cout << '\n' << getSpecieName() << " attacks for " << damage << " points!" << '\n';
	return damage;
}
