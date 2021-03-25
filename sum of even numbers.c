#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int a,b,sum=0;
    printf("Program to find sum of first n even numbers");
    printf("Enter the number: ");
    scanf("%d",&a);

    for(b=0;b<=a;b=b+2)
        sum=sum+b;
        printf("sum=%d",sum);

}
