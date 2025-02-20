#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];

int top = 0;
void stack_overflow()
{
   printf("Stack Overflow! The program will crash!");
   exit(1); //this function exits the program. It is defined in stdlib.h
}
void stack_underflow()
{
   printf("Stack underflow! The program will crash!");
   exit(1); //this function exits the program. It is defined in stdlib.h
}

void make_empty(void)
{
    top = 0;
}
bool is_empty(void)
{
    return top == 0;
}
bool is_full(void)
{
    return top == STACK_SIZE;
}
void push(char ch)
{
    if (is_full())
    {
        stack_overflow();
    }
    else
    {
        contents[top++] = ch;
    }
}

char pop(void)
{
    if (is_empty())
    {
        stack_underflow();
    }
    else
    {
        return contents[--top];
    }
}

int main()
{
    char ch;
    bool check;
    printf("Enter partheses and or braces: ");
    do
    {
        ch = getchar();
        if (ch == '{' || ch == '(')
        {
            push(ch);
        }
        if (ch == '}' || ch == ')')
        {
            char temp = pop();
            if (temp=='{' && ch == '}' || temp=='(' && ch==')')
            {
             
            }
            else
            {
                printf("Its not nested properly");
                return 0;
            }
        }
    } while (ch != '\n');

    check=is_empty();
    
    if (is_empty())
    {
        printf("Nested");
    }
    else
    {
        printf("Not nested");
    }
    return 0;
}