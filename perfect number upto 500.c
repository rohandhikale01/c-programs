#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int i,j,sum=0;
    printf("Program to Find all perfect Numbers up to 500\n");

     for(i=1;i<=500;i++)
     {
         sum=0;
         for(j=1;j<i;j++)
         {

             if(i%j==0)
             {
                 sum=sum+j;

             }

         }
         if(sum==j)
         {
           printf("\t %d",i);
         }
     }
}
