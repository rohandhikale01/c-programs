#include<stdio.h>
#include<conio.h>
main()
{
    float a,b;
    printf("Program to check whether give number are same or not.");
    printf("\n Enter two number.:  \n");
    scanf("%f%f",&a,&b);

    if(a==b)
        printf("given numbers are equal");
    else
        printf("given numbers are not same.");

}
