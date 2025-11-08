#include <stdio.h>

int main(void)
{
        int a, b, c;
        scanf("%d %d %d",&a,&b,&c);

        if(a > b){
            if (a > c){
                printf("%d is grt",a);
            }
            else{
                printf("%d is grt",c);
            }
        }
        else if (b > c){
            printf("%d is grt",b);
        }/* b > a*/
        else
        {
            printf("%d is grt",c);
        }
}