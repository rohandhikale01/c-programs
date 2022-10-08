#include<stdio.h>

int main()
{
    printf("Program to print the pattern: \n");
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
            printf("*");
        }
        printf("\n");
        temp++;
    }
}
