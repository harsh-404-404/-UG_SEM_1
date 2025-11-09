#include <stdio.h>

void get_ip(int* num,int len);
void sort(int* num,int len);
int sum(int* num,int len);

int main(void){

    int len = 5;
    int num[len];

    get_ip(num,len);
    sort(num,len);
    printf("Sum of top 4 number is :%d",sum(num,len));
}


void get_ip(int* num,int len){

    for(int i = 0; i < len; ++i){

        printf("%d.enter a number: ",i+1);
        scanf("%d",&num[i]);
    }
    
}

void sort(int* num,int len){

    for(int i = len-1; i > 0; --i){
        
        for(int k = 0; k < i;++k){
            
            if(num[k] < num[k+1]){
                num[k] += num[k+1];
                num[k+1] = num[k] - num[k+1];
                num[k] -= num[k+1];

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