#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vovel(char a){
    char vowel[] = {'A','E','I','O','U'};
    a = toupper(a);
    for(int i = 0; i < 5; ++i){
        if(a == vowel[i]){
            return 1;
        }
    }
    return 0;
}

int main(void){

    char letter[10000];
    printf("Enter a word:");
    scanf("%s",letter);
    int count = strlen(letter);
    for(int i = 1; i < count;++i){
        if(is_vovel(letter[i])){
            printf("%c",letter[i]);
        }
        else{
            printf("%ca",letter[i]);
        }
    }
    if(is_vovel(letter[0])){
        printf("%c",letter[0]);
    }
    else{
        printf("%ca",letter[0]);
    }

}