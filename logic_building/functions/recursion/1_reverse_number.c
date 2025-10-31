#include <stdio.h>
#include <math.h>

int reverse(int n){


    if(n < 10 ){

        return n;
    }

    int rev = reverse(n / 10);
    int power = log10(n);
    return ((n%10)*pow(10,power)) + rev;
}

int main(void){

    int n = 12345;
    printf("%d",reverse(n));


}