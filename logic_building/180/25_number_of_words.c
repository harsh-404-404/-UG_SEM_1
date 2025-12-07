// Count Words: Count the number of words in a string (split by spaces).

#include <stdio.h>
#include <ctype.h>

int main(void){

    char string[] = " This is it";
    int i = 1,word = 0;

    while (string[i] != '\0'){
        if((string[i+1] == ' ' || string[i+1] == '\0') && isalpha(string[i]) != 0){
            word++;
        }
        ++i;
    }
    printf("%d",word);
    

}