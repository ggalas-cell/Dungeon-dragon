#include <iostream>
#include <ctime>
#include "grid.h"


int Grid::difficulty()
{
    std::cout<<"Choisissez le niveau de difficulter (Easy(1)/Medium(2)/Hard(3)) :";
    std::cin >> diffi;
    return diffi;
}


void Grid::displaygrid()
{
    auto grid = (Cell**)malloc(sizeof(Cell*) * lines);  //alloué tableau 2D
    if (grid == nullptr)
        exit(1);
    system("cls");
    switch(diffi)
    {
        case 1:
            lines=9;columns=9;enemyneeded = 10;break;
        case 2:
            lines=16;columns=16;enemyneeded = 40;break;
        case 3:
            lines=30;columns=16;enemyneeded = 99;break;
        default:
            lines = 9;columns=9;enemyneeded = 10;
    }
    cells.assign(lines, std::vector<Cell>(columns));

    for(int i=0;i<lines;i++)
    {
        for(int j=0;j<columns;j++)
        {
            std::cout<< "+---";
        }
        std::cout<<"+\n";
        for(int j=0;j<columns;j++)
        {    
            if(ishero==true)
            {
                std::cout<<"| # ";
            }
            else if(isenemy==true)
            {
                std::cout<<"| @ ";
            }
            else if(isdoor== true)
            {
                std::cout<<"| D ";
            }
            else
            {
                std::cout<<"|   ";
            }
        }
        std::cout << "|\n";
    }
    for (int i = 0; i < columns; i++)     //dernière ligne du tableaux
    {
        std::cout <<"+---";
    }
    std::cout << "+" << std::endl;
}
void Grid::setenemy()
{
    srand(time(0));
    enemyset=0;
    while (enemyset < enemyneeded)
    {
        int randomline = rand() % lines;
        int randomcoll = rand() % columns;
        int* rl=&randomline;
        int* rc=&randomcoll;
        if (isenemy[rl][rc] == false)
        {
            isenemy[rl][rc] = true;
            enemyset++;
        }
    }
}

