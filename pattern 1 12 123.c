#include<stdio.h>

main()
{
    int i,j,k=1,x=0;

    printf("Program to print the the pattern \n");

    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<4;j++)
        {
            if(j<=x)
            {
                printf("\t%d",k);
            }
            else
            {
                printf("\t");
            }

        }
        x++;
        k++;
    }
}
