#include<stdio.h>

main()
{
    int i,j,k=0;

    printf("Program to * pattern \n");

    for(i=0;i<4;i++)
    {
        printf("\n");

        for(j=0;j<4;j++)
        {
            if(j<k)
            {
                printf("\t");
            }
            else
            {
                printf("\t*");
            }

        }
        k++;

    }

}
