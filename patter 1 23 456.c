#include<stdio.h>
main()
{
    int i,j,k=1;

    printf("Program to print the pattern 1 23 456 789...\n");

    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)
        {
            printf("\t%d",k);
            k++;
        }
    }
}
