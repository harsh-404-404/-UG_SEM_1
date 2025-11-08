#include <stdio.h>
#include <math.h> /* for fabsf()*/

int main(void){

    float a,b,c,eq;
    printf("Enter the value of first resistor: ");
    scanf("%f",&a);
    printf("Enter the value of secound resistor: ");
    scanf("%f",&b);
    printf("Enter the value of third resistor: ");
    scanf("%f",&c);

    eq = (a + b + c) -  1/((1/a)+(1/b)+(1/c));
    printf("Diffrence btw series and parallel equivalent resistance is : %f", fabsf(eq));
    

}