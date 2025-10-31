#include <stdio.h>


size_t helper_reverse(size_t n , size_t rev){

    if(n == 0 ){

        return rev;
    }
    
    return helper_reverse(n / 10, rev*10 + (n % 10));

}

size_t reverse(size_t n){

    return helper_reverse(n,0);

}

size_t main(void){

    size_t n = 12345;
    printf("%zu",reverse(n));


}