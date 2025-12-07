#include <stdio.h>
#include <ctype.h>

int main(void){

    int hash[28];
    for(int i = 0; i < 28; ++i) hash[i] = 0;

    char str[] = "This is not it";

    int i = 0;
    while(str[i] != '\0'){
        if(isalpha(str[i]) != 0){
            hash[tolower(str[i])-'a']++;
        } 
        i++;
    }

    char vowel[] = "aeiou";
    for(i = 0; i < 5; ++i){
        if(hash[vowel[i] - 'a'] != 0){
            printf("%c:%d\n", vowel[i], hash[vowel[i] - 'a']);
        }
    }
    

}