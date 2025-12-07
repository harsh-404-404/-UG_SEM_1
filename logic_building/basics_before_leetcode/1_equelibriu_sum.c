// Equilibrium Index: Find index i such that sum of elements to its left equals sum of elements to its right.
// Input: [-7, 1, 5, 2, -4, 3, 0] -> Output: 3 (Left sum -1, Right sum -1).

#include <stdio.h>

int main(void){

    int arr[] = {-7,1,5,2,-4,3,0};
    int count = sizeof(arr)/sizeof(int);
    
    int right = 0;
    for(size_t i = 2; i < count; ++i){
        right += arr[i];
    }

    int left = arr[0];
    for(size_t i = 1; i < count-1; ++i){ 
        if (left == right){
            printf("Equilibrium index is %zu",i);
            return 0;
        }  
        else{
            left += arr[i];
            right -= arr[i+1];
        }
    }
    printf("No equlibrium index found!");

}