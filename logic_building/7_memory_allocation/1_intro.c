#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    float* numbers = calloc(10,sizeof(int));
    for(int i = 0; i < 10; ++i){
        printf("%d ",numbers[i]);
    }

    char* name = malloc(sizeof(char)*100);
    printf("\nEnter your name: ");
    scanf("%s",name);
    
    name = realloc(name,sizeof(int)*strlen(name)+1);

    printf("%s",name);

    free(numbers);
    free(name);

}