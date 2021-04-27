#include<stdio.h>
#include<conio.h>

main()
{
    int n,i,j,min;

    printf("Program to find the Minimum element of an array \n");

    printf("How many elements in your array- \n");
    scanf("%d",&n);

    int a[n];

    printf("Start Entering the numbers-n \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    min=a[0];

    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }

    printf("Minimum element of your array is=%d",min);
    getch();
    return 0;

}
