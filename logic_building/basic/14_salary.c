// Write a program to calculate total salary of employee:
// TS = B.S + DA + TA - HRA
// If basic salary <= 35000 then 
//            DA is 2% of bs
//            TS is 3% of bs
//             HRA is 4% of bs
// If basic salary >75000 && <=80000 then 
//            DA is 3% of bs
//            TS is 4% of bs
//             HRA is 7% of bs
// If basic salary > 80000 then DA is 4% of bs
//            TS is 6% of bs
//             HRA is 9% of bs


#include <stdio.h>

int main()
{
    float bs, total;
    do
    {
        printf("Enter your basic salary:");
        scanf("%f", &bs);
    } while (bs < 0);

    if (bs < 35000)
    {
        total = bs + bs * 0.02 + bs * 0.03 - bs * 0.04;
        printf("DA is 2%% \nTA is 3%% \nHRA is 4%%");
    }
    else if (bs >= 35000 && bs <= 80000)
    {
        total = bs + bs * 0.03 + bs * 0.04 - bs * 0.07;
        printf("DA is 3%%\nTA is 4%% \nHRA is 7%%");
    }
    else
    {
        total = bs + bs * 0.02 + bs * 0.03 - bs * 0.04;
        printf("DA is 4%% \nTA is 6%% \nHRA is 9%%");
    }
    printf("\ttotal salary is : %f \n", total);
}