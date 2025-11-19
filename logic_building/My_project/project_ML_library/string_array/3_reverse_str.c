#include <stdio.h>
#include <string.h>

void reverse_str(char* arr){

    for(int i = strlen(arr); i >= 0; --i){
        printf("%c",arr[i]);
    }
}

int main(void){

    char arr[100];
    scanf("%s",arr);

    reverse_str(arr);

}