#include <stdio.h>


int main(void){

    float arr[5],avg = 0;
    for(int i = 0; i < 5; ++i){
        printf("%d.Enter the a number: ",i+1);
        scanf("%f",&arr[i]);
        avg += arr[i];
    }
    avg /= 5;
    for (int i = 0; i < 5;++i){
        if (avg < arr[i]){
            printf("%g ",arr[i]);
        }
    }
    return 0;


}