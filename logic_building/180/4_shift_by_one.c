// Rotate Left: Shift all elements left by 1. First element goes to last.

#include <stdio.h>

int main(void){

    int arr[] = {1,2,3,4,5,6};
    int count = sizeof(arr)/sizeof(arr[0]);

    int last = arr[count - 1];
    for(int i = count-1; i > 0; --i){
        arr[i] = arr[i-1];
    }
    arr[0] = last;
    for(int i = 0; i < count; ++i)printf("%d ",arr[i]);
}
