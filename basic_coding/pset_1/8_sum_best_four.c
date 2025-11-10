#include <stdio.h>
#include <stdlib.h>

int* get_ip(int len);
void bsort(int* num,int len);
int sum(int* num,int len);

int main(void){

    int len = 5;
    int* num = get_ip(len);

    bsort(num,len);
    printf("Sum of top 4 number is :%d",sum(num,len));
    free(num);
}


int* get_ip(int len){

    int* num = malloc(sizeof(int)*len);
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

int sum(int* num,int len){

    int sum = 0;
    for(int i = 0; i < 4; ++i){
        sum += num[i];
    }
    return sum;

}