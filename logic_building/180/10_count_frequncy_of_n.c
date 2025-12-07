// Frequency of X: Count how many times X appears in the array.

#include <stdio.h>

int main(void){

    int arr[] = {1,2,3,4,5,6,7,8,1,2,4,5,5,4,5,4,7,6,2,2,5,1,2,6,5,4,8};
    int count = sizeof(arr)/sizeof(arr[0]);
    int x = 2,frequency = 0;
    for(int i = 0; i < count; ++i){
        if(arr[i] == x){
            frequency++;
        }
    }
    printf("%d shows up in the array %d times",x,frequency);
}