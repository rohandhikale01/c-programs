#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int num,i,a[100],x=0,b;
    printf("Program to convert Decimal number to octal.\n");
    printf("Enter the number which you want to convert.:  \n");

    scanf("%d",&num);// takes number from user which want to convert //
    b=num;
    for(i=0;num>0;i++) // condition checks that number should be greater than or equal to 0//
    {
        a[x]=num%8;  // save the remainder when number is divided by 8//
        num=num/8;   // Before finding next digit of binary number number is divided by 8 //
        x++;
    }
    printf("Octal conversion of %d = ",b);

    for(x=(x-1);x>=0;x--)
    {
        printf("%d",a[x]);  //print the Octal digits in a reverse order //
    }
    getch();
    return 0;

}
