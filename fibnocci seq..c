#include<stdio.h>
main()
{
    int a,b,sum=0,x=0,y=1;
    printf("Program to print Fibonacci Sequence.\n");
    printf("Enter the number up to which you want to print sequence.:   \n");
    scanf("%d",&a);
    printf("\t %d\t %d",x,y);
    for(b=1;b<=a;b++)
    {  sum=x+y;
        x=y;
        y=sum;
       printf("\t %d",sum);
    }
    return 0;
}
