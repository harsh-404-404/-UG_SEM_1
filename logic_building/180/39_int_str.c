// Int to String: Convert integer 1234 to string "1234".


#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void){

    int n = 1234;
    char num[50];

    int count = log10(n) + 1;
    int i = count-1;
    while(i >= 0){
        num[i--] = (n % 10) + '0'; 
        n /= 10;
    }
    num[count] = '\0';
    printf("%s ",num);

}