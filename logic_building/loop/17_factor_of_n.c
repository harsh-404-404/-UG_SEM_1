#include <stdio.h>

int main(void)
{
    int num = 42;
    for (int i = 1; i < num; ++i)
    {
        if (num % i == 0)
        {
            printf("%d,", i);
        }
    }
}