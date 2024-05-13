#include"Creature.h"
#include"Demon.h"
#include"Elf.h"
#include"Human.h"
#include"CyberDemon.h"
#include"Balrog.h"
int main()
{
	Creature c{ "Crature",10,10 };
	c.getDamage();
	Demon d{ "DEMON",30,30 };
	d.getDamage();
	Human h{ "HUMAN",50,100 };
	h.getDamage();
	CyberDemon cd{ "CYBERDEMON",60,80 };
	cd.getDamage();
	Elf e{ "ELF",90,70 };
	e.getDamage();
	Balrog b{ "BALROG",100,90 };
	b.getDamage();
}