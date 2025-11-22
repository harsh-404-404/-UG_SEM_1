#include <stdio.h>
#include <stdlib.h>

int* get_ip(int* num , int len);
void bsort(int* num,int len);
int sum(int* num,int len);

int main(void){

    int len = 5;
    int* num = malloc(sizeof(int)*len);

    get_ip(num,len);
    bsort(num,len);
    printf("Sum of top 4 number is :%d",sum(num,4));
    
    free(num);
    return 0;
}

int* get_ip(int* num,int len){

    for(int i = 0; i < len; ++i){

        printf("%d.enter a number: ",i+1);
        scanf("%d",&num[i]);
    }
    return num;
    
}

void bsort(int* num,int len){

    for(int i = len-1; i > 0; --i){
        
        for(int k = 0; k < i;++k){
            
            if(num[k] < num[k+1]){

                int temp = num[k+1];
                num[k+1] = num[k];
                num[k] = temp;

            }
        }
    }

}

int sum(int* num,int top_n){

    int sum = 0;
    for(int i = 0; i < top_n; ++i){
        sum += num[i];
    }
    return sum;

}