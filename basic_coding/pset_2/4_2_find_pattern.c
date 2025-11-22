//matrix a + reverse b
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
        printf("\t%d.Enter a numebr: ",i+1);
        scanf("%d",&arr[i]);
    }
    
}

int main(void){
    system("cls");

    int count = 5;
    int a[count],b[count],c[count];
    printf("<--Enter the the numbers for first array-->\n");
    take_ip(a,count);
    printf("<--Enter the the numbers for secounf array-->\n");
    take_ip(b,count);
    
    for(int i = 0; i < count; ++i){
        c[i] = a[i] + b[count-1-i];
    }
    print_array(c,count);

}