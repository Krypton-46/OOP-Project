#include"Game.h"
#include"Human.h"
#include"Elf.h"
#include"Demon.h"
#include"Balrog.h"
#include"CyberDemon.h"
#include<ctime>
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
		player1 = new Human("HUMAN",40,200,30);
		break;
	case 2:
		player1 = new Balrog("BALROG",50,160,20);
		break;
	case 3:
		player1 = new Elf("ELF",45,170,50);
		break;
	case 4:
		player1 = new CyberDemon("CYBERDOMON",55,150,5);
		break;
	case 5:
		player1 = new Demon("DEMON",50,100,10);
		break;
	default:
		cout << "Invalid input! Please try again." << '\n';
		input();
		break;
	}
	switch (name2)
	{
	case 1:
		player2 = new Human("HUMAN", 40, 100,30);
		break;
	case 2:
		player2 = new Balrog("BALROG", 50, 120,20);
		break;
	case 3:
		player2 = new Elf("ELF", 45, 170,50);
		break;
	case 4:
		player2 = new CyberDemon("CYBERDOMON", 55, 130,5);
		break;
	case 5:
		player2 = new Demon("DEMON", 35, 100,10);
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
	srand(time(0));
	cout << "\nThe battle begins!" << '\n';
	while (player1->getHitPoints() > 0 && player2->getHitPoints() > 0)
	{
		cout <<'\n'<< player1->getSpecieName() << " has " << player1->getHitPoints() << " hit points left." << '\n';
		cout << player2->getSpecieName() << " has " << player2->getHitPoints() << " hit points left." << '\n';
		int damage = player1->getDamage();
		player1->heal();
		player2->setHitpoints(player2->getHitPoints() - damage);
		if (player2->getHitPoints() <= 0)
		{
			cout << player2->getSpecieName() << " has been defeated!" << '\n';
			break;
		}
		damage = player2->getDamage();
		player2->heal();
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