#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    system("cls");
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i)
    {
        for(int j = 0; j <= i; ++j ){
            printf("%d",j+1);
        }
        printf("\n");
    }
    return 0;
}