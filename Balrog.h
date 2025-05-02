#ifndef BALROG_H
#define BALROG_H
#include"Demon.h"
class Balrog :public Demon
{
public:
	using Demon::Demon;
	virtual int getDamage()const;
};
#endif // !BALROG_H
