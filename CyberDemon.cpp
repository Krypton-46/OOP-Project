#include"CyberDemon.h"
int CyberDemon::getDamage()const
{
	int damage = Demon::getDamage();
	cout << '\n' << getSpecieName() << " attacks for " << damage << " points!" << '\n';
	return damage;
}

