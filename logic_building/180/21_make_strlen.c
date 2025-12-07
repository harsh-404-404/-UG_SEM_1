#include <stdio.h>

int strlen(char* a){
    int len = 0;
    while(a[len] != '\0'){
        len++;
    }
    return len;
}

int main(void){

    char str[] = "Hello";
    printf("%d",strlen(str));

}