#include <stdio.h>

void swap(int *a,int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}


int main(void){

    int a = 5,b = 10;
    printf("Before swap a and b are (%d, %d)\n",a,b);
    swap(&a, &b);
    printf("After swap a and b are (%d, %d)",a,b);

}