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

class ClsFightLoop
{
public:
	void PlayFightLoop();
	void FightLoop();
	void ResetCharacters();


};

