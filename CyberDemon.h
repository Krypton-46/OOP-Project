#ifndef CYBER_DEMON_H
#define CYBER_DEMON_H
#include"Demon.h"
class CyberDemon :public Demon
{
public:
	using Demon::Demon;
	virtual int getDamage()const;
};
#endif // !CYBER_DEMON_H
