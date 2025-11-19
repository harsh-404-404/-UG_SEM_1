//printing patterns
// *
// **
// ***
// **
// *

#include <stdio.h>

int main(void){

    int n = 3;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < i+1 ;++j){
            printf("*");
        }
        printf("\n");
    }
    for(int l = 0; l < n-1;l++){
        for(int m = 0; m < n-l-1;++m){
            printf("*");
        }
        printf("\n");
    }

}