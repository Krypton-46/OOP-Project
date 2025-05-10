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
	int healPoints;
	string specieName;
public:
	string getSpecieName()const;
	Creature(string name ="", int newStrength=0, int newHit=0,int hP=0);
	virtual int getDamage()const;
	virtual void heal();
	int getStrength()const;
	int getHitPoints()const;
	void setStrength(const int newStrength);
	void setHitpoints(const int newHit);
};
#endif // !CREATURE_H
