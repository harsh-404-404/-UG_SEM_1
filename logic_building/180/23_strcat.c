// My Strcat: Write your own strcat (append S2 to end of S1).

#include <stdio.h>
#include <string.h>

void strct(char* a,char* b){
    
    memcpy(&a[strlen(a)],b,(strlen(b)+1)*sizeof(char));
}

int main(void){

    char dest[50] = "Hello "; // Destination string with enough space
   char src[] = "World!";    // Source string

   strct(dest, src); // Concatenate src to dest

   printf("Result: %s\n", dest); // Output: Result: Hello World!

   return 0;


}