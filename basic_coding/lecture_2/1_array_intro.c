#include <stdio.h>


int main(void){

    float arr[5];
    for(int i = 0; i < 5; ++i){
        printf("%d.Enter the a number: ",i+1);
        scanf("%f",&arr[i]);
    }

    for (int i = 0; i < 5;++i){
        printf("%g ",arr[i]);
    }
    
    return 0;


}