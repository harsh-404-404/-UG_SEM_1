#include <stdio.h>

int main(void){

    float a,min,sum = 0;

    printf("1.enter a number: ");
    scanf("%f",&a);
    
    min = a;
    sum = a;
    
    for(int i = 1; i < 5; ++i){

        printf("%d.enter a number: ",i+1);
        scanf("%f",&a);
        sum += a;
        if(a < min){
            min = a;
        }

    }
    printf("Sum of best for value is: %g",sum-=min);

}