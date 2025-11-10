#include <stdio.h>

int main(void){

    int a,b,c,d,e;

    printf("Enter 5 space sapareted numbers:");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    int sum = a + b + c + d + e;
    if (a < b && a < c && a < d && a < e){
        sum -= a;
    }
    else if (b < a && b < c && b < d && b < e){
        sum -= b;
    }
    else if (c < a && c < b && c < d && c < e){
        sum -= c;
    }
    else if (d < a && d < b && d < c && d < e){
        sum -= d;
    }
    else{
        sum -= e;
    }
    
    printf("Sum of best four numbers is:%d",sum);
    

}