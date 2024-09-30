#include <stdio.h>

int main()
{

    int n = 1, i, fact;
    fact = 1;

    float e = 1.0,term,term_user;

    printf("Enter a term (0.x): ");
    scanf("%f", &term_user);


    for (i = 1;; i++)
    {
        fact *= i;
        term= 1.0 / fact;
        e+=term;
        if(term<term_user){
            break;
        }
    }

    printf("e= %f", e);
    printf("term= %f", term);
    printf("term_user= %f", term_user);
    return 0;
}