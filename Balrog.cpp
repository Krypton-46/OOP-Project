#include"Balrog.h"
int Balrog::getDamage()const
{
	int damage = ((rand() % 10 + getStrength() + 1)*2 );
	cout << '\n' << getSpecieName() << " attacks for " << damage<< " points!" << '\n';
	return damage;
}
