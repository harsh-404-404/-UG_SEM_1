// Symmetric Check: Check if a matrix is symmetric (A[i][j] == A[j][i]).

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
            if(a[i][j] != b[i][j]){
                printf("Given matrix is not symmetic");
                return 1;
            }
        }   
    }
    printf("Given matrix is symmetic");

}