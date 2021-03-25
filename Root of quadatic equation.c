#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float a,b,c,D,r1,r2;
    printf("Program to find root of quadratic equation.\n");
    printf("Enter the  value of a,b,c respectively.:   \n");
    scanf("%f%f%f",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>=0)
    {
        printf("Root of Equation are Real.\n");
        r1=(-b+sqrt(D))/(2*a);
        r2=(-b-sqrt(D))/(2*a);
        printf("first Root=%f & Second Root=%f",r1,r2);

    }
    else
    {
        printf("Roots of Quadratic Equation Are complex\n");
        D=(-1)*D;
        printf("First Root=%f + i%f",(-b/(2*a)),(sqrt(D)/(2*a)));
        printf("Second Root=%f - i%f",(-b/(2*a)),(sqrt(D)/(2*a)));
    }
}
