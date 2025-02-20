#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main()
{
    int dice1, dice2, i = 1;
    bool question = true;
    srand((unsigned)time(NULL));

    do
    {
        printf("Game %d\n", i);
        question = play_game();
        i++;
    } while (question == true);

    return 0;
}

int roll_dice(void)
{
    int dice;

    dice = rand() % 6 + 1;

    return dice;
}

bool play_game(void)
{
    int dice1, dice2, sum = 0, point = 0;
    bool first_roll = true;
    char question = 0;
    do
    {
        dice1 = roll_dice();
        dice2 = roll_dice();
        sum = dice1 + dice2;
        printf("You rolled: %d\n", sum);
        if (first_roll == true)
        {
            if (sum == 7 || sum == 11)
            {
                printf("You win!\n\n");
                printf("Play again? Y/N");
                scanf(" %c", &question);
            }
            if (sum == 2 || sum == 3 || sum == 12)
            {
                printf("You lose!\n\n");
                printf("Play again? Y/N");
                scanf(" %c", &question);
            }
        }
        else
        {
            if (sum == point)
            {
                printf("You win!\n\n");
                printf("Play again? Y/N");
                scanf(" %c", &question);
            }
            if (sum == 7)
            {
                printf("You lose!\n\n");
                printf("Play again? Y/N");
                scanf(" %c", &question);
            }
        }

        first_roll = false;
        point = sum;

    } while (question == 0);
    if (question == 'Y' || question == 'y')
    {
        return true;
    }
    if (question == 'N' || question == 'n')
    {
        return false;
    }
}