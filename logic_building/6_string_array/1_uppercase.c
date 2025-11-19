#include <stdio.h>
#include <string.h>

char upper(char letter){
    if(letter >= 'A' && letter <= 'Z'){
        return letter;
    }
    return letter - ('a' - 'A'); // letter - 32
}

int main(void){

    char arr[100];
    scanf("%s",arr);

    for(int i = 0; i < strlen(arr);++i){

        printf("%c",upper(arr[i]));

    }

}