#include <stdio.h>

int main()
{
    float a, b;
    char opr;
    printf("enter the no.");
    scanf("%f", &a);
    scanf("%f", &b);


    printf("select the operator: ");
    scanf("%s", &opr);

    switch (opr)
    {
    case '+':
        printf("sum = %f", a + b);
        break;
    case '-':
        printf("diff = %f", a - b);
        break;
    case '*':
        printf("product = %f", a * b);
        break;
    case '/':
        printf("division = %f", (float)a / b);
        break;
    default:
        printf("enter vaild operator.");
    }
    return 0;
}