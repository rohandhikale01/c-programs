#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,square,cube;
    printf("Program to print square & Cube of first n Number");
    printf("\n How Many Square & Cube You Want to print: ");
    scanf("%d",&b);
    for(a=1;a<=b;a++)
    {
        square=a*a;
        cube=square*a;
        printf("\n square of %d =%d\t cube of %d =%d",a,square,a,cube);
    }
}
