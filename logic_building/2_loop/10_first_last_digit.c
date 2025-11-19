#include <stdio.h>

int main(void){

    int n = 12345;
    int temp = n;
    printf("first number is:%d\n",temp % 10);
    
    while (temp > 9){
        temp /= 10;
    }

    printf("last number is:%d",temp);
}