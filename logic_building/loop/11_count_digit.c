#include <stdio.h>
#include <math.h>

int main(void){

    int k = 153,temp = k,count = 0;
    while(temp != 0){
        temp /= 10;
        count++;
    }
    printf("Number of digits%d\n",count);
    //if number is armstrong number or not
    int sum = 0;
    temp = k;
    int digit;
    while (temp != 0){
        digit = (temp % 10);
        sum += pow(digit,count);
        temp /= 10;
    }
    if(sum == k){
        printf("yes %d is armstrong number",k);
    }
    else {
        printf("No %d is not armstrong number",k);
    }
}