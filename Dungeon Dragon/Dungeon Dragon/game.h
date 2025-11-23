#pragma once
#include <memory>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <thread>
#include <chrono>
#include "enemies.h"
#include "heroes.h"
#include "grid.h"

enum class Gamefunction
{
	menu,
	play,
	map,
	training,
	fight,
	doors,
	win,
	loose,
	leave,
};
class Game
{
private:
	bool isrunning;
public:
	//heroes
	heroes* archer = new heroes("Archer", 300, 300, 20, 40, 1,0,100);
	heroes* wizard = new heroes("Wizard", 200, 200, 40, 15, 1, 0, 100);
	heroes* warrior = new heroes("Warrior", 350, 350, 30, 20, 1, 0, 100);

	//enemies
	enemies* goblin = new enemies("Goblin", 200, 200, 40, 30, 1);
	enemies* skeleton = new enemies("Squelette", 250, 250, 40, 25, 1);
	enemies* ghost = new enemies("Fantome", 150, 150, 30, 40, 1);

	int diff;
	int turn;
	int choice;
	int inp;
	char input;
	//char directioninput;

	//menu
	Gamefunction function;
	Game();
	Game(int d, int t, int c) :diff(d), turn(t), choice(c) {}


	int Difficulty();
	void Initialise();
	void GameLoop();
	void CharacterChoice();
	void PlayFightLoop();
	void Fight();
	void ShutDown();
	void Menu();
	void ResetCharacters();
};