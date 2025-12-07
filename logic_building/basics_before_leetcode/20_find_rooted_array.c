// Search Rotated Sorted Array
// Goal: Find target in [4, 5, 6, 7, 0, 1, 2].
// Constraint: O(log N) time. Modified Binary Search.
//https://www.youtube.com/watch?v=QdVrY3stDD4

#include <stdio.h>


int main(void){

    int arr[] =  {4,5,6,7,0,1,2};
    int count = sizeof(arr)/sizeof(arr[0]);
    int target = 7;

    int start = 0;
    int end = count - 1;

    //modified binory search to find minimum value in array(minimum value is the point from the array was rotated)
    while(start < end){  //when start = end that means that value is mimnimum and we will exit the loop
        int mid = start + (end - start)/2;
        if(arr[mid] > arr[end]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    
    if(target >= arr[end] && target <= arr[count - 1]){
        end = count - 1;
    }
    else{
        start = 0;
        end--;
    }
    w
    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == target){
            printf("Target found at index %d", mid);
            return 0;
        }
        if(target > arr[mid]){
            start = ++mid;
        }
        else{
            end = --mid;
        }
    }
    printf("Target not found");
}