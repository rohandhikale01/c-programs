#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float p,roi,t,I,A;
    printf("Program to find Simple interest & Maturity Amount.");
    printf("\nEnter the principle amount,rate of interest & time period respectively.:  ");
    scanf("%f%f%f",&p,&roi,&t);

    I=p*roi*(t/100.0);
    A=p+I;
    printf(" \n Interest=%f & Amount=%f",I,A);



}
