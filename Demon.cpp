#include"Demon.h"
int Demon::getDamage()const
{
	int damage =Creature::getDamage();
	int randomizer = rand() % 100;
	if(randomizer<5)
		damage =damage+50;
	cout << '\n' << getSpecieName() << " attacks for " << damage << " points!" << '\n';
	return damage;
}
