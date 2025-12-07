// Count Peaks: Count elements that are larger than both their neighbors.

#include <stdio.h>

int  main(void){

    int arr[] = {12,7,6,45,4,12,4,55};
    int count = sizeof(arr)/sizeof(arr[0]);

    int peaks = 0;
    for(int i = 1; i < count-1; ++i){
        if(arr[i] > arr[i+1] && arr[i] > arr[i-1]){
            peaks++;
            i++;
        }
    }
    printf("%d", peaks);

}