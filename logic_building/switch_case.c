#include <stdio.h>

int main()
{
    int day;
    printf("Enter a number between 1 to 7:");
    scanf("%d", &day);
    while (day < 1 || day > 7)
    {
        printf("Invalid input please enter a number between 1 to 7:");
        scanf("%d", &day);
    }
    switch (day)
    { // in swith you can nonot use && or ||  (arithmetic oparator)
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        
    case 7:
        printf("Sunday");
        
    default:
        // this will never be executed because of the while loop above
        printf("Invalid input");
    }
}