// Move Negatives: Move all negative numbers to the left side of the array.

#include <stdio.h>

int main(void){
    
    int arr[] = {-1,2,3,-8,-1};
    int count = sizeof(arr)/sizeof(arr[0]);
    int last_negative = 0;

    for(int i = 0; i < count; ++i){
        if(arr[i] < 0){
            int temp = arr[last_negative];
            arr[last_negative++] = arr[i];
            arr[i] = temp;
        }
    }
    for(int i = 0; i < count; ++i){
        printf("%d ",arr[i]);
    }
}