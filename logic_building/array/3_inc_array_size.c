#include <stdio.h>
#include <stdlib.h>

void print_array(int* a, int size){
    
    for(int i = 0; i < size; ++i){
        printf("%d ",a[i]);  // or *(a+i)
    }
    printf("\n");
}

int* insert(int *a,int* size,int position,int value){

    *size += 1;

    int* temp = realloc(a,(*size)*sizeof(int));
    if(temp == NULL){
        //free(a)
        //exit(1);
        // If realloc fails, temp is NULL. We must not free the original 'a' here,as 'main' still holds the pointer to it.
        // Instead, we restore the original size and return the original 'a' pointer.
        // 'main' will detect this failure because 'size' hasn't changed.
        *size -= 1;
        return a;
    }
    a = temp;

    for(int i = (*size) - 1; i > (position - 1); i--){
        a[i] = a[i-1];
    }
    a[position-1] = value;

    return a; 
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
        scanf("%d",&a[i]);   // or a+i
    }

    print_array(a,size);

    int value,position;
    printf("Enter new number that you wanna add to the array: ");
    scanf("%d",&value);

    do{
        printf("Enter the position at Which you wanna add given number: ");
        scanf("%d",&position);

    }while(position > size + 1  || position < 1);

    int old_size = size;
    a = insert(a,&size,position,value);
    if(size == old_size){
        free(a);
        printf("realloc faild!!");
        return 3;
    }

    print_array(a,size);

    free(a);

}