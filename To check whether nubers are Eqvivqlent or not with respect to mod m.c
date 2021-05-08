#include<stdio.h>
#include<conio.h>

main()
{
    printf("Program to check whether given two numbers are equivalent or not with respect to mod m \n ");

    int a,b,m;

    printf("Enter first,second integer and value of mod respectively \n");
    scanf("%d%d%d",&a,&b,&m);

    if((a-b)%m==0)
    {
        printf("Numbers %d & %d are equivalent",a,b);
    }
    else
    {
        printf("Numbers %d & %d are not equivalent",a,b);
    }
}
