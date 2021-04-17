#include<stdio.h>
main()
{
    int i,j,k=1;

    printf("Program to print the pattern \n");

    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<4;j++)
        {

            printf("\t%d",k);
            k++;
        }

    }
}
