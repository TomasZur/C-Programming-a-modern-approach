#include <stdio.h>
#include <ctype.h>

#define MAX_DIGITS 10;


void clear_digits_array(void);
void process_digit(int digit,int position);
void print_digits_array(void);


const int segments[10][7]={{1,1,1,1,1,1,0},{1,1,0,0,0,0,0},{1,1,0,1,1,0,1},{1,1,1,1,0,0,1},{0,1,1,0,0,1,1},{1,0,1,1,0,1,1},{1,0,1,1,1,1,1},{1,1,1,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1}};
char digits[4][4*MAX_DIGITS];

int main(){

    int digits;
    char ch;

    printf("Enter a number: ");
    do{
        ch=getchar();
        if(!isdigit(ch)){
            ch=getchar();
        }else{
            
        }

    }while(ch!='\n');

}