#include"Game.h"
#include"Human.h"
#include"Elf.h"
#include"Demon.h"
#include"Balrog.h"
#include"CyberDemon.h"

Game::Game()
{
	player1 = nullptr;
	player2 = nullptr;
}
void Game::input()
{
	cout << "Welcome to the game!" << '\n';
	cout << "Please select the species for player 1 and player 2." << '\n';
	printSpecies();
	int name1, name2;
	cout << "Enter specie for player 1: ";
	cin >> name1;
	cout << "Enter specie for player 2: ";
	cin >> name2;
	switch (name1)
	{
	case 1:
		player1 = new Human();
		break;
	case 2:
		player1 = new Balrog();
		break;
	case 3:
		player1 = new Elf();
		break;
	case 4:
		player1 = new Cyberdemon();
		break;
	case 5:
		player1 = new Demon();
		break;
	default:
		cout << "Invalid input! Please try again." << '\n';
		input();
		break;
	}
	switch (name2)
	{
	case 1:
		player2 = new Human();
		break;
	case 2:
		player2 = new Balrog();
		break;
	case 3:
		player2 = new Elf();
		break;
	case 4:
		player2 = new Cyberdemon();
		break;
	case 5:
		player2 = new Demon();
		break;
	default:
		cout << "Invalid input! Please try again." << '\n';
		input();
		break;
	}
}
Game::Game(Creature * p1,Creature*p2)
{
	player1 = p1;
	player2 = p2;
}
Game::~Game()
{
	delete player1;
	delete player2;
}
void Game::playGame()
{
	player1->setStrength(100);
	player2->setStrength(100);
	player1->setHitpoints(200);
	player2->setHitpoints(200);
	while (player1->getHitPoints() > 0 && player2->getHitPoints() > 0)
	{
		int damage = player1->getDamage();
		player2->setHitpoints(player2->getHitPoints() - damage);
		if (player2->getHitPoints() <= 0)
		{
			cout << player2->getSpecieName() << " has been defeated!" << '\n';
			break;
		}
		damage = player2->getDamage();
		player1->setHitpoints(player1->getHitPoints() - damage);
		if (player1->getHitPoints() <= 0)
		{
			cout << player1->getSpecieName() << " has been defeated!" << '\n';
			break;
		}
	}

}
void Game::printSpecies()const
{
	cout << "1: Human\n";
	cout << "2: Balrog\n";
	cout << "3: Elf\n";
	cout << "4: Cyberdemon\n";
	cout << "5: Demon\n";
}