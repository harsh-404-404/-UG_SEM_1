#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    int a = 1;
    system("cls");
    printf("Enter number of rows:");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i)
    {
        for(int j = 0; j <= i; ++j ){
            printf("%d",a);
            ++a;
        }
        printf("\n");
    }
    return 0;
}