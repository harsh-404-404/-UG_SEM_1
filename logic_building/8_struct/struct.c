#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct student{
    char name[50];
    int age;
    unsigned long mobile_no;
};

int main()
{
   struct student st1;
   struct student *st2;

   st2 = (struct student*)malloc(sizeof(struct student));

   printf("enter the student name:");
   fgets(st1.name,sizeof(st1.name),stdin);

   printf("enter age:");
   scanf("%d",&st1.age);

   printf("enter the mobile no:");
   scanf("%lu",&st1.mobile_no);

   printf("<--------------using simple structure variable------------------->\n");
   printf("\tstudent name:%s\n",st1.name);
   printf("\tstudent age:%d\n",st1.age);
   printf("\tstudent mobile no:%lu\n",st1.mobile_no);

// input using second method
   printf("enter the student name:");
   fgets(st2->name,sizeof(st2->name),stdin);
   printf("enter age:");
   scanf("%d",&st2->age);
   printf("enter the mobile no:");
   scanf("%lu",&st2->mobile_no);

   printf("<--------------using simple structure variable------------------->\n");
   printf("\tstudent name:%s\n",st2->name);
   printf("\tstudent age:%d\n",st2->age);
   printf("\tstudent mobile no:%lu\n",st2->mobile_no);

   free(st2);
   return 0;

}


