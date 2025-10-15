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