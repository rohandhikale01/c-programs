#include<stdio.h>
main()
{
    int i,j,k=4;

    printf("Program to print * pattern \n");

    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<k;j++)
        {
            printf("\t *");
        }
        k--;
    }
}
