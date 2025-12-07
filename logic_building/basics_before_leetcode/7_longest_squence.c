// Longest Consecutive Sequence
// Goal: Find length of longest sequence x, x+1, x+2... in unsorted array.
// Constraint: O(N log N) (Sorting allowed) or O(N) (Hashing).
// Input: [100, 4, 200, 1, 3, 2] -> Output: 4 (1, 2, 3, 4).


#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) {  //qsort needs this this funciton will baically -1 means yes switch those to and 1 means dont swith(itdecied to sort it in desc or asc)
    return (*(int *)a - *(int *)b);
}

int main(void){

    int arr[] = {100,4,200,1,2,3};
    int count = sizeof(arr)/sizeof(arr[0]);
    qsort(arr,count,sizeof(arr[0]),comp);

    int max = 1;
    int curennt = 1;
    for(int i = 1; i < count; ++i){
        if(arr[i] == arr[i-1] + 1){
            ++curennt;
        }
        else{
            if(curennt > max) max = curennt;
            curennt = 1;
        }
    }
    printf("%d",max);
}
