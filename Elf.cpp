#include"Elf.h"
int Elf::getDamage()const
{
	int damage = (rand() % 10 + getStrength()) + 1;
	int randomizer = rand() % 100;
	if (randomizer < 10) // 10% chance to double damage	
		damage = damage * 2;
	cout << '\n' << getSpecieName() << " attacks for " <<damage << " points!" << '\n';
	return damage;
}
