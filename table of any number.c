#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int a,b,c;
    printf("program to find table of number.");
    printf("\n Enter the number: ");
    scanf("%d",&a);
    for(b=1;b<=10;b++)
    {c=a*b;
    printf(" \n %d * %d=%d",a,b,c);
    }
    return 0;

}
