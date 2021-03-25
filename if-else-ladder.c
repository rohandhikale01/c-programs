#include<stdio.h>
#include<conio.h>
main()
{
    int a;
    printf("Program to decide the grade or class of students");
    printf("\n Enter the percentage of student.:   \n");
    scanf("%d",&a);

    if(a>=80&&a<=100)
    {
        printf("First class with distinction.");
    }
    else if(a>=60)
    {
        printf("First class.");
    }
    else if(a>=50)
    {
        printf("Second class");
    }
    else if(a>35)
    {
        printf("Pass class");
    }
    else
    {
        printf("Fail");
    }
}
