// Unique Elements: Print only numbers that appear exactly once in the array.

#include <stdio.h>

int main(void){

    int arr[] = {1,2,3,4,7,9,4,5,6,2,1,3,4,59,2};
    int count = sizeof(arr)/sizeof(arr[0]);

    int hash[10000];

    for(int i = 0; i < 10000; ++i) hash[i] = 0; 

    for(int i = 0; i < count; ++i){
        hash[arr[i]]++;
    }
    
    for(int i = 0; i < 10000; ++i){
        if(hash[i] == 1){
            printf("%d ", i);
        }
    } 

}