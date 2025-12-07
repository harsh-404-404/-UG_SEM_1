// Capitalize Words: Capitalize the first letter of every word.


#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char str[] = "this is very nice right?";
    int count = strlen(str);
    str[0] = toupper(str[0]);
    
    int i = 1;
    while (i < count){
        if (str[i-1] == ' '){
            str[i] = toupper(str[i]);
        }
        ++i;
    }
    printf("%s",str);

}