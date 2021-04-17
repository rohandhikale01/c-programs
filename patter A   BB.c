#include<stdio.h>

main()
{
    int i,j,k=65;

    printf("Program to print the pattern \n");

    for(i=0;i<4;i++)
    {
        printf("\n");
        for(j=0;j<=i;j++)
        {
            printf("\t %c",k);
        }
        k++;
    }
}
