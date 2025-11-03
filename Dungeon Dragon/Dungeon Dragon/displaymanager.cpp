#include "displaymanager.h"
#include <iostream>

void displaygrid(int line, int columns, int diff)
{
    system("cls");
    switch (diff)
    {
    case 1:
        line = 9;
        columns = 9;
        break;
    case 2:
        line = 16;
        columns = 16;
        break;
    case 3:
        line = 30;
        columns = 16;
        break;
    default:
        line = 9;
        columns = 9;
    }

    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << "+---";

        }
        std::cout << "+";
        for (int j = 0; j < columns; j++)
        {
            std::cout << "";

        }
    }
}
