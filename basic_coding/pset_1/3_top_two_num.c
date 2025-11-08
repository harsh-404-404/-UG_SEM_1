#include <stdio.h>

// we are not using loop,&& 
int main(void)
{
        int a, b, c;
        scanf("%d %d %d",&a,&b,&c);

        if(a > b){
            if (a > c){
                if(b > c){
                    printf("%d is grt\n",a);
                    printf("%d is secound grt",b);
                }
                else{
                    printf("%d is grt\n",a);
                    printf("%d is secound grt",c);
                }
            }
            else{
                printf("%d is grt\n",c);
                printf("%d is secound grt",a);
            }
        }
        else if (b > c){ /* b > a*/
            if(a > c){
                printf("%d is grt\n",b);
                printf("%d is secound grt",a);
            }
            else{
                printf("%d is grt\n",b);
                printf("%d is secound grt",c);
            }
            
        }
        else
        {
            printf("%d is grt\n",c);
            printf("%d is secound grt",b);
        }
}