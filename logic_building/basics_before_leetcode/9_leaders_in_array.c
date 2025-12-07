// Leaders in Array
// Goal: Print element if it > all elements to its right.
// Hint: Scan from right to left, keeping track of max_so_far.
// Input: [16, 17, 4, 3, 5, 2] -> Output: 17, 5, 2.

#include <stdio.h>

int main(void){

    int arr[] = {16,17,4,3,5,2};
    int count = sizeof(arr)/sizeof(arr[0]);
    int max = arr[count];

    for(int i = count-1; i >= 0; --i){
        if(arr[i] >= max){
            max = arr[i];
            printf("%d ",max);
        }
    }

}