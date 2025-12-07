// Remove Char: Remove a specific character (e.g., remove all 'e's).

#include <stdio.h>
#include <string.h>

int main(void){

    char str[] = "This is very nice";
    int count = strlen(str);
    char remove = 'e';

    int i = 0;
    int shift = 0;
    while(i < count+1){
        if(str[i] == remove){
            shift++;
            ++i;
            continue;
        }
        str[i-shift] = str[i];
        ++i;
    }
    printf("%s",str);

}