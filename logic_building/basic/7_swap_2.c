#include <stdio.h>
/*swap a and b without third variable*/
int main(void)
{
    int a,b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    printf("Before swapping a = %d and b = %d\n", a,b);
    
    a += b;
    b = a - b;
    a -= b;   

    printf("After swapping a = %d and b = %d\n", a,b);
    return 0;
}