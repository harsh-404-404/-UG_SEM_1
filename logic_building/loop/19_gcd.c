#include <stdio.h>

int main(void)
{
    int a = 12;
    int b = 18;

    // Use the Euclidean algorithm to compute GCD
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }

    printf("GCD is %d\n", a);
    return 0;
}