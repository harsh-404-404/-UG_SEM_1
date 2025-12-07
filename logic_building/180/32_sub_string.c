// Find Substring: Return the index of the first occurrence of "the" in a sentence.

#include <stdio.h>
#include <string.h>

int main(void){

    char str[] = "This is the end as it";
    int count = strlen(str);

    for(int i = 1; i < count-1; ++i){

        if(str[i] == 'h' && str[i-1] == 't' && str[i+1] == 'e'){
            printf("%d",i-1);
            return 0;
        }

    }
    printf("No substring found!");
    return 1;
}