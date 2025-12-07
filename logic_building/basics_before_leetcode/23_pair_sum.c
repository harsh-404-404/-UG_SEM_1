// Pair Sum
// Goal: Count pairs that sum to X.
// Constraint: O(N log N) (Sort + Two Pointers).
// Input: [1, 5, 7, 1], X=6 -> Output: 2 pairs.


#include <stdio.h>
#include <stdlib.h>

int compair(const void* a,const void* b){

    return *(int*)a - *(int*)b; 
}

int main(void){

    int arr[] = {1,5,7,8,2,3,3,1};
    int count = sizeof(arr)/sizeof(arr[0]);
    int x = 6;
    int op = 0;

    qsort(arr,count,sizeof(int),compair);   

    int i = 0;
    while(i < count && arr[i] < x){
        int y = x - arr[i];
        if(y < arr[i]) {
            ++i;
            continue;;
        }
        int k = i + 1;
        while(k < count && arr[k] <= x){
            if(arr[k] == y){
                op++;
            }
            k++;
        }
        ++i;
    }
    printf("\n%d",op);
}