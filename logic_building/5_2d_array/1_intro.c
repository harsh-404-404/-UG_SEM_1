#include <stdio.h>


int main(void){

    int array[3][3];

    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; ++j){
            printf("enter a number:");
            scanf("%d",&array[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; ++j){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }

}