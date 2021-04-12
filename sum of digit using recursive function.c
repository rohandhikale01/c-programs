#include<stdio.h>
#include<conio.h>
int call();
main()
{
    int a,ans,x=0;
    printf("Program to find sum of digit of number using recursive function \n");
    printf("Enter the number.:  \n");
    scanf("%d",&a);
    ans=call(a,x);
    printf("sum of digits of %d is =%d",a,ans);
    getch();
    return 0;

}
int call(a,x)
{
    int b;
    if(a>0)
    {
        b=a%10;
        x=x+b;
        a=a/10;
        call(a,x);
    }
}
