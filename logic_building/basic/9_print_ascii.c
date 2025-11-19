#include <stdio.h>  

int main(void) {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("The ASCII value of '%c' is %d\n", ch, (int)ch);
    return 0;
}