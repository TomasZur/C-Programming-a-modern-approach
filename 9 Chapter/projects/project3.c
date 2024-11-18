#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GRID_SIZE 10

void generate_random_walk(char walk[GRID_SIZE][GRID_SIZE]);
void print_array(char walk[GRID_SIZE][GRID_SIZE]);

int main()
{

    

    char grid[GRID_SIZE][GRID_SIZE];
    generate_random_walk(grid);
    print_array(grid);

    
    return 0;
}

void generate_random_walk(char walk[GRID_SIZE][GRID_SIZE])
{
    bool in_grid[GRID_SIZE][GRID_SIZE] = {false};
    int i,j,random;
    int x=0;
    int y=0;
    int letter='A';
    bool direction[4] = {false};
    bool moved = false;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            walk[i][j] = '.';
        }
    }

    i = 65;
    srand((unsigned)time(NULL));

    while (letter <= 'Z')
    {

        if (!in_grid[x][y])
        {
            in_grid[x][y] = true;
            walk[x][y] = letter;
            letter++;
        }

        random = rand() % 4;

        moved = false;
        switch (random)
        {
        case 0:
            if (x > 0 && !in_grid[x - 1][y])
            {
                x--; // Left
                moved = true;
            }
            else
            {
                direction[0] = true;
            }
            break;
        case 1:
            if (y < 9 && !in_grid[x][y + 1])
            {
                y++; // Down
                moved = true;
            }
            else
            {
                direction[1] = true;
            }
            break;
        case 2:
            if (x < 9 && !in_grid[x + 1][y])
            {
                x++; // Right
                moved = true;
            }
            else
            {
                direction[2] = true;
            }
            break;
        case 3:
            if (y != 0 && !in_grid[x][y - 1])
            {
                y--; // Up
                moved = true;
            }
            else
            {
                direction[3] = true;
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
            letter = 100;
        }
    }
}

void print_array(char walk[GRID_SIZE][GRID_SIZE])
{

    int i, j;

    for (i = 0; i < GRID_SIZE; i++)
    {
        for (j = 0; j < GRID_SIZE; j++)
        {
            printf(" %c ", walk[i][j]);
        }
        printf("\n");
    }
}