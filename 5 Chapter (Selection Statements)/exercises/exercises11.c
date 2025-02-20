#include <stdio.h>

int main()
{

    int city;

    printf("Enter city code ");
    scanf("%d", &city);


    switch (city)
    {
    case 229:
        printf("Albany");
        break;
    case 404:
    case 470:
    case 678:
    case 770:
        printf("Atlanta");
        break;
    case 478:
        printf("Macon");
        break;
    case 706:
    case 762:
        printf("Columbus");
        break;
    case 912:
        printf("Savannah");
        break;
    }

    return 0;
}