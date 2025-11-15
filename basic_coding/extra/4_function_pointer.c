#include <stdio.h>

int add(int a,int b){
    return a + b;
}

int main(void){

    int (*p)(int,int) = add;   //or &add both are valid
    //p is a pointer to funtion with return type in and takes two int as an arguments
    int c = p(2,3);           // or (*p)(2,3) --> here (*p) is derefrencing p 
    printf("%d",c);



}   