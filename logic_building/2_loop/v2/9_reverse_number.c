#include <stdio.h>
#include <math.h>

int nth(int k,int n){

    return ( ( (k % (int)pow(10,n)) - (k % (int)pow(10,n-1)) )/ pow(10,n-1) );
}

int main(void){

    int k = 45;
    int temp2 = k;
    int len_of_k = 0;
    
    while (temp2 != 0){
        temp2 /= 10;
        len_of_k++;
    }
    for(int i = 1; i <= len_of_k;i++){

        int temp = nth(k,i);
        printf("%d",temp);
    }

}