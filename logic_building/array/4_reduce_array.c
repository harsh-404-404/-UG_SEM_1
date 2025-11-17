#include <stdio.h>

int main(void){

    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    printf("Enter %d elemtnts ->\n",size);
    int a[size];

    for(int i = 0; i < size; ++i){
        printf("\t\tEnter a number:");
        scanf("%d",a+i);   // or &a[i]
    }
    for(int i = 0; i < size; ++i){
        printf("%d ",a[i]);  // or a[i]
    }
    int value;
    printf("\nEnter new number that you wanna remove from the array: ");
    scanf("%d",&value);

    int is_reduced = 0;
    for(int i = 0; i < size; ++i){

        if(value ==  a[i]){
            is_reduced = 1;
            for (int j = i; j < size; ++j){
                a[i] = a[i-1];
            }
            break;

        }
    }
    if(is_reduced == 0){
        printf("invalid  number !");
        return;
    }
    --size;
    for(int i = 0; i < size; ++i){
        printf("%d ",a[i]);
    }
}