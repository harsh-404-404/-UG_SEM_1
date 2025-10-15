#include <stdio.h>

int main(void)
{
    float x,y;
    do
    {
        printf("Enter marks of subject c: ");
        scanf("%f", &x);

    }while (x < 0 || x > 100);
    
    do
    {
        printf("Enter marks of subject data science: ");
        scanf("%f", &y);

    }while (y < 0 || y > 100);


    printf("Total equvalent marks of subject c and data science : %.2f\n", ((0.3)*x + (0.7)*y));
    return 0;
}