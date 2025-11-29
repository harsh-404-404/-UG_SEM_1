#include <stdio.h>

int main(void){

    float n,i = 0;
    printf("Enter a number to get squer root of: ");
    scanf("%f",&n);
    
    if (n < 0) return 1;

    float temp = 1;
    while(temp*temp < n){
        temp *= 10;
    }
    float d = temp / 10;

    while(d > 0.0001){

        while(i*i < n){
            i += d;
        }
        if(i*i == n) break;

        i -= d;  
        d /= 10;
    }
    printf("%g",i);

    return 0;
}