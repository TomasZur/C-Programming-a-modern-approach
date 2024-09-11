#include <stdio.h>
#define FREEZING_PT 32.0
#define SCALE_FACTOR (5.0 / 9.0)

int main()
{
    float f, c;

    printf("Enter the temperature in fahrenheit: \n");
    scanf("%f", &f);

    c= (f - FREEZING_PT) * SCALE_FACTOR;

    printf("The temperature in celsius is: %.1f\n", c);

    return 0;

}