#include <stdio.h>


int main(void){

    int n;
    printf("Enter a ammout: ");
    scanf("%d",&n);

    int arr[] = {500,200,100,50,20,10,5,2,1};

    for(int i = 0; i < 9; ++i){

        if(n >= arr[i]){
            printf("notes of %d: \t%d\n",arr[i],n / arr[i]);
            n = (n % arr[i]);
            if(n == 0) break;
        }
    }
}