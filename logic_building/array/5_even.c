#include <stdio.h>

#define SIZE 5

int main(void)
{
    int odd_c = 0, even_c = 0;
    int even[SIZE];
    int odd[SIZE];
    int arr[] = {12, 15, 2, 7, 23};

    for (int i = 0; i < SIZE; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            even[even_c] = arr[i];
            even_c++;
        }
        else
        {
            odd[odd_c] = arr[i];
            odd_c++;
        }
    }

    for (int i = 0; i < even_c; ++i)
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    for (int i = 0; i < odd_c; ++i)
    {
        printf("%d ", odd[i]);
    }

    return 0;
}