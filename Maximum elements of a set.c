#include<stdio.h>
#include<conio.h>

main()
{
    int n,i,max;
    printf("Program to find the maximum elements of a set \n");

    printf("How many elements in your set \n");
    scanf("%d",&n);

    int a[n];

    printf("Start Entering the Numbers -  \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];

    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    printf("Maximum elements of set= %d",max);

    getch();
    return 0;
}
