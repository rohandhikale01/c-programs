#include<stdio.h>

main()
{
    int i,j,k=0,x=65;

    printf("Program to print the pattern ABCD BCD CD D \n");

    for(i=0;i<4;i++)
    {
        printf("\n");
        x=65;
        for(j=0;j<4;j++)
        {
            if(j>=k)
            {
                printf("\t%c",x);
            }
            else
            {
                printf("\t");
            }
            x++;

        }
        k++;
    }
}
