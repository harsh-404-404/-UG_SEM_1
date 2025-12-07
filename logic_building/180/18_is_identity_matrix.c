// Identity Matrix: Check if a matrix is an Identity matrix (1s on diagonal, 0s elsewhere).


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
        for(int j = 0; j < 3;++j){
            if(i != j && a[i][j] != 0){
                printf("! Given matrix is not identity matrix !");
                return 1;
            }
            else if(i == j && a[i][j] != 1){
                printf("! Given matrix is not identity matrix !");
                return 1;
            }
        }
    }
    printf("Given matrix is identity matrix");

}