// Char Frequency: Print how many times each character appears (use int count[256]).

#include <stdio.h>
#include <string.h>

int main(void){

    char str[] = "tHis #2 end now 0r you will be 404- no ^";
    int count = strlen(str);
    int hash[256];

    for(int i = 0; i < 256; ++i)hash[i] = 0;

    for(int i = 0; i < count; ++i){
        hash[str[i]]++;
    }
    for(int i = 0; i < 256; ++i){
        if(hash[i] != 0){
            printf("%c\t:\t%d\n",i,hash[i]);
        }
    }

    
}