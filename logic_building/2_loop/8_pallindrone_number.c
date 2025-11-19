#include <stdio.h>

int main(void){

    int n = 404;
    int rev = 0;
    int temp = n;
    while(temp != 0){

        rev = (rev*10) + (temp % 10);
        temp /= 10;
    }
    printf("%d\n",rev);
    if (rev == n){
        printf("%d is pallindrone number",rev);
    }
    else {
        printf("%d is not pallindrone number",n);
    }
    
}