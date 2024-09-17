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

int main()
{

    int arr_id[15];

    int id1, id2, id3, id4, id5, id6, id7, id8, id9, id10, id11, id12, id13, id14, id15, id16;

    int column_sum[3], diagonal_su[1];

    int row_sum[3];

    printf("Enter the number from 1 to 16 in any order: ");

    /*scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
    &id1, &id2, &id3, &id4, &id5, &id6, &id7, &id8, &id9, &id10, &id11, &id12, &id13, &id14, &id15, &id16);

    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d",
    id1, id2, id3, id4, id5, id6, id7, id8, id9, id10, id11, id12, id13, id14, id15, id16);
    */

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
          &arr_id[0], &arr_id[1], &arr_id[2], &arr_id[3], &arr_id[4], &arr_id[5], &arr_id[6], &arr_id[7], &arr_id[8], &arr_id[9], &arr_id[10], &arr_id[11], &arr_id[12], &arr_id[13], &arr_id[14], &arr_id[15]);

    int i, j;

    /*for (i = 0; i <= 15; i++) {
        printf("%d\n", arr_id[i]);
    }

    for (i = 0; i < 4; i++) {

        row_sum = row_sum + arr_id[i];

        if(i==3){
            printf("Row sum: %d\n", row_sum);
        }

    }*/

    for (i = 0; i < 4; i++)
    {
        row_sum[i] = 0;
        for (j = 0; j < 4; j++)
        {
            if (i == 0)
            {
                row_sum[i] = row_sum[i] + arr_id[j];
            }
            if (i == 1)
            {
                row_sum[i] = row_sum[i] + arr_id[j + 4];
            }
            if (i == 2)
            {
                row_sum[i] = row_sum[i] + arr_id[j + 8];
            }
            if (i == 3)
            {
                row_sum[i] = row_sum[i] + arr_id[j + 12];
            }
            if (j == 3)
            {
                printf("Row%d sum: %d\n", i + 1, row_sum[i]);
            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        row_sum[i] = 0;
        for (j = 0; j <= 12; j = j + 4)
        {

            if (i == 0)
            {

                row_sum[i] = row_sum[i] + arr_id[j]; // [0] [4] [8] [12]
            }
            if (i == 1)
            {
                row_sum[i] = row_sum[i] + arr_id[j + 1]; // [1] [5] [9] [13]
            }
            if (i == 2)
            {
                row_sum[i] = row_sum[i] + arr_id[j + 2]; // [2] [6] [10] [14]
            }
            if (i == 3)
            {
                row_sum[i] = row_sum[i] + arr_id[j + 3]; // [3] [7] [11] [15]
            }
            if (j == 12)
            {
                printf("column%d sum: %d\n", i + 1, row_sum[i]);
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        row_sum[i] = 0;
        if (i == 0)
        {
            for (j = 0; j <= 15; j = j + 5)
            {
                row_sum[i] = row_sum[i] + arr_id[j]; // [3] [6] [9] [12]
            }
            printf("diagnonal%d sum: %d\n", i + 1, row_sum[i]);
        }
        else
        {
            for (j = 3; j <= 12; j = j + 3)
            {
                row_sum[i] = row_sum[i] + arr_id[j]; // [3] [6] [9] [12]
            }
            printf("diagnonal%d sum: %d\n", i + 1, row_sum[i]);
        }
    }
    return 0;
}
