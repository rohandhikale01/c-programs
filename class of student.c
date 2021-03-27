#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c;
   float avg;
   printf("Program to find average & to print class of student.\n");
   printf("Please Enter the marks obtain.:   \n");
   scanf("%d%d%d",&a,&b,&c);
   avg=(float)((a+b+c)/3.0);
   printf("Average marks of student=%f \n",avg);

   if(avg>=80)
   {
       printf("Congratulation. You pass in first class with distinction.\n");
   }
   else if(avg>=60)
   {
       printf("Congratulation. You pass in first class.\n");

   }
   else if(avg>=40)
   {
       printf("Congratulation. You pass in second class.\n ");

   }
   else if(avg>=36)
   {
       printf("Congratulation. You pass in pass class/n");
   }
   else
   {
       printf("Sorry. You are fail.\n");
   }
   getch();
   return 0;
}
