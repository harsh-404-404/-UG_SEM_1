#include <stdio.h>

int main(void){

    int n = 404;
    int rev = 0;
    int rem;
    int temp = n;
    while(temp != 0){
        rem = temp % 10;
        rev = (rev*10) + rem;
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