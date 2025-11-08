#include <stdio.h>
#include <math.h>

int main(void){

    float r,l;
    printf("Enter radius of a circle: ");
    scanf("%f",&r);

    l = sqrt(r*r*3.14);
    printf("Squre with similar ara should have side l : %f",l);

}