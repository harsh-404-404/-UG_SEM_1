#include <stdio.h>


int main(void)
{
    int a = 12;
    int b = 18;

    for (int i = (a >= b ? b : a); i != 0 ; --i){

        if (a % i == 0 && b % i == 0){
            printf("GCD is %d",i);
            break;
        }
    }
}