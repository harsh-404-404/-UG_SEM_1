// WAP where A and B are input arrays and C is the output array.
// 	Example:
// 		A = [10,3,6,9,7]
// 		B = [3,24,4,3,18]
// 		C = [12,24,8,9,14]

//sol:- celing value of two number look in to lecture 2.text

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
        
        if(a[i] > b[i]){
            if(a[i] % b[i] == 0){
                c[i] = a[i];
                continue;
            } 
            else{
                c[i] = a[i] - (a[i] % b[i]) + b[i];
            }
        }
        else{
            if(b[i] % a[i] == 0){
                c[i] = b[i];
                continue;
            }
            else{
                c[i] = b[i] - (b[i] % a[i]);
            }
        }

    }
    
    print_array(c,count);

}