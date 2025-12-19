// Is Anagram: Check if two strings contain the same characters (sorting allowed).

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void* a,const void* b){
    return *(char*)a - *(char*)b;
}

int main(void){
    
    char a[] = "are they same";
    char b[] = "same they are";
    int count_a = strlen(a);
    int count_b = strlen(b);

    qsort(a,count_a,sizeof(char),cmp);
    qsort(b,count_b,sizeof(char),cmp);

    if(strcmp(a,b) == 0){
        printf("They are the same");
    }
    else{
        printf("They are diffrent");
    }
    

}