#ifndef CREATURE_H
#define CREATURE_H
#include<iostream>
#include<ctime>
#include<string>
using namespace std;
class Creature
{
	int strength;
	int hitpoints;
	string specieName;
public:
	string getSpecieName()const;
	Creature(string name, int newStrength, int newHit);
	virtual int getDamage()const;
	int getStrength()const;
	int getHitPoints()const;
	void setStrength(const int newStrength);
	void setHitpoints(const int newHit);
};
#endif // !CREATURE_H
