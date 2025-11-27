//WAP to demonstrate the use of ternary operator
#include <stdio.h>

int main(void){

    // <condition> ? <first>:<secound>
    int n = 10;
    printf((n >= 0) ? ((n == 0) ? "zero" : "positive") : "negative");
}