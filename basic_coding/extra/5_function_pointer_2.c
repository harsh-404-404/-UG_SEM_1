#include <stdio.h>

void hello(){
    printf("Hello");
}

int main(void){

    void (*p)();
    p = hello;
    p();

}