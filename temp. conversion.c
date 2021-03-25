#include<stdio.h>
#include<conio.h>
main()
{
    float TF,TC;
    printf("Program to convert temperature from Fahrenheit to Celsius ");
    printf("\n Enter the temp. in Fahrenheit: ");
    scanf("%f",&TF);
    TC=(5.0/9)*(TF-32);
    printf("\n Temp. in Celsius: %f",TC);
}
