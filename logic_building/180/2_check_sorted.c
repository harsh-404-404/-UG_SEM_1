// Check Sorted: Write a function that returns 1 if array is sorted, 0 otherwise.

#include <stdio.h>

int main(void){

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 1; i < n; ++i){
        if(arr[i] < arr[i-1]){
            printf("Array is not sorted!");
            return 1;
        }
    }
    printf("array is sorted");
    return 0;

}