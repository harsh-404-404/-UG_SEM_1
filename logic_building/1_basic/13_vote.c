//Write a program to check that are you eligible for vote or not.
#include <stdio.h>

int main(void)
{
    char country;
    int age;
    printf("are you form india y/n:");
    scanf("%c",&country);
    if(country == 'Y' || country == 'y'){
        printf("How old are you?");
        scanf("%i",&age);
        if (age >= 18){
            printf("you are elegible for vote\n");
        }
        else{
            printf("you are not elegible for vote\n");
        }
    } 
    else{
        printf("you are not elegible for vote\n");
    }  
}