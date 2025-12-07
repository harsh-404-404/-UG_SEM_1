// Insert Sorted: Insert a number X into a sorted array at the correct position.

#include <stdio.h>
#include <string.h>

int main(void){


    int arr[100] = {1,2,3,5,6,7};
    int x = 4,count = 6;

    int n,i = 0;
    while(i < count){
        if(arr[i] > x){
            n = i;
            break;
        }
        ++i;
    }
    if(i == count){
        n = count;
    }
    memmove(&arr[n+1],&arr[n],(count - n)*sizeof(int));
    arr[n] = x;
    count++;

    for(int i = 0; i < count; ++i){
        printf("%d ",arr[i]);
    }

}