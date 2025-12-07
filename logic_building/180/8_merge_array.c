// Merge Arrays: Create a new array C that contains A followed by B.

#include <stdio.h>
#include <string.h>

int main(void){

    int a[] = {1,2,3};
    int b[] = {4,5,6,7};

    int count_a = sizeof(a)/sizeof(a[0]);
    int count_b = sizeof(b)/sizeof(b[0]);
    int count_c = count_a + count_b;

    int c[count_c];

    memcpy(c,a,count_a*sizeof(a[0]));
    memcpy(&c[count_a],b,count_b*sizeof(b[0]));

    for(int i = 0; i < count_c; ++i){
        printf("%d ",c[i]);
    }

}