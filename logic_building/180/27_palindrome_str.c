// Palindrome: Check if a string is a palindrome (ignore case).

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){

    char arr[] = "meme";
    int count = strlen(arr);


    for(int i = 0; i < count/2;++i){

        if(toupper(arr[i]) != toupper(arr[count-1-i])){
            printf("Given string is not palindeome");
            return 1;
        }

    }
    printf("Given string is palendeome");

}