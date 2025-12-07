// Replace Char: Replace all spaces with underscores _.

#include <stdio.h>
#include <string.h>

int main(void){

    char str[] = "This is fabulous";
    int count = strlen(str);

    for(int i = 0; i < count; ++i){
        if(str[i] == ' '){
            str[i] = '_';
        }
    }
    printf("%s",str);
}