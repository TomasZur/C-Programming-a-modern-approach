// 1 uzduotis
/*
What output do the following calls of printf produce? 
(a) printf("%6d,%4d", 86, 1040); 
(b) printf ("%12.5e” , 30.253); 
(c) printf ("%.4f" , 83.162) ; 
(d) printf ("%-6.2g" , .0000009979);
*/
#include <stdio.h>

int main()
{
    printf("|%6d,%4d|", 86, 1040);
    printf ("%12.5e|" , 30.253); 
    printf ("%.4f|" , 83.162) ;
    printf ("%-6.2g|" , .0000009979);

    return 0;
}