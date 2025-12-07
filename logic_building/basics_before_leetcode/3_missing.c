// Missing Number: Array of size N-1 has unique numbers 1..N. Find the missing one in O(N).
// Input: [1, 2, 4, 6, 3, 7, 8] (N=8) -> Output: 5.


#include <stdio.h>

int main(void){

    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int n = 11;
    int count = sizeof(arr)/sizeof(arr[0]);

    int sum_real = (n*(n+1))/2;
    int sum = 0;
    for(size_t i = 0; i < count;++i){
        sum += arr[i];
    }
    int diff = sum_real - sum;
    if(diff != 0)printf("missing number is: %d",diff);
    else printf("no missing number");



}