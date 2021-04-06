#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,x=0;
    printf("Program to find the sum of digits of number.\n");
    printf("Enter the number.:  \n");
    scanf("%d",&a);
    c=a;

    for(;a>0;)
    {
        b=a%10;
        x=x+b;
        a=a/10;
    }
    printf("sum of digit of number %d = %d",c,x);
    getch();
    return 0;

}
