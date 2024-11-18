#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);

bool equal_array (int counts1[26],int counts2[26]);

int main(){

    int word1[26]={0};
    int word2[26]={0};
    
    printf("Enter the first word: ");
    read_word(word1);

    printf("Enter the second word: ");
    read_word(word2);

    if(equal_array(word1,word2)==true){
        printf("The words are anagrams");
    }else{
        printf("The words are not anagrams");
    }
    
    return 0;

}

void read_word(int counts[26]){

    char ch;

    do{
        ch=getchar();

        while(isalpha(ch)==0){
            if(ch=='\n'){
                break;
            }
            ch=getchar();
        }

       ch=tolower(ch);
        counts[ch-97]++;

    }while(ch!='\n');
}

bool equal_array (int counts1[26],int counts2[26]){
    int i=26;
    int j;

    for(int j=0;j<i;j++){
        if(counts1[j]!=counts2[j]){
            return false;
            
        }
    }
    return true;

}