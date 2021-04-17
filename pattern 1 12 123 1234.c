#include<stdio.h>

main()
{
    int i,j,k;

    printf("Program to print the patter 1 12 123 1234 \n");

     for(i=0;i<4;i++)
     {
         printf("\n");
         k=1;
         for(j=0;j<=i;j++)
         {
             printf("\t%d",k);
             k++;
         }
     }
}
