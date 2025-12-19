// Validate Email: Check if string contains exactly one '@' and at least one '.' after it.

#include <stdio.h>
#include <string.h>

int main(void){

    char email[] = "Harsh@bhalala404@gmail.com";
    int count = strlen(email);
    int at_position = -1,dot_position = -1;
    for(int i = 0; i < count; ++i){
        if(email[i] == '@'){
            if(at_position == -1)at_position = i;
            else at_position = -1;
        }
        else if(email[i] =='.'){
            if(dot_position == -1)dot_position = i;
            else dot_position = -1;            
        }
    }
    if(count < 3 || at_position == -1 || dot_position == -1 || at_position == 0 || dot_position-1 == at_position || at_position > dot_position || dot_position+1 == count){
        printf("Invalid Email!");
    }
    else{
        printf("Valid Email");
    }

}