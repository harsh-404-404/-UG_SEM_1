//write a program to calculate length of squre 
//write a program to calculate area of circle
#include <stdio.h>

#define PI 3.14159

int main(void){

    double l,r;
    printf("enter length of squre side l : ");
    scanf("%lf", &l);
    printf("enter radius of circle r : ");
    scanf("%lf", &r);
    printf("Area of square : %.4f\n", l*l);
    printf("Area of circle : %.4f\n", PI*r*r);
}