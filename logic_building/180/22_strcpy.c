#include <stdio.h>
#include <string.h>

void strcp(char* a,char* b){
    
    memcpy(a,b,(strlen(b)+1)*sizeof(char));
}

int main(void){

    char a[] = "Hello";
    char b[6];

    strcp(b,a);
    printf("%s",b);


}