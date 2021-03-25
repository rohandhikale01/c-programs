#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{

    float r,a,c;
    printf("program to find area & circumference of circle");
    printf("\n Enter radius of circle: ");
    scanf("%f",&r);
    a=(float)(22.0/7)*r*r;
    c=2*(22.0/7)*r;
    printf("Area=%f & circumference=%f",a,c);
    getch();

}
