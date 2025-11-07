#pragma once
#include "heroes.h"
#include "enemies.h"
#include "cell.h"

class grid : public cell
{
public :
    int lines;
    int columns;
    int diffi;
    int enemyset;
    int enemyneeded;
    int difficulty();
    void displaygrid();
    void setenemy();
    //grid();
};

//ajouter cell
#pragma once
class cell
{
public:
    bool ishero;
    bool isenemy;
    bool isdoor;
  
    //bool boss; a la fin
};




