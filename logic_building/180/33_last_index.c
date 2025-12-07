// Last Occurrence: Find the last index of a specific character.

#include <stdio.h>
#include <string.h>

int main(void){

    char str[] = "This is fabulous";
    int count = strlen(str);

    char x = 's';
    for(int i = count-1; i >= 0; --i){
        if(str[i] == x){
            printf("%d", i);
            return 0;
        }
    }

}