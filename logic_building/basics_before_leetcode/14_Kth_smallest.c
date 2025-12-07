// Kth Smallest Element
// Goal: Find 3rd smallest number.
// Constraint: Use Sorting O(N log N) or QuickSelect O(N).
// Input: [7, 10, 4, 3, 20, 15], K=3 -> Output: 7.

#include <stdio.h>
#include <stdlib.h>

int comp(const void* a,const void* b){
    return *(int *)b - *(int *)a;
}

int main(void){

    int arr[] = {7,10,4,3,20,15};
    int k = 3;
    int count = sizeof(arr)/sizeof(arr[0]);
    qsort(arr,count,sizeof(arr[0]),comp);
    printf("%d",arr[k]);
}