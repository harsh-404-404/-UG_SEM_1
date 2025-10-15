#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

char vowel[] = {'A', 'E', 'I', 'O', 'U'};

int main(void)
{
    char ip[100];
    printf("enter a string:");
    scanf("%s", ip);
    int n = strlen(ip);
    int vowels = 0;
    int cononant = 0;
    for (size_t i = 0; i < n; ++i)
    {
        bool is_it_vowel = false;
        for (size_t j = 0; j < 5; ++j)
        {
            char word = toupper(ip[i]);
            if (word == vowel[j])
            {
                is_it_vowel = true;
                break;
            }
        }
        if (is_it_vowel == true)
        {
            vowels++;
            is_it_vowel = false;
        }
        else
        {
            cononant++;
        }
    }
    printf("\tNumber of vowels :   %d\n", vowels);
    printf("\tNumber of cononant:  %d\n", cononant);
    return 0;
}