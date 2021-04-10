#include<stdio.h>
#include<conio.h>
#include<math.h>
int call_gcd();
main()
{
    int a,b,gcd;

    printf("Program to find gcd of two numbers using recursive function.\n");

    printf("Enter the two numbers .:   \n");
    scanf("%d%d",&a,&b);

    gcd=call_gcd(a,b);

    printf("GCD of %d & %d is=%d",a,b,gcd);

    getch();
    return 0;
}

int call_gcd(a,b)
{

 int gcd;
    if(b==0)
    {
        return a;
    }
    else
    {
        gcd=call_gcd(b,a%b);
    }
    return gcd;
}
