#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{

float a;
printf("Program to check whether given number is positive or negative.\n");
printf("Enter the number.:  \n");
scanf("%f",&a);
if(a==0)
   {
       printf("number is zero.");
   }
if(a>0)
  {

  printf("Number is positive");
  }
if(a<0)
    printf("number is negative");

}
