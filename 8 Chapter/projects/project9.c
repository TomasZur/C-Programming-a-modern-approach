#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GRID_SIZE 10

int main()
{

    bool in_grid[GRID_SIZE][GRID_SIZE] = {false};
    bool direction[4] = {false};
    bool moved = false;
    int x = 0, y = 0, i, j, random;

    int letter = 'A';

    char grid[GRID_SIZE][GRID_SIZE];

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            grid[i][j] = '.';
        }
    }

    i = 65;
    srand((unsigned)time(NULL));

    while (letter <= 'Z')
    {
        
        if (!in_grid[x][y])
        {
            in_grid[x][y] = true;
            grid[x][y] = letter;
            letter++;
        }

        random = rand() % 4;

        moved=false;
        switch (random)
        {
        case 0:
            if (x > 0 && !in_grid[x - 1][y])
            {
                x--; // Left
                moved=true;
            }else{
                direction[0]=true;
            }
            break;
        case 1:
            if (y < 9 && !in_grid[x][y+1])
            {
                y++; // Down
                moved=true;
            }else{
                direction[1]=true;
            }
            break;
        case 2:
            if (x < 9 && !in_grid[x+1][y])
            {
                x++; // Right
                moved=true;
            }else{
                direction[2]=true;
            }
            break;
        case 3:
            if (y != 0 && !in_grid[x][y-1])
            {
                y--; // Up
                moved=true;
            }else{
                direction[3]=true;
            }
            break;
        }
        if (moved)
        {
            for (j = 0; j < 4; j++)
            {
                direction[j] = false;

            }
        }
        if (direction[0] == true && direction[1] == true && direction[2] == true && direction[3] == true)
        {
            printf("im stuck\n");
            letter=100;
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf(" %c ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}