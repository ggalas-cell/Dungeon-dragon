#include "game.h"
#include <iostream>
int game::difficulty()
{
    std::cout << "Choisissez le niveau de difficulter (Easy(1)/Medium(2)/Hard(3)) :";
    std::cin >> diff;
    return diff;
}