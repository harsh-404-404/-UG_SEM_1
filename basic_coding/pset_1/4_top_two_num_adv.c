#include <stdio.h>

int main(void){

    int num[3];
    int grt1 = 0;
    int grt2 = 0;
    scanf("%d %d %d",&num[0],&num[1],&num[2]);

    for(int i = 0; i < 3; ++i){
        
        if(num[i] >= grt1){
            grt2 = grt1;
            grt1 = num[i];
        }

        
    }
    printf("%d is gratest\n%d is second gratest",grt1,grt2);
}