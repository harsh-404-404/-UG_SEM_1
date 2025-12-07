// Majority Element.
// Goal: Find element appearing > N/2 times.
// Constraint: O(N) time, O(1) space. Boyer-Moore Voting Algo.
// Input: [3, 3, 4, 2, 4, 4, 2, 4, 4] -> Output: 4.
//https://www.youtube.com/watch?v=gY-I8uQrCkk

#include <stdio.h>

int main(void){

    int arr[] = {3 ,3 , 4, 2, 4, 4, 2, 4, 4};
    int count = sizeof(arr)/sizeof(arr[0]);

    int candidate = 0, vote = 0;
    for(int i = 0; i < count; ++i){
        if(vote == 0){
            candidate = arr[i];
            vote++;
        }
        else if(candidate != arr[i]){
            vote--;
        }
        else vote++;
    }
    printf("%d",candidate);

}