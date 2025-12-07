// Find Missing Number: Array 1..N has one number missing.

#include <stdio.h>

int main(void){

    int arr[100];
    for(int i = 0; i < 100;++i){
        arr[i] = i +1; 
    }
    arr[68] = 0;

    for(int i = 1; i < 100; ++i){
        if(arr[i] != arr[i-1] + 1){
            printf("mising numner is %d",i-1);
            break;
        }
    }


}