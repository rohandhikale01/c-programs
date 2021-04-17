#include<stdio.h>

main()
{
     int i,j,k;

     printf("Program to print pattern \n");

     for(i=0;i<4;i++)
     {
         k=68;
         printf("\n");
         for(j=0;j<4;j++)
         {
             printf("\t %c",k);
             k--;
         }
     }

}
