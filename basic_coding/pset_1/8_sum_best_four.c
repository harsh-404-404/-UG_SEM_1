#include <stdio.h>

int main(void){

    int num[5];

    for(int i = 0; i < 5; ++i){

        printf("%d.)enter a number: ");
        scanf("%d",num[i]);
    }
    

    for(int i = 4; i >= 0; --i){
        
        for(int k = 0; k < 5;++k){
            
            if(num[k] >= num[k+1]){
                num[k] += num[k+1];
                num[k+1] = num[k] - num[k+1];
                num[k] -= num[k+1];
            }
        }

        
    }
    
    
}