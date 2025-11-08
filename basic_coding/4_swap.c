#include <stdio.h>

int main(void)
{
        int a, b, c;
        printf("Enter first number A: ");
        scanf("%d", &a);
        printf("Enter secound number B: ");
        scanf("%d", &b);
        c = a;
        a = b;
        b = c;
//      a = a + b;
//      b = a - b;
//      a = a - b;

        printf("A: %d, B: %d\n", a, b);
}