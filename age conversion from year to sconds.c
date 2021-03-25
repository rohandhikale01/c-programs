#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    int a;// age in years=a & Age in second =A//
    float A;
printf("Program to convert age from years to seconds.");
printf("\n  Enter your age in years.: ");
scanf("%d",&a);
A=a*3.156*pow(10,7);
printf("Age in seconds=%f",A);
getch();
}
