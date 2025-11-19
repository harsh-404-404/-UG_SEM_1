#include <stdio.h>

int main(void)
{
    int x = 12;
    int y = 18;
    int a = x;
    int b = y;

    // Use the Euclidean algorithm to compute GCD
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("\tGCD is %d\n\tLCM is %d", a, (x * y) / a);
    return 0;
}