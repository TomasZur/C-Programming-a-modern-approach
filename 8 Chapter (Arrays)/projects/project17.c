#include <stdio.h>
#include <stdbool.h>

int main()
{

    int n;
    int number = 1;
    int row = 0;
    int column = 0;
    int remember_row = 0;
    int remember_column = 0;
    int sum=0;

    printf("Enter an odd number between 1 and 99: ");
    scanf("%d", &n);

    int square[n][n];

    bool in_square[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            in_square[i][j] = false;
        }
    }

    column = n / 2;

    if (n < 1 || 99 < n || n % 2 == 0)
    {

        printf("Incorrect");
        return 0;
    }

    square[row][column] = number;
    in_square[row][column] = true;
    do
    {

        row--;
        column++;

        if (row < 0)
        {
            row = n - 1;
        }
        if (column > n-1)
        {
            column = 0;
        }

        if (in_square[row][column] == true)
        {
            row = remember_row + 1;
            column = remember_column;
        }

        number++;

        square[row][column] = number;
        in_square[row][column] = true;

        remember_row = row;
        remember_column = column;

    } while (number != n * n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d   ", square[i][j]);
        }
        printf("\n");
    }
    /*printf("Row totals: ");
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            sum=sum + square[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
    printf("\n");
    printf("Column totals: ");
    for (int j=0;j<n;j++){
        for (int i=0;i<n;i++){
            sum=sum + square[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }*/

    return 0;
}