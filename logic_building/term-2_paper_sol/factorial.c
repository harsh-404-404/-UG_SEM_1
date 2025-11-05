#include <stdio.h>

int fact(int n){

    if(n == 1){
        return 1;
    }
    return n*fact(n-1);
}


int main(void)
{
    int n;
    scanf("%d",&n);
    int factorial = fact(n);
    int factorial_2 = 1;
    int temp = n;
    while(temp != 1){
        factorial_2 *= temp;
        temp--;
    }
    printf("%d %d",factorial,factorial_2);

}