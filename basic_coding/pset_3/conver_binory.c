    #include <stdio.h>
    #include <math.h>
    #include <string.h>

    int main(void){

        int n;
        printf("enter a number to translate it into binary: ");
        scanf("%d",&n);

        int binary[65];
        int i = 0;
        int rem;
        if(n == 0){
            printf(" 0");
        }
        else{
            while(n > 0){
                binary[i] = n % 2;
                n = (n - binary[i] )/ 2; 
                ++i;
            } 
            for(int j = i-1; j >= 0; --j){
                printf(" %d", binary[j]);
            }
        }
            //secound part
        long long op = 0;
        char ip[128];
        printf("\nEnter binary to conver it into number: ");
        scanf("%s",ip);

        int count = strlen(ip);
        int bit_value = 1;
        for(int j = count-1; j >= 0; --j){
            if(ip[j] == '1'){
                op += bit_value;
            }
            bit_value *= 2;
        }
        printf("%lld",op);
        
    }
