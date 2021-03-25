#include<stdio.h>
#include<conio.h>
main()
{
     float x,y,p,pi,c,a;

     printf("Program to print Area & perimeter of ring");
     printf("\nEnter the inner & outer radius respectively: ");
     scanf("%f%f",&x,&y);

     pi=(22.0/7);

     p=2*pi*(x+y);
     a=pi*(x*x-y*y);
     printf("\nPerimeter=%f",p);
     if(a<0)
       {
        c=(-1.0)*a;
     printf("\nArea=%f",c);
       }
     else
       {
        printf("\nArea=%f",a);
       }


}
