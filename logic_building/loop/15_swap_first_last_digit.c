#include <stdio.h>
#include <math.h>

int main(void){

    int n = 12345,swaped = 0;
    int count = (log10(n)+1);

    int first = n % 10;
    int last = (n - ( n % (int)pow(10,count - 1) ) ) / pow(10, count - 1);

    n = n - last*pow(10,count - 1) + first*pow(10, count - 1);
    n = n - first + last;

    printf("%d",n);


}