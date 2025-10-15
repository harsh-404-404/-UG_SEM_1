#include <stdio.h>


int count(int n){

    if(n < 10){
        return 1;
    }
    return count(n/10) + 1;
    
}

int main(void){

    int n = 1234567;
    printf("Number of digits: %d",count(n));

}