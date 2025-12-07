// Frequency Count
// Goal: Count occurrences of each number.
// Constraint: Use a secondary "Hash Map" array (assuming elements are small integers < 1000).
// Input: [2, 3, 2, 5] -> Output: 2:2, 3:1, 5:1.

#include <stdio.h>

int main(void){

    int arr[] = {2,3,7,9};
    int count = sizeof(arr)/sizeof(arr[0]);
    int hash[1000];
    for(int i = 0; i < 1000; ++i){
        hash[i] = 0;
    }

    for(int i = 0;i < count;++i){
        ++hash[arr[i]];
    }
    for(int i = 0; i < 1000; ++i){
        if(hash[i] != 0){
            printf("\n\t%d : %d times",i,hash[i]);
        } 
    }
}