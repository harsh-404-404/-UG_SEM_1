#include <stdio.h>

int string_len(char* arr){
    int i = 0;
    int len = 0;
    while(arr[i] != '\0'){
        len++;
        i++;
    }
    return len;
}

int main(void){

    char arr[100];
    scanf("%s",arr);
    
  
    printf("%d",string_len(arr));

}