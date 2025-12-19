#include <stdio.h>

typedef struct student
{
    char name[30];
    int age;
    float marks;
}student;

float avgmks(student* s,int n){
    int sum = 0;
    for(int i = 0; i < n;++i){
        sum += s[i].marks;
    }
    return sum/n;
}


int main(){
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    student s[n];

    for (int i = 0; i < n; i++){
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Age: ");
        scanf("%d", &s[i].age);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    float avg = avgmks(s,n);
    printf("%g is the average marks of the class",avg);

    return 0;
}