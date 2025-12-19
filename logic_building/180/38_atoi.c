// String to Int: Convert "1234" to integer 1234 (Manual atoi).

#include <stdio.h>
#include <string.h>

int main(void){

    char str[] = "- 1234";
    int count = strlen(str);
    int ans = 0;

    int i = (str[0] == '-')?1:0;
    while(i < count){

        ans = 10*ans + (str[i] - '0');
        ++i;
    }
    if(str[0] == '-') ans *= -1;
    
    printf("%d",ans);
}