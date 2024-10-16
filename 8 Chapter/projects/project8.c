#include <stdio.h>
#include <ctype.h>

int main()
{

    int i, j, row_sum=0,average,total, column_sum, input,min=100,max=0;
    int cube[5][5];

    for (i = 0; i < 5; i++)
    {
        printf("Enter Students quiz scores %d: ", i + 1);
        for (j = 0; j < 5; j++)
        {
            scanf("%d",&input);            
            cube[i][j] = input;
        }
    }
    printf("Student totals/avg: ");
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            row_sum=row_sum + cube[i][j];
            
            
        }
        average=row_sum/5;
        printf("%d/%d ",row_sum,average);
        row_sum=0;
    }
    printf("\n");
    printf("Quizs totals/avg: ");
    for (j=0;j<5;j++){
        for (i=0;i<5;i++){
            row_sum=row_sum + cube[i][j];
            if(cube[i][j]<min){
                min=cube[i][j];
            }else if(cube[i][j]>max){
                max=cube[i][j];
            }
        }
        average=row_sum/5;
        printf("%d/%d ",row_sum,average);
        row_sum=0;
    }
    printf("\nLowest quiz score: %d\nHighest quiz score: %d",min,max);

    return 0;
}