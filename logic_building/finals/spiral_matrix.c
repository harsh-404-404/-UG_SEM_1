#include <stdio.h>

int main(void){

    int n,m;
    printf("Enter length of matrix:");
    scanf("%d",&m);
    printf("Enter Height of matrix:");
    scanf("%d",&n);


    int matrix[m][n];

    int times = (m+1)/2;
    int digit = 1;
    int k = 0,l = 0;
    while(k < times){
        int i = k,j = l;
        matrix[i][j] = digit; 
        while(j < m-1-k){
            matrix[i][j++] = digit++;
        }
        while(i < n-1-l){
            matrix[i++][j] = digit++;
        }
        while(j > k){
            matrix[i][j--] = digit++;
        }
        while(i > l){
            matrix[i--][j] = digit++;
        }
        k++;
        l++;
    }


    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m;++j){
            printf("\t%d",matrix[i][j]);
        }
        printf("\n");
    }
}