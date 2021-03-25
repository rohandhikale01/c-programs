#include<stdio.h>
#include<conio.h>
 void main()
{

    int a=0,b;
    printf("Program to print first n odd number");
    printf("\nHow many odd Number you Want to print: ");
    scanf("%d",&b);
    while(a<=2*b)
    {
        if(a%2!=0)
            printf("\n%d",a);
        a++;
    }

}
