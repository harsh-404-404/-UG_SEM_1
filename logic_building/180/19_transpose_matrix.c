// Transpose (Copy): Create a new matrix that is the transpose of the input.

#include <stdio.h>

int main(void){
    int a[3][3];
    int b[3][3];

    for(int i = 0; i < 3;++i){
        for(int j = 0; j < 3;++j){
            a[i][j] = i*3+j+1;
        }   
    }

    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            b[i][j] = a[j][i];
        }
    }
    for(int i = 0; i < 3;++i){
        for(int j = 0; j < 3;++j){
            printf("%d ",b[i][j]);
        }   
        printf("\n");
    }

}