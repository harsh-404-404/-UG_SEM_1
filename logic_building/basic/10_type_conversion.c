//Demonstrarte the inpicit and exlicite type conversation

#include <stdio.h>

int main(void)
{
    float f = 3.5;
    int a;
    printf("Value of f = %d\n", f); /*this does not work as float is bigger than int so we can't do implicit type convirton from bigger data type to smaller*/
    a = (int)f; /*type casting with explicit type convirsation works for everything*/
    printf("Value of a = %d\n", a);

}