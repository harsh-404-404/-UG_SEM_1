#include <stdio.h>

int main(void){
    int k;
    int num[3];
    printf("Enter three digit number: ");
    scanf("%d",&k);
    num[0] = k % 10;
    num[1] = (k % 100 - k % 10)/10;
    num[2] = (k % 1000 - k % 100)/100;
    printf("%d %d %d",num[2],num[1],num[0]); 

}