#include <stdio.h>

int main(void)
{
    int a,b,gcd,lcm;
    scanf("%d %d", &a ,&b);
    int x = a;
    int y = b;
    int temp;

    while (y != 0)
    {
        temp = y;
        y = x%y;
        x = temp;   
    }
    gcd = x;
    lcm = a*b/gcd;
    printf("%d %d",lcm , gcd);

}