//WAP to separate the digits of a three digit number
#include <stdio.h>

int main(void){
    int k;

    printf("Enter three digit number: ");
    scanf("%d",&k);

    while(k<100 || k>999){
        printf("Invalid input please enter three digit number: ");
        scanf("%d",&k);
    }
    
    int hundreds = k / 100;
    int tens = (k / 10) % 10;
    int units = k % 10;

    printf("Hundreds: %d\n", hundreds);
    printf("Tens: %d\n", tens);
    printf("Units: %d\n", units);

}