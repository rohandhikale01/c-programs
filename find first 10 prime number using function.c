#include<stdio.h>
#include<conio.h>

int isPrime();
main()
{
    int a,b,x=0,ans,j,n;
    printf("Program to print first n prime numbers using function\n");
    printf("How many prime numbers do you want to find.:   \n");
    scanf("%d",&n);
    for(j=2;x<=n;j++)
    {ans=isPrime(j);
    if(ans==1)
    {
        printf("\n Number %d is prime",j);
        x++;
    }
    }
    getch();
    return 0;
}
int isPrime(int j)
{

    int num,i;
    num=j;
    for(i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            if(num==i)
            {
              return 1;

            }
            else
            {
               return 0;
                break;
            }
        }
    }
}
