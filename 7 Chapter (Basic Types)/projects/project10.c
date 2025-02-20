#include <stdio.h>

int main(){

    char ch;
    int count;

    printf("Enter a sentence: ");
    
    for(;;){
        ch=getchar();
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            count++;
        }else if(ch=='\n'){
            printf("There are %d vowels in the sentence",count);
            return 0;
        }
    }
}