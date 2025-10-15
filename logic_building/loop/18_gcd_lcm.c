#include <stdio.h>

int gcdf(int a,int b){

    if(a%b == 0){
        return b;
    }
    return gcdf(b, a%b);
}

int main(void)
{
    int a = 12;
    int b = 30;
    int gcd = gcdf(a,b);

    printf("gcd = %d\n",gcd);
    printf("lcm = %d\n",(a*b)/gcd);   // lcm(a,b) * gcd(a,b) = a*b
}