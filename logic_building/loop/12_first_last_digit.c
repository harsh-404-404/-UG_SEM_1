#include <stdio.h>

int main(void){

    int n = 1234;
    int temp = n;
    printf("first number is:%d\n",temp % 10);
    do
    {
        temp /= 10;
    }while(temp >= 10);

    printf("last number is:%d",temp);
}