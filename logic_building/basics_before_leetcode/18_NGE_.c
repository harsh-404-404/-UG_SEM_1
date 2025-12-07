// Next Greater Element
// Goal: Find first greater element on right.
// Constraint: O(N) time using a Stack.
// Input: [4, 5, 2, 25] -> Output: 5, 25, 25, -1.
//https://www.geeksforgeeks.org/dsa/next-greater-element/


#include <stdio.h>

int main(void){

    int arr[] = {6,8,0,1,3};
    int count = sizeof(arr)/sizeof(arr[0]);

    int result[count];
    for(int i = 0; i < count; ++i) result[i] = -1;

    int stack[count];
    int s = -1;

    for(int i = count -1; i >= 0; --i){

        while(s >= 0 && arr[i] >= stack[s]){
            s--;
        }
        if (s >= 0) result[i] = stack[s];
        else result[i] = -1;
        stack[++s] = arr[i];
        
    }




    for(int i = 0; i < count; ++i){
        printf("%d ",result[i]);
    }
}