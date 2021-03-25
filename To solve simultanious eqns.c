#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float a,b,c,p,q,r,x,y;
    printf("Program to solve simultaneous Equation.");
    printf("\n Write the equation as follows   ax+by=c ");
    printf("\n Enter the a,b,c of first equation.:   ");
    scanf("%f%f%f",&a,&b,&c);
    printf("\n Enter the value of a,b,c for second equation.:    ");
    scanf("%f%f%f",&p,&q,&r);
    y=(float)((p*c-r*a)/(p*b-q*a));
    x=(float)((q*c-r*b)/(a*q-b*p));
    printf("x=%f &y=%f",x,y);
    return 0;


}
