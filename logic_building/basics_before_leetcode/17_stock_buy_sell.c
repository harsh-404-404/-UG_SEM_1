// Stock Buy/Sell
// Goal: Maximize single transaction profit.(investments like stocks, find the lowest purchase price and the highest subsequent)
// Constraint: O(N) time.
// Input: [7, 1, 5, 3, 6, 4] -> Output: 5.

#include <stdio.h>

int main(void){

    //exact questin no 11_max_diffrence
    int arr[] = {7,1,5,3,6,4};
    int count = sizeof(arr)/sizeof(arr[0]);

    int min = arr[0];
    int max_diff = arr[1] - arr[0];
    for(int i = 1; i < count; ++i){
        if(arr[i] - min > max_diff){
            max_diff = arr[i] - min;
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d",max_diff);
    
}