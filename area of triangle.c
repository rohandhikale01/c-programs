#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float a,b,c,s,area;
    printf("program to find area of triangle using sides of triangle.");
    printf("Enter 3 sides of triangle:  ");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area=%f",area);


}
