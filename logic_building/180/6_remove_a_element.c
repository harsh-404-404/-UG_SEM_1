// Remove Value: Remove all instances of number 5 from array (shift elements left).

#include <stdio.h>

int main(void){

    int arr[] = {1,23,4,5,5,7,8,5,4};
    int count = sizeof(arr)/sizeof(arr[0]);

    int x = 5;
    int i = 0,shift = 0;

    while(i < count){   
        if(arr[i] == x){
            ++shift;
            ++i;
            continue;    
        }
        arr[i-shift] = arr[i];
        ++i;
    }
    for(int i = 0; i < count - shift;++i)printf("%d ",arr[i]);
}