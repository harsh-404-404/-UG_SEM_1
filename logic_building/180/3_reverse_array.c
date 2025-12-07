// Reverse Array: Reverse an array in-place (using swaps, not a second array).

#include <stdio.h>

int main(void){

    int arr[] = {1,2,3,4,5,6};
    int count = sizeof(arr)/sizeof(arr[0]);

    int n = count/2;
    for(int i = 0; i < n; ++i){
        int temp = arr[i];
        arr[i] = arr[count-1-i];
        arr[count -1 -i] = temp;
    }
    for(int i = 0; i < count; ++i) printf("%d ",arr[i]);


}