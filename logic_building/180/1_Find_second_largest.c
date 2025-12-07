// Find the second largest number in an array (One pass).

#include <stdio.h>

int main(void){

    int arr[] = {1,2,3,4,5,6};
    int count = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0],s_max = arr[0];
    for(int i = 1; i < count; ++i){
        if(arr[i] > max){
            s_max = max;
            max = arr[i];
        }
    }
    printf("Secound max int is : %d",s_max);

}