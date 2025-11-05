#include <stdio.h>

int main(void)
{
    int n = 12345;
    int temp = n ;
    int rev = 0;
    int sum = 0;
    while(temp != 0)
    {
        sum += temp % 10;
        rev = (rev*10) + (temp % 10);
        temp /= 10;
    } 
    printf("%d %d", sum ,rev);

}