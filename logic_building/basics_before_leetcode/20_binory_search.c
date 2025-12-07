// Binary Search.

#include <stdio.h>

int main(void){

    int arr[] = {0,1,3,4,5,8,7,9};
    int count = sizeof(arr)/sizeof(arr[0]); 
    int target = 0;

    int low = 0,high = count-1;
    while(low <= high){

        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            printf("Target found at index %d", mid);
            return 0;
        }
        else if(target > arr[mid]){
            low = mid + 1;
        }
        else if(target < arr[mid]){
            high = mid - 1;
        }

    }
    printf("Target not found");
    return 1;
}