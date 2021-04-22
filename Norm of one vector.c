#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    int n,i;
    float prd,sum=0,root;

    printf("Program to find the norm of one vector \n");

    printf("What is the Dimensions of your vector- \n");
    scanf("%d",&n);

    float a[n];

    printf("Enter the Elements of the vector - \n");

    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }

     for(i=0;i<n;i++)
    {
        prd=(float)(a[i]*a[i]);
        sum=sum+prd;
    }

    printf("Inner product=%f \n",sum);

    root=sqrt(sum);
    printf("Norm of vector=%f",root);
    getch();
    return 0;
}
