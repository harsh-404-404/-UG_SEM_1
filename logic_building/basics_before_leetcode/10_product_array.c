// Product Array Puzzle
// Goal: Prod[i] = product of all elements except Arr[i].
// Constraint: No Division Operator. Use Prefix and Suffix product arrays.
// Input: [1, 2, 3, 4] -> Output: [24, 12, 8, 6].

#include <stdio.h>

int main(void){

    int arr[] = {1,2,3,4};
    int count = sizeof(arr)/sizeof(arr[0]);
    long long result[count];

    int left = 1;
    for(int i = 0; i < count; ++i){
        result[i] = left;
        left *= arr[i];
    } 

    int right = 1;
    for(int i = count-1; i >= 0; --i){
        result[i] *= right;
        right *= arr[i];
    }

    for(int i = 0; i < count; ++i){
        printf("%d ",result[i]);
    }

}