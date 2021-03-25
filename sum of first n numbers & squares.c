#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int a,b,c=0,d=0;
    printf("Program to print sum & sum of square of n number");
    printf("\nEnter the number: \n ");
    scanf("%d",&b);
    for(a=0;a<=b;a++)
        c=c+a;
        d=d+a*a;
    printf(" sum=%d",c);
    printf("\n sum of square = %d",d);

}
