#include <stdio.h>
/* demostrate call by value and call by functions*/
void swap(int a, int *b)
{
    printf("%d %d",a,*b);
}

int main(void)
{

    int a = 5, b = 10;
    swap(a,&b);
}