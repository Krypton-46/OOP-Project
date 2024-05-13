#ifndef CREATURE_H
#define CREATURE_H
#include<iostream>
#include<ctime>
#include"C:\Users\dell\source\repos\\class of string\String.h"
using namespace std;
class Creature
{
	int strength;
	int hitpoints;
	String specieName;
protected:
	String getSpecieName()const;
public:
	Creature();
	Creature(String name, int newStrength, int newHit);
	virtual int getDamage()const;
	int getStrength()const;
	int getHitPoints()const;
	void setStrength(const int newStrength);
	void setHitpoints(const int newHit);
};
#endif // !CREATURE_H
