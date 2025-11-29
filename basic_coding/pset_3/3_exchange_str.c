#include <stdio.h>
#include <string.h>

int main(void){

    char str1[999],str2[999],str3[999];
    printf("enter third string with exact size as secound string: ");
    scanf("%s",str1);
    printf("enter third string with exact size as secound string: ");
    scanf("%s",str2);

    
    int count1 = strlen(str1);
    int count2 = strlen(str2);

    for(int i = 0; i < count1 - count2 + 1; ++i){

        if(memcmp(&str1[i],str2,sizeof(char)*count2) == 0){
            
            printf("Enter third string: ");
            scanf("%s",str3);
            str1[i] = '\0';
            printf("%s",str1);
            printf("%s",str3);
            printf("%s",&str1[i+count2]);
            
            return 0;
        }
        
    }
    printf("string 2 is not subset of string 1");
    return 0;
}