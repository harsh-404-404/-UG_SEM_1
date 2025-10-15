#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){

    int n = 0;
    system("cls");
    printf("Number of digits: %d",(n==0)?1:(int)log10(n) + 1);
}