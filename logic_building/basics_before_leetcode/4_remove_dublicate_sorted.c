// Duplicate Removal

// Goal: Remove duplicates from sorted array in-place.

// Constraint: O(N) time, O(1) space. Return new length.

// Input: [1, 1, 2, 2, 3] -> Output: Length 3, Arr [1, 2, 3]

#include <stdio.h>


int main(void){

    int arr[] = {1,1,2,3,4,4,4,5,6};
    int count = sizeof(arr)/sizeof(arr[0]);

    int dublicate = 0;
    for (size_t i = 0; i < count-1; ++i){
        if(arr[i] == arr[i+1]){
            dublicate++;
        }
    }
    printf("size of array after removing dublicates %d",count-dublicate);

}