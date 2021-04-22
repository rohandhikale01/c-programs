#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    int n,i;

    printf("Program to find the norm (Distance) of two vectors-  \n");

    printf("Enter the Dimensions of  Vector - \n");
    scanf("%d",&n);

    float a[n],b[n],c[n],prd=0,sum=0,root;

    printf("Enter the Elements of first vector - \n");

    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }

    printf("Enter the elements of second vector-  \n");

    for(i=0;i<n;i++)
    {
        scanf("%f",&b[i]);

    }

    for(i=0;i<n;i++)
    {
        c[i]=(float)(a[i]-b[i]);
        prd=pow(c[i],2);
        sum=sum+prd;
    }

    root=sqrt(sum);

    printf("The distance between two vector= %f",root);

    getch();
    return 0;






}
