#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(){

    int alphabet[26]={0};
    char ch;
    bool check=true;
    int i=26;
    
    printf("Enter the first word: ");
    do{
        ch=getchar();

        while(isalpha(ch)==0){
            if(ch=='\n'){
                break;
            }
            ch=getchar();
        }

       ch=tolower(ch);
        alphabet[ch-97]++;

    }while(ch!='\n');

    printf("Enter the second word: ");
    do{
        ch=getchar();

        while(isalpha(ch)==0){
            if(ch=='\n'){
                break;
            }
            ch=getchar();
        }

       ch=tolower(ch);
        alphabet[ch-97]--;

    }while(ch!='\n');

    for(int j=0;j<i;j++){
        if(alphabet[j]!=0){
            check=false;
            break;
        }
    }
    if(check==true){
        printf("The words are anagrams");
    }else{
        printf("The words are not anagrams");
    }
    
    return 0;

}