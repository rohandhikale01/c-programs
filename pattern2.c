#include<stdio.h>
main()
{
    int row=5;
    int col=5;
    int temp=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(j<temp)
            printf(" ");
            else
            printf("%d",i+1);
        }
        temp++;
        printf("\n");
    }
}