#pragma once
#include <vector>
#include "heroes.h"
#include "enemies.h"
#include "cell.h"

class Grid : public Cell
{
public :
    int lines;
    int columns;
    int diffi;
    int enemyset;
    int enemyneeded;

    std::vector<std::vector<Cell>> cells;


    int difficulty();
    void displaygrid();
    void setenemy();
    //grid();
};





