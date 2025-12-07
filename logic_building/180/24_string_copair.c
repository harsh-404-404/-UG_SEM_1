// String Compare: Write a function that returns 0 if strings are equal, -1 or 1 otherwise.

#include <stdio.h>
#include <string.h>

int strcom(char* a,char* b){
    
    return (memcmp(a,b,(strlen(a)+1))*sizeof(char) == 0)?0:-1;
}

int main(void){

    char a[] = "Hello"; 
    char b[] = "Hello";

   

   printf("Result: %d\n", strcom(a,b)); 

   return 0;


}