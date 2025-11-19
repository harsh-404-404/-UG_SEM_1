#include <stdio.h>

int itr = 10;   //this is also bad because if itr is global variable than we can use revere only one time 
                //on second time value of itr won't reset to 10

int reverse(int n){


    if(n < 10 ){

        return n;

    }
    // int rtn = (n%10)*itr + reverse(n / 10); this is wrong because itr is place before reverse(n / 10) so in every time rtn is calculated rtn's value is 10
    // itr *= 10;
    // return rtn;
    int rev = reverse(n /10);
    int rtn = (n%10)*itr + rev;
    itr *= 10;
    return rtn;
}

int main(void){

    int n = 12345;
    printf("%d",reverse(n));


}