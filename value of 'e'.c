#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    int i,fact=1;
    float e,sum=1;

    printf("Program to Find the value of 'e' \n");

    for(i=1;i<=33;i++)
    {
        fact=fact*i;
        sum=sum+(float)(1.0/fact);

    }
    printf("Value of e=%f",sum);
}
