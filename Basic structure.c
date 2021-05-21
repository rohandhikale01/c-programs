#include<stdio.h>
#include<conio.h>

struct student{
        char name[20];
        int age;
        float percent;
}s_1;

main()
{

    printf("Enter the details of first student.");
    //scanning values of student structure having variable 1 //

    printf("\nEnter the Name of student-1");
    scanf("%s",&s_1.name);

    printf("\nEnter the age of student-1");
    scanf("%d",&s_1.age);

    printf("\nEnter the percentage of student-1 ");
    scanf("%f",&s_1.percent);

    //printing of values of structure //
    printf("\nName=%s",s_1.name);
    printf("\nAge=%d",s_1.age);
    printf("\nresult=%f",s_1.percent);
}
