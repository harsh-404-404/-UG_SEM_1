#include <stdio.h>

int main(void){

    int n,a = 0,b = 1,c = 1;
    do{

        printf("Enter a number to get fibonacci series:");
        scanf("%d",&n);
        
    }while(n < 0);

    printf("0");
    while(c < n){
        
        printf(",%d",c);
        c = a + b;
        a = b;
        b = c;

    }
}