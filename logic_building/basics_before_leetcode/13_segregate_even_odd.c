// Segregate Even/Odd
// Goal: Put evens first, then odds.
// Constraint: O(N) time. Two-pointer approach (start and end).
// Input: [12, 34, 45, 9, 8, 90] -> Output: [12, 34, 8, 90, 45, 9].


#include <stdio.h>

int main(void){

    int arr[] = {12,34,45,9,8,90};
    int count = sizeof(arr)/sizeof(arr[0]);

    int i = 0,first_odd = -1;
    while (i < count && arr[i] % 2 == 0){
        i++;
    }
    if(i == count){
        return 0;
    }
    first_odd = i;
    i++;
    while(i < count){
        if(arr[i] % 2 == 0){
            int temp = arr[i];
            arr[i] = arr[first_odd];
            arr[first_odd] = temp;
            first_odd++;
        }
        i++;
    }

    for(int i = 0; i < count;++i){
        printf("%d ",arr[i]);
    }
}