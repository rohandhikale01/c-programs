#include<stdio.h>
main()
{
    float a,b;
    printf("Program to find 3rd angle of triangle using 2 angles\n Enter the two angles.:  \n");
    scanf("%f%f",&a,&b);
    printf(" Third angle =%f",180-(a+b));
}
