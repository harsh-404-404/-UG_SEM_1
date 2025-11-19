//Write a program to check if given character is vowel or is it consonant

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char vowel[] = {'A', 'E', 'I', 'O', 'U'};

int main()
{
    /*  this is wrong because we are using k which is a pointer which does not point wards any thing
    char *k;
    printf("enter a charactor :");
    scanf("%s", &k);  always make sure that you are putting a valid pointer or with %s a pre-allocated memory E.x char input[100] scanf("%s",input)not &input because input is already and adress
    */

    char ip[100]; /*max input size we expect is 100*/

    printf("enter a single charactor:");
    scanf("%s", ip);
    char alpha = toupper(ip[0]);
    while (strlen(ip) != 1 || alpha < 'A' || alpha > 'Z')
    {
        printf("please enter valid input:");
        scanf("%s", ip);
        alpha = toupper(ip[0]);
    }

    for (size_t i = 0; i < 5; ++i)
    {
        if (alpha == vowel[i])
        {
            printf("%c is a vowel", ip[0]);
            return 0;
        }
    }
    printf("%c is not a vowel", ip[0]);
    return 0;

    return 0;
}