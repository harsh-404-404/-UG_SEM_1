#include <stdio.h>

int main(void){

    int n = 3;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n-i-1 ;++j){
            printf(" ");
        }
        for(int c = 0; c < i+1;++c){
            printf("* ");

            
        }
        printf("\n");
    }
    for(int a = 0; a < n-1; ++a){
        for(int j = 0; j < a+1 ;++j){
            printf(" ");
        }
        for(int d = 0; d < n-a-1;++d){
            printf("* ");
        }
        printf("\n");
    }

    

}