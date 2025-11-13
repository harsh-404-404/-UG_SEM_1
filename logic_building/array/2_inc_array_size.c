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
//here we pass pointer of array pointer a because we need to modify the address of array a to point to new array
//also we cann't free because 'a' was defind in main function can we cann't free memery which was not allocated in current function
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
    free(*a);  //free the memory of array 'a' but in main 'a' variable still holds the pointer to that memory
    *a = b;     //scence we know the adress of 'a array ponter' we will change it to adress of array b
    

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

    //printf("%p", (void*)a);
    free(a);
    //printf("\n %p", (void*)a); //dangling pointer

    //lets say we use free(a) inside insert() than it will free that memory block but 'a' variable which was storing the pointer to that memory block will still point towards it
    //that's why we can not free array which was not diclaredin same funtion and that is where **a pointer-to-pointer comes in handy
    //if we have adress of 'a' (&a) than we can free the memory block and make 'a' point towards another array
    
}