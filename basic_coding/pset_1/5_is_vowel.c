#include <stdio.h>
#include <string.h>
#include <ctype.h>

const char vowel[] = {'A', 'E', 'I', 'O', 'U'};

int main()
{

    char ip[100]; /*max input size we expect is 100*/

    printf("enter a single charactor: ");
    scanf("%s",ip);
    while (strlen(ip) != 1 || !isalpha(ip[0]) || ip[1] != '\0')
    {
        printf("Invalid input.Please enter *only* one letter: ");
        scanf("%s", ip);
    }
    char alpha = toupper(ip[0]);


    for (int i = 0; i < 5; ++i)
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