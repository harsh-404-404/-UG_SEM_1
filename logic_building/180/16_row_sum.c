// Row Sums: Print the sum of each row in a matrix.

#include <stdio.h>


int main(void){

    int a[3][3];
    int x = 10;

    for(int i = 0; i < 3;++i){
        for(int j = 0; j < 3;++j){
            a[i][j] = i*3+j+1;
        }   
    }
    for(int i = 0; i < 3;++i){
        int sum = 0;
        for(int j = 0; j < 3;++j){
            sum += a[i][j];
        }
        printf("%d ",sum);   
    }

}