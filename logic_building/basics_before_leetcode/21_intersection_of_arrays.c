// Intersection of Two Arrays
// Goal: Find common elements.
// Constraint: Handle duplicates (print unique intersection).
// Input: [1, 2, 2, 1], [2, 2] -> Output: [2].

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int a[] = {1,2,2,1};
    int b[] = {2,1};

    int count1 = sizeof(a)/sizeof(a[0]);
    int count2 = sizeof(b)/sizeof(b[0]);
    

    int* ans = malloc(sizeof(int)*((count1 > count2)?count2:count1));
    int index = 0;

    int uniq[1000];

    for(int i = 0; i < 1000; ++i) uniq[i] = -1;

    for(int i = 0; i < count1; ++i){
        uniq[a[i]] = 1;
    }
    for(int i = 0; i < count2; ++i){
        if(uniq[b[i]] != -1){
            ans[index++] = b[i];
            uniq[b[i]] = -1;
            printf("%d ",ans[index - 1]);
        }
    }



}