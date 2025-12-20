#include <stdio.h>

int main(void){

    int m,n;
    printf("Enter a row of matrix:");
    scanf("%d",&n);
    printf("Enter a column matrix:");
    scanf("%d",&m);

    int matrix[n][m];

    int top = 0,bottom = n-1,left = 0,right = m-1;
    int digit = 1;

    while(top <= bottom && left <= right){
        
        for(int j = left; j <= right;++j){
            matrix[top][j] = digit++;
        }top++;
        for(int i = top; i <= bottom;++i){
            matrix[i][right] = digit++;
        }right--;

        if(top > bottom || left > right)break;  

        for(int j = right; j >= left;--j){
            matrix[bottom][j] = digit++;
        }bottom--;
        for(int i = bottom; i >= top;--i){
            matrix[i][left] = digit++;
        }left++;

    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m;++j){
            printf("\t%d",matrix[i][j]);
        }
        printf("\n");
    }
}