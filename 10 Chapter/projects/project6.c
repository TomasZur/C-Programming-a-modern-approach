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
    int num,operand1=0,operand2,result;
    char operator;
    
    printf("Enter an RPN Expression: \n");
    do{
        
        scanf(" %c",&ch);
        if(ch>='1' && ch<='9'){
            //printf("I wokr");
            num=ch-'0';
            //printf("Number->%d\n",num);
            push(num);
        }
        if(ch=='+'){
            operand1=pop();
            operand2=pop();
            result=operand2+operand1;
            //printf("int1->%d,int2->%d,result->%d\n",operand1,operand2,result);
            push(result);
        }else if(ch=='-'){
            operand1=pop();
            operand2=pop();
            result=operand2-operand1;
            push(result);
        }else if(ch=='*'){
            operand1=pop();
            operand2=pop();
            result=operand2*operand1;
            push(result);
        }else if(ch=='/'){
            operand1=pop();
            operand2=pop();
            result=operand2/operand1;
            push(result);
        }else if(ch=='='){
            result=pop();
            printf("Value->%d\n",result);
            make_empty();
            printf("Enter an RPN Expression: \n");
        }

    }while(ch!='q');
    
   
    
    return 0;
}