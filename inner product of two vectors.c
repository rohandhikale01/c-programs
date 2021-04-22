#include<stdio.h>
#include<conio.h>

main()
{
    printf("Program To find Inner product of two vectors \n");

    int i,n;
    float sum=0,prd;

    printf("Enter the dimensions of vector- \n");
    scanf("%d",&n);

    float a[n],b[n];

    printf("Enter the co-ordinates of first vector - \n");

    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }

    printf("Enter the co-ordinates of second vectors-  \n");

    for(i=0;i<n;i++)
    {
        scanf("%f",&b[i]);
    }

    for(i=0;i<n;i++)
    {
        prd=(float)(a[i]*b[i]);
        sum=sum+prd;
    }

    printf("Inner product of two vectors=%f",sum);

    getch();
    return 0;

}
