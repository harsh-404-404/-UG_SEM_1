#include <stdio.h>
#include <string.h>

void reverse(char* start,int count){
    int itration = count/2;
    for(int i = 0; i < itration; ++i){
        int temp = start[i];
        start[i] = start[count-i-1];
        start[count-i-1] = temp;

    }
    return;
}

int main(void){

    char str[10000];
    printf("enter a string: ");
    fgets(str,10000,stdin);

    str[strcspn(str,"\n")] = '\0'; // when we preess enter key it registers \n in buffer and than \0 is added by fgets() so "hello world" -> "Hello world\n\0"

    int size = strlen(str);
    
    for(int i = 0; i < size;){

        if(str[i] != ' ' && str[i] != '\0'){
            int j = 1;
            while(str[i+j] != ' ' && str[i+j] != '\0'){
                j++;
            }
            reverse(&str[i],j);
            i += j+1;
        }
        else ++i; 
    }
    printf("%s",str);
}