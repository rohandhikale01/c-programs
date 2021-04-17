#include<stdio.h>

main()
{
    int i,j,k=2;

    printf("Program to print * pattern \n");

    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<4;j++)
        {
            if(k>=j)
            {
                printf("\t");
            }
            else
            {
                printf("\t*");
            }
        }
        k--;
    }
}
