#include<stdio.h>
#include<math.h>
main()
{
    int p,q,r;
    printf("Program to check whether given number is even or odd by using remainder theorem. \n");
    printf("Enter the number.:  \n");
    scanf("%d",&p);
    q=p/2;
    r=p-2*q;
    if(r==0)
        printf("Number is ");
    else
        printf("Number is odd");
}
