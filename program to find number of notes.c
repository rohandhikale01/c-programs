

#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int a,b,c,x,y,z;
    printf("Program to print number of notes.");
    printf("\n Enter The amount: ");
    scanf("%d",&x);
    a=x/10;//to calculate notes of rupees 10//
    printf("\n Number of notes of rupees 10=%d",a);
    y=x%10;//to calculate amount left which is less than 10//
    b=y/5;//to calculate number of notes of rupees 5//
    printf("\n Number of notes of rupees 5=%d",b);
    z=y%5;//to calculate amount left which is less than 5//
    c=z;
    printf("\n Number of notes of rupees 1=%d",c);
    printf("\n Total number of notes=%d",a+b+c);
}
