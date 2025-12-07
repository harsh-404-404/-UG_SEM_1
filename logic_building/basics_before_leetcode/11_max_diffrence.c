// Max Difference
// Goal: Find max(arr[j] - arr[i]) such that j > i.
// Constraint: O(N) time. Track min_element as you iterate.
// Input: [2, 3, 10, 6, 4, 8, 1] -> Output: 8.

#include <stdio.h>

int main(void){
    
    int arr[] = {2,3,10,6,4,8,1};
    int count = sizeof(arr)/sizeof(arr[0]);

    int min_so_far = arr[0];
    int max_diff = arr[1] - arr[0];
    for(int i = 1; i < count; ++i){
        if(arr[i] - min_so_far > max_diff){
            max_diff = arr[i] - min_so_far;
        }
        if( arr[i] < min_so_far){
            min_so_far= arr[i];
        }
    }
    printf("%d",max_diff);
}