#include <stdio.h>
#include <math.h>

int main()
{

    double x, y, avg;

    y = 1;

    printf("Enter a number: ");
    scanf("%lf", &x);

    for (;;)
    {
        
        avg = (y + (x / y)) / 2;
        if (fabs((y - avg)) < fabs((0.00001 * y)))
        {
            printf("y=%.3lf",avg);
            
            return 0;
        }
        y = avg;
        //printf("y=%lf\n", y);
    }

    return 0;
}