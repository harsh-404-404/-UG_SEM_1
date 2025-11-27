#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    float* numbers = calloc(10, sizeof(float)); 
    for(int i = 0; i < 10; ++i){
        printf("%g ",numbers[i]); 
    }

    char* name = malloc(sizeof(char)*100);
    printf("\nEnter your name: ");
    scanf("%s", name);
    name = realloc(name, sizeof(char)*(strlen(name)+1)); 

    printf("Hello,%s",name);

    free(numbers);
    free(name);

}