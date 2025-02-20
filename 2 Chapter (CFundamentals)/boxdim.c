#include <stdio.h>
#define CUBIC_IN_PER_LB 166
#define SCALE_FACTOR (5.0 / 9.0) /*Jei yra operatorius, jis turi būti skliaustuose*/



int main()
{
  
    int height, length, width, volume, weight;
    

/*
    height = 8;
    length = 12;
    width = 10;

    volume = height*length*width; 
    weight = (volume+165)/166;

    printf("Dimensions: %dx%dx%d\n", length,width,height);
    printf("Volume: %d\n", volume);
    printf("Dimensional weight %d\n", weight);

    printf("Skaiciavimas: %d", (volume+volume)/volume);
*/

    printf("Enter the length of the box: ");
    scanf("%d", &length);
    printf("Enter the width of the box: ");
    scanf("%d", &width);
    printf("Enter the heigth of the box: ");
    scanf("%d", &height);

    volume = height*length*width;
    weight = (volume+CUBIC_IN_PER_LB-1)/166;

    printf("volume: %d\n", volume);
    printf("weight: %d\n", weight);
    

   return 0;
}