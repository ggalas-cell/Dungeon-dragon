#include <iostream>
#include "grid.h"

int difficulty()
{
    std::cout<<"Choisissez le niveau de difficulter (Easy(1)/Medium(2)/Hard(3)) :";
    std::cin>>grid->difficulty
    return difficulty;
}


void displaygrid(int line, int columns,int difficulty)
{
    system("cls");
    switch(difficulty)
    {
        case 1:
            line=9;
            columns=9;
            break;
        case 2:
            line=16;
            columns=16;
            break;
        case 3:
            line=30;
            columns=16;
            break;
        default:
            line = 9;
            columns=9;
    }

    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            std::cout<< "+---"
            
        }
    }
}
