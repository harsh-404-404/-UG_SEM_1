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
    for(int i = 0; i < size; ++i){
        printf("%d ",a[i]);  // or a[i]
    }
    int value,position;
    printf("\nEnter new number that you wanna add to the array: ");
    scanf("%d",&value);
    
    do{
        printf("Enter the position at Which you wanna add given number: ");
        scanf("%d",&position);

    }while(position > size || position < 1);

    int b[size+1];

    size += 1;
    for(int i = 0 ; i < size; i++){
        if (i < position - 1){
           b[i]=a[i]; 
        }
        else if (i == position - 1){
            b[i] = value;
        }
        else{
            b[i] = a[i-1];
        }
    }
    

    for(int i = 0; i < size; ++i){
        printf("%d ",b[i]);  
    }
}