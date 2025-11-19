#include <stdio.h>

int main(void)
{
        int a, b, c;
        printf('Enter first number A: ');
        sccanf("%d", &a);
        printf('Enter secound number B: ');
        sccanf("%d", &b);
        c = a;
        a = b;
        b = c;

        printf("a: %d, b: %d\n", a, b);


        /*SWAP without third variable*/
}