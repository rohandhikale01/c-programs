#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int i,j,a,prod;
    printf("Program to find the table up to which you want.\n");
    printf("Enter the number up to which you want to print the table.:  \n");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {   printf("\n");
        for(j=1;j<=a;j++)
        {
            printf("\t%d*%d=%d",i,j,i*j);
        }

    }
}
