#include <stdio.h>

int main(void){

    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    printf("Enter %d elemtnts ->\n",size);
    int a[size];

    for(int i = 0; i < size; ++i){
        printf("Enter a number:");
        scanf("%d",a+i);   // or &a[i]
    }

    int min = a[0];
    int max = a[0];

    for(int i = 1; i < size; ++i){
        if(a[i] < min){
            min = a[i];
        }
        if(a[i] > max){
            max = a[i];
        }
    }

    printf("Min is %d and Max is %d",min,max);

}