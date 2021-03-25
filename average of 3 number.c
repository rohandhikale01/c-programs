#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{

    float a,b,c,avg;
    printf("Program to print average of 3 numbers.");
    printf("\nEnter 3 numbers: ");
    scanf("%f%f%f",&a,&b,&c);

    avg=(a+b+c)/3;
    printf("\n avg=%f",avg);
}
