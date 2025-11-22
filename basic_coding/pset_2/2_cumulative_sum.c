#include <stdio.h>
#include <stdlib.h>

void print_array(int* arr,int size){

    printf("[ ");
    for(int i = 0; i < size; ++i){
        printf("%d ",arr[i]);
    }
    printf("]\n");

}

void take_ip(int* arr,int size){

    for(int i = 0; i < size; ++i){
        printf("%d.Enter a numebr: ",i+1);
        scanf("%d",&arr[i]);
    }
    
}

int main(void){
    system("cls");

    int count = 5;
    int arr[count];
    int answer[count];
    take_ip(arr,count);
    int sum = 0;
    for(int i = 0; i < count; ++i){
        sum += arr[i];
        answer[i] = sum;
    }
    print_array(answer,count);

}