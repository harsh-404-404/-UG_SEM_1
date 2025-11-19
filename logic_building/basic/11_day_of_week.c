//Write a program to check it the day is are correct or not

#include <stdio.h>

char* Week[] = {"sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday"};

int main() {
    int k;
    printf("Enter a number between 1 to 7: ");
    scanf("%d", &k);
    if (k >= 1 && k <= 7) {
        printf("The day is %s\n", Week[k - 1]);
    } else {
        printf("Invalid input! Please enter a number between 1 to 7.\n");
    }
}