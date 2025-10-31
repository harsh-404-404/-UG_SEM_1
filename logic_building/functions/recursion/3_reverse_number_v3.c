#include <stdio.h>


int helper_reverse(int n , int rev){

    if(n == 0 ){

        return rev;
    }
    
    return helper_reverse(n / 10, rev*10 + (n % 10));

}

int reverse(int n){

    return helper_reverse(n,0);

}

int main(void){

    int n = 12345;
    printf("%d",reverse(n));


}