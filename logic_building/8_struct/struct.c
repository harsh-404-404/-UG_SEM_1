#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[40];
    int age;
    unsigned long mobile;
};

int main(){

    struct student *st2;
    st2 = (struct student *)malloc(sizeof(struct student));

    // Input using 2nd option
     printf("Enter student name : ");
    fgets(st2->name, 40, stdin);
    printf("Enter the age : ");
    scanf("%d", &st2->age);
    printf("Enter mobile number : ");
    scanf("%lu", &st2->mobile);

    printf("Using simple structure variable\n");
    printf("student name : %s\n",st2->name );
    printf("student age : %d\n",st2->age );
    printf("student mobile : %lu\n",st2->mobile );

    free(st2);

    return 0;
}
