// Merge Sorted Arrays
// Goal: Merge two sorted arrays A and B into C.
// Constraint: O(N+M) time. Do not simply concatenate and sort.
// Input: [1, 5] & [2, 4] -> Output: [1, 2, 4, 5].

#include <stdio.h>
#include <string.h>

int main(void){

    int a[] = {2,5};
    int b[] = {1,3,4};

    int a_count = sizeof(a)/sizeof(a[0]);
    int b_count = sizeof(b)/sizeof(b[0]);

    int c[a_count + b_count];
    
    int i = 0, j = 0, k = 0;

    while(i < a_count && j < b_count){
        if(a[i] <= b[j]){
            c[k++] = a[i++];
        }
        else {
            c[k++] = b[j++];
        }
    }
    while (i < a_count) c[k++] = a[i++];
    while (j < b_count) c[k++] = b[j++];
   
    for(int i = 0; i < a_count+b_count; ++i){
        printf("%d ",c[i]);
    }



}