#include<stdio.h>
#include<math.h>
main()
{
    int m,p,c,t,mp;//m=math,p=physics, c= chemistry, t= total of all subjects, mp= total marks of physics & math//
    printf("Program to check whether student is eligible for course or not.");
    printf("\n please Enter the marks of math, physics & chemistry respectively.:  ");

    scanf("%d%d%d",&m,&p,&c);
     t=m+p+c;
     mp=m+p;
     if(m>=65&&p>=55&&c>=50&&t>=190&&mp>=140)
     {
         printf("Congrats. your eligible for course.");
     }
     else
     {
         printf("sorry. Your not eligible.");
     }
}
