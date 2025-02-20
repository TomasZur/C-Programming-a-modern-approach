#include <stdio.h>
#include <ctype.h>

int main()
{

    int i, j, row_sum=0, column_sum, input;
    int cube[5][5];

    for (i = 0; i < 5; i++)
    {
        printf("Enter row %d: ", i + 1);
        for (j = 0; j < 5; j++)
        {
            scanf("%d",&input);            
            cube[i][j] = input;
        }
    }
    printf("Row totals: ");
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            row_sum=row_sum + cube[i][j];
        }
        printf("%d ",row_sum);
        row_sum=0;
    }
    printf("\n");
    printf("Column totals: ");
    for (j=0;j<5;j++){
        for (i=0;i<5;i++){
            row_sum=row_sum + cube[i][j];
        }
        printf("%d ",row_sum);
        row_sum=0;
    }

    return 0;
}