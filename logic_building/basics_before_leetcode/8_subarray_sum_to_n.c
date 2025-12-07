// Subarray Sum
// Goal: Find continuous subarray that adds up to target S.
// Constraint: O(N) time (Sliding Window). Handle non-negative numbers only.
// Input: [1, 4, 20, 3, 10, 5], S=33 -> Output: Indices 2 to 4.

#include <stdio.h>

int main(void){

    int arr[] = {1,4,20,3,10,5};
    int count = sizeof(arr)/sizeof(arr[0]);
    int s = 33,start = 0,end = 0;
    int sum = 0;

    for(int i = 0; i < count; ++i){
        sum += arr[i];

        while (sum > s && i >= start){
            sum -= arr[start];
            ++start;
        }
        
        if(sum == s){
            printf("start:%d\nend:%d\n", start, i);
            return 0;
        }
        
        
    }
    
    printf("no sum of sub array is %d",s);

}