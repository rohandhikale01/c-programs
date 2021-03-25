#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int a,b,sum=0;
    printf("Program to find sum of odd numbers.\n");
    printf("enter the number.:  \n");
    scanf("%d",&a);
    for(b=1;b<a;b=b+2)
    {
        sum=sum+b;
    }
        printf("sum=%d",sum);

}
