#include<stdio.h>

main()
{
    int i,j,k=1,x=2;

    printf("Program to print pattern \n");

    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<4;j++)
        {
            if(j<=x)
            {
                printf("\t");
            }
            else
            {
                printf("\t%d",k);
            }
        }
        x--;
        k++;
    }
}
