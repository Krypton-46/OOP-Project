#ifndef GAME_H
#define GAME_H
#include"Creature.h"
class Game
{
	Creature* player1;
	Creature* player2;
	void printSpecies()const;
public:
	Game();
	void input();
	Game(Creature*, Creature*);
	void playGame();
	~Game();
};
#endif // !GAME_H
// Game.h