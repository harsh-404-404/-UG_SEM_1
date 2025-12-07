// Rotate Right: Shift all elements right by 1. Last element goes to first.

#include <stdio.h>

int main(void){

    int arr[] = {1,2,3,4,5,6};
    int count = sizeof(arr)/sizeof(arr[0]);

    int last = arr[0];
    for(int i = 0; i < count - 1; ++i){
        arr[i] = arr[i+1];
    }
    arr[count - 1] = last;
    for(int i = 0; i < count; ++i)printf("%d ",arr[i]);
}
