// Array Rotation: Rotate array right by K positions using the "Reversal Algorithm" (Reverse whole, reverse parts).
// Input: [1, 2, 3, 4, 5], K=2 -> Output: [4, 5, 1, 2, 3].

#include <stdio.h>
#include <string.h>

void rev(int* start,int count){
    int itration = count/2;
    for(int i = 0; i < itration; ++i){
        int temp = start[i];
        start[i] = start[count-i-1];
        start[count-i-1] = temp;

    }
    return;
}

int main(void){

    int arr[] = {1,2,3,4,5};
    int count = sizeof(arr)/sizeof(arr[0]);
    int n = 2;

    rev(arr,count);
    rev(arr,n);
    rev(&arr[n],count-n);

    for(int i = 0; i < count; ++i){
        printf("%d ",arr[i]);
    }

}
