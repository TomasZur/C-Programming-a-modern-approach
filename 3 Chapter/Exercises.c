#include <stdio.h>
// 1 uzduotis
/*
What output do the following calls of printf produce? 
(a) printf("%6d,%4d", 86, 1040); 
(b) printf ("%12.5e” , 30.253); 
(c) printf ("%.4f" , 83.162) ; 
(d) printf ("%-6.2g" , .0000009979);
*/
/*
#include <stdio.h>

int main()
{
    printf("|%6d,%4d|", 86, 1040);
    printf ("%12.5e|" , 30.253); 
    printf ("%.4f|" , 83.162) ;
    printf ("%-6.2g|" , .0000009979);

    return 0;
}
*/

// 2 uzduotis

/*

#include <stdio.h>

int main()
{
    float x = 900.10;

    printf("|%-8.1e|", x);

    printf("|%10.6e|", x);

    printf("|%-8.3f|", x);

    printf("|%6.0f|", x);

    return 0;
}
*/

// 3 uzduotis

/*
#include <stdio.h>

int main()
{

    int x,b,c;

    float z,e;

    //scanf("%d", &x);
    //scanf(" %d", &x); Pirmu variantu skirtumo nepadaro
    //printf("x = %d",x);

    //scanf("%d-%d-%d", &x, &b, &c); 
    //scanf("%d -%d -%d", &x, &b, &c); Antru variantu skirtumo irgi nepadaro
    //printf("x = %d,b = %d,c = %d",x,b,c);

    //scanf("%f", &z); 
    //scanf("%f ", &z); Trečiu variantu turi būti tarpas po skaičiaus kitaip nesibaigia programa
    //printf("z = %f",z);

    //scanf("%f,%f", &z, &e); 
    //scanf("%f, %f", &z, &e); Ketvirtu variantu skirtumo nepadaro
    //printf("z = %.2f, e=%.2f",z,e);
    
    return 0;
    // Jei tarpas yra po kintamojo kaip trečiame variante, tai reikia vartotojui jį įvesti

}
*/

// 4 ir 5 uzduotis 
// 4 uzduotis input 10.3 5 6
// 5 uzduotis input 12.3 45.6 789
//Manau bus netaisyklingos vertes kintamuju

/*
int main()
{
    

    int i,j;
    float x;

    scanf("%d%f%d", &i, &x, &j);
    printf("|%d|%f|%d|",i,x,j);
    return 0;
    

// Output: |10|0.300000|5|
// Esmė ta kad programa pamatė "." ir tada į atmintį įdėjo tašką ir ties su kitu kintamuoju kuris buvo float
// paemė tą tašką tai suprato, kad įvesta "0." ir tada paėmė kitą kintamąjį "3" 

// Output manau bus |12.3|45|0.6|

    

    int i;
    float x,y;

    scanf("%f%d%f", &x, &i, &y);
    printf("|%f|%d|%f|",x,i,y);
    return 0;

    

// Output |12.300000|45|0.600000|
}
*/
// 6 uzduotis

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter first fraction: ");
    scanf("%d / %d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;

    result_denom = denom1 * denom2;
    printf("The sum is %d/%d\n", result_num, result_denom);

    return 0;

}