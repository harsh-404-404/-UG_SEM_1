// I know this is a very bad code runtime is O(n^2) :(


#include <stdio.h>
#include <string.h>

#define MAX 10000

int main(void){

    char str[MAX];
    printf("Enter a string: ");
    scanf("%s",str);


    int size = strlen(str);
    char uniq[size];
    int count[size];
    for(int i  = 0 ; i < size;i++){
        uniq[i] = '\0';
        count[i] = 0;
    }

    int temp = 0;    //temp here is to keep track of next empty index in uniq[]
    for(int i = 0; i < size; ++i){

        if(str[i] == '\0'){
            continue;
        }
        uniq[temp] = str[i];

        for(int k = i; k < size;k++){
            if(str[k] == uniq[temp]){
                ++count[temp];
                str[k] = '\0';
            }
            
        }
        temp++;
    }
    for(int i = 0; i < temp; ++i){
        printf("%c ",uniq[i]);  // or *(a+i)
    }
    printf("\n");
    for(int i = 0; i < temp; ++i){
        printf("%d ",count[i]);  // or *(a+i)
    }
    printf("\n");

}