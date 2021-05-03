#include<stdio.h>
#include<conio.h>
int rec();

int main()
{
    int n,sum=0;
    printf("Program to find sum of first n numbers using recursion relation\n");

    printf("Enter the value-  \n");
    scanf("%d",&n);

    sum=rec(n,sum);

    printf("Sum=%d",sum);
}

int rec(int n)
{
    int sum=0;
    if(n==1)
    {
        return 1;
    }
    else
    {
        sum=n+rec(n-1);
    }
    return sum;
}
