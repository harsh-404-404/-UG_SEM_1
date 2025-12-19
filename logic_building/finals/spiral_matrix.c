#include <stdio.h>

int main(void){

    int n;
    printf("Enter a size of (n x n) matrix:");
    scanf("%d",&n);

    int matrix[n][n];

    int times = (n % 2 == 1)?(n/2)+1 : n/2;
    int digit = 1;
    int k = 0;
    while(k < times){
        int i = k,j = k;
        matrix[i][j] = digit;
        while(j < n-1-k){
            matrix[i][j++] = digit++;
        }
        while(i < n-1-k){
            matrix[i++][j] = digit++;
        }
        while(j > k){
            matrix[i][j--] = digit++;
        }
        while(i > k){
            matrix[i--][j] = digit++;
        }
        k++;
    }


    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n;++j){
            printf("\t%d",matrix[i][j]);
        }
        printf("\n");
    }
}