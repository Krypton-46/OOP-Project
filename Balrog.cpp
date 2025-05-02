#include"Balrog.h"
int Balrog::getDamage()const
{
	int damage = Demon::getDamage();
	damage = damage + Demon::getDamage();//doing double damage
	cout << '\n' << getSpecieName() << " attacks for " << damage<< " points!" << '\n';
	return damage;
}
