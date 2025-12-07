// Toggle Case: Convert 'a' to 'A' and 'A' to 'a' in a string.

#include <stdio.h>
#include <ctype.h>

int main(void){

    char str[] = "This Is Truly The One And Only!";

    int i = 0;
    while(str[i] != '\0'){
        if(isalpha(str[i]) != 0){
            if(isupper(str[i]) == 0){
                str[i] = str[i] - 'a' + 'A';
            }
            else{
                str[i] = str[i] + 'a' - 'A';
            }
        }
        ++i;
    }
    printf("%s",str);

}