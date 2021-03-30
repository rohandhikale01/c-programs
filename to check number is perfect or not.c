#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int a,sum=0,i;
    printf("Program to check whether Given number is perfect or not.\n");
    printf("Enter the number which you want to check.:  \n");
    scanf("%d",&a);
    printf("Factors of %d=",a);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            printf("\t %d",i);
            sum=sum+i;
        }
    }
    if(sum==a)
    {
        printf("\nNumber %d is perfect.",a);
    }
    else
    {
        printf("\n Number %d is not perfect.",a);
    }
}
