// Remove Spaces: Remove all spaces from a string (shift chars left).


#include <stdio.h>
#include <string.h>

int main(void){

    char str[] = "This is very nice";
    int count = strlen(str);

    int i = 0;
    int shift = 0;
    while(i < count+1){
        if(str[i] == ' '){
            shift++;
            ++i;
            continue;
        }
        str[i-shift] = str[i];
        ++i;
    }
    printf("%s",str);

}