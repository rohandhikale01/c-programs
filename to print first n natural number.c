#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int n,i;
    printf("Program to print first n natural number");
    printf("\nHow many Number do you want to print: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("\n n=%d",i);
}
