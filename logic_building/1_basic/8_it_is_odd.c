#include <stdio.h>

int main(void){
    int k;
    printf("enter a number:");
    scanf("%d",&k);
    if(k%2==0){
        printf("%d is even number\n",k);
    }
    else{
        printf("%d is odd number\n",k);
    }
        
}