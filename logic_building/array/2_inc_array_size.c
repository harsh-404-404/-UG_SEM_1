#include <stdio.h>
#include <stdlib.h>
//macro
#define MAX 100

void print_array(int* a, int size){
    
    for(int i = 0; i < size; ++i){
        printf("%d ",*(a+i));  // or a[i]
    }
    printf("\n");
}

void insert(int** a,int* size,int position,int value){
    *size += 1;
    int* b = malloc( (sizeof(int)) * (*size) );
    if(b == NULL){
        exit(1);
    }

    for(int i = 0 ; i < *size; i++){
        if (i < position - 1){
           b[i]=(*a)[i]; 
        }
        else if (i == position - 1){
            b[i] = value;
        }
        else{
            b[i] = (*a)[i-1];
        }
    }
    int *temp = *a;
    *a = b;
    free(temp);
    

}

int main(void){ 
    
    int size;
    printf("Enter the size of your desired array: ");
    scanf("%d",&size);

    printf("Enter %d elemtnts ->\n",size);
    int* a = malloc(sizeof(int)*size); 
    if(a == NULL){
        return 1;
    }


    for(int i = 0; i < size; ++i){
        printf("\t\t%d]Enter a number: ",i+1);
        scanf("%d",a+i);   // or &a[i]
    }

    print_array(a,size);

    int value,position;
    printf("Enter new number that you wanna add to the array: ");
    scanf("%d",&value);

    do{
        printf("Enter the position at Which you wanna add given number: ");
        scanf("%d",&position);

    }while(position > size + 1  || position < 1);

    insert(&a,&size,position,value);

    print_array(a,size);

    free(a);

}