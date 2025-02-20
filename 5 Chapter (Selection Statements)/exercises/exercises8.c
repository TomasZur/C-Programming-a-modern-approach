#include <stdio.h>
#include <stdbool.h>

int main()
{

    int age = 15;
    int teenager;


    /*if (13 <= age <= 19) Asmeniskai tai taip daryciau
    {
        teenager = true;
    }
    else
    {
        teenager = false;
    }*/

    teenager = (13 <= age && age <=19) ? 1 : 2;

    printf("%d",teenager);
    return 0;
}