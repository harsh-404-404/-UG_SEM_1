// Move Zeroes
// Goal: Push zeros to end, maintain order of non-zeros.
// Constraint: O(N) time, O(1) space (in-place).
// Input: [0, 1, 0, 3, 12] -> Output: [1, 3, 12, 0, 0]

#include <stdio.h>

int main(void){
    
    int a[] = {0,0,0,2,3,1,12};
    int count =  sizeof(a)/sizeof(a[0]);

    for(int i = 1; i < count; ++i){
        int k = i;
        while(k < count && k > 0 && a[k] != 0 && a[k-1] == 0 ){
            a[k-1] = a[k];
            a[k] = 0;
            --k;
        }
    }
    for(int i = 0; i < count;++i){
        printf("%d ",a[i]);
    }
}