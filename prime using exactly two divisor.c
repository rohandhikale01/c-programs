#include<stdio.h>
#include<conio.h>

main()
{
    int n,i,j,k,y=0;

    printf("Program to print n prime numbers  using logic that prime numbers has exactly two divisors \n ");

    printf("How many numbers do you want to find\n");
    scanf("%d",&n);


    for(i=2;y<=n;i++)
    {
        k=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                k++;
            }

        }
        if(k==2)
        {
            printf("\n %d",i);
            y++;

        }
    }
}
