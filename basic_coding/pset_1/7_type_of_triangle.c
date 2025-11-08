#include <stdio.h>

int main(void){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a + b +c == 180){
        if (a == b && b == c){
            printf("Equilateral triangle");
        }
        else if (a == b || b == c || a == c){
            printf("Isosceles triangle");
        }
        else{
            printf("Scalene triangle");
        }
    }
    else{
        printf("Not a valid triangle");
    }
}