#include <stdio.h>

int main(void){

    int num[3];
    int grt = 0;
    scanf("%d %d %d",&num[0],&num[1],&num[2]);

    for(int i = 0; i < 3; ++i){
        
        if(num[i] >= grt){
            grt = num[i];
        }
        
    }
    printf("%d is grt",grt);
}