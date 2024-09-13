#include <stdio.h>
// 1 Projektas

/*
int main()
{
    int month, day, year;
    
    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date %d%.2d%.2d", year, month, day);

    return 0;

}
*/

// 2 Projektas

/*
int main()
{
    int item_number, month, day, year;

    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter a date (mm/dd/yyyy) : ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");
    printf("%d\t$ %.2f\t%d%.2d%.2d",item_number, unit_price, year, month, day);
    

    return 0;
    // Čia gal reikėtų double tab, kad būtų panašu į knygos output, bet gerai ir taip
}
*/

// 3 Projektas

/*
int main()
{
    int prefix, id, publisher_code, item_number, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &prefix, &id, &publisher_code, &item_number, &check);
    printf("GS prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d",
    prefix, id, publisher_code, item_number, check);

    return 0;
    
}
*/

// 4 Projektas

/*
int main()
{
    int a, b, c;

    printf("Enter a hpone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &a, &b, &c);
    printf("You entered %d.%d.%d", a, b, c);

    return 0;
    
}
*/

// 5 Projektas

int main(){



    int id1, id2, id3, id4, id5, id6, id7, id8, id9, id10, id11, id12, id13, id14, id15, id16;

    int row_sum, column_sum, diagonal_sum;

    printf("Enter the number from 1 to 16 in any order: ");

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
    &id1, &id2, &id3, &id4, &id5, &id6, &id7, &id8, &id9, &id10, &id11, &id12, &id13, &id14, &id15, &id16);

    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d",
    id1, id2, id3, id4, id5, id6, id7, id8, id9, id10, id11, id12, id13, id14, id15, id16);

    int i;
    printf("Row sums: ");
    for (i = 0; i < 4; i++){

        row_sum = id1+id2+id3+id4;
        
    }
    





    return 0;


}


