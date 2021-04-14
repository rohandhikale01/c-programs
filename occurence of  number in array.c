#include<stdio.h>
#include<conio.h>
int call();

main()
{
    printf("Program to find the occurrence of number in set \n");
    call();

    getch();

    return 0;
}

int call()
{
    int n,a,i,j=0,ar[n];

    printf("How many elements in your set \n");
    scanf("%d",&n);

    printf("Start Entering Numbers-  \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("Enter key  whose occurrence you want to find.:- \n");
    scanf("%d",&a);


    for(i=0;i<n;i++)
    {
        if(a==ar[i])
        {
            j++;
        }
    }

    if(j==0)
    {
        printf("%d is does not occur in set \n",a);
    }
    else if(j==1)
    {
        printf("%d is occur only once in set \n");
    }
    else
    {
        printf("%d is occur %d times in set \n",a,j);
    }
}
