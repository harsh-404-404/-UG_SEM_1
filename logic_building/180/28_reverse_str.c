// Reverse String: Reverse a string in-place using two pointers.

#include <stdio.h>
#include <string.h>


int main(void){

    char arr[] = "this is new";
    int count = strlen(arr);

    int n = count/2;
    for(int i = 0; i < n; ++i){
        int temp = arr[i];
        arr[i] = arr[count-1-i];
        arr[count -1 -i] = temp;
    }
    printf("%s ",arr);


}