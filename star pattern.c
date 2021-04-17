#include<stdio.h>

main()
{
    int i,j;

    printf("Program to print pattern of * \n");

    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)
        {
            printf("\t *");
        }
    }
}
