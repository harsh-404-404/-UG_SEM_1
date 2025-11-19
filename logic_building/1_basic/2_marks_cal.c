//write a program to calculate total equivalent marks of two subjects
// subject 1 = c 30% weightage
// subject 2 = data science 70% weightage
#include <stdio.h>

int main(void)
{
    float x,y;

        printf("Enter marks of subject c: ");
        scanf("%f", &x);
        printf("Enter marks of subject data science: ");
        scanf("%f", &y);




    printf("Total equvalent marks of subject c and data science : %.2f\n", ((0.3)*x + (0.7)*y));
    return 0;
}