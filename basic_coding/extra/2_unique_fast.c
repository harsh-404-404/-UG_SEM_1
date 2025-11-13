//Elegent code O(n)

#include <stdio.h>
#include <string.h>

#define MAX 10000

int main(void){

    char str[MAX];
    printf("Enter a string: ");
    scanf("%s",str);


    int size = strlen(str);
    int hash_map[256];
    memset(hash_map,0,sizeof(hash_map));       

    for(int i = 0; i < size; ++i){
        ++hash_map[str[i]];
    }
    for(int i = 0;i < size;i++){

        if(hash_map[str[i]] != 0){
            printf("%c -> %d\n",str[i],hash_map[str[i]]);
            hash_map[str[i]] = 0;
        }
    }
    
}