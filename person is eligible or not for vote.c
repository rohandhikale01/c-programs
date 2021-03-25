#include<stdio.h>
#include<conio.h>
main()
{
    int age;
    printf("Program to check whether person is eligible for voting in India.");
    printf("\n Enter your age please.:  \n");
    scanf("%d",&age);
    if(age<18)
    {
        printf("sorry. your not eligible for voting.");
        printf("you can vote after %d years.",18-age);
    }
    else
    {
        printf("congratulation. your eligible for voting.");
    }

}
