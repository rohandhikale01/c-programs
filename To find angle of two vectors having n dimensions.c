#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
    int i,n;
    float nrm1,nrm2,inp,sum=0,sum1=0,sum2=0,prd,prd1,prd2,angle,angle1;

    printf("Program to find the angle between two vectors having n dimensions &Check Whether They are orthogonal or not \n");

    printf("Enter the dimensions of your Vector-  \n");
    scanf("%d",&n);

    float a[n],b[n];

    printf("Start Entering the Co=ordinates of first vector - \n");

    for(i=0;i<n;i++) //scans first vector & Finds the norm of first vector//
    {
        scanf("%f",&a[i]);
        prd1=(float)(a[i]*a[i]);
        sum1=sum1+prd1;
    }

    nrm1=sqrt(sum1);

    printf("Enter the co-ordinates of second vector- \n");
    for(i=0;i<n;i++) //scans second vector & Finds the norm of second vector //
    {
        scanf("%f",&b[i]);
        prd2=(float)(b[i]*b[i]);
        sum2=sum2+prd2;
    }

    nrm2=sqrt(sum2);

    for(i=0;i<n;i++) //finds the inner product of two vectors //
    {
        prd=(float)a[i]*b[i];
        sum=sum+prd;
    }
     inp=sum;
      if(inp==0)
     {
         printf("Given Two vectors are Orthogonal Hence Angle between them is 90 degrees \n\n");
         getch();
         return 0;
     }
     else
     {
         printf("Given Two vectors Are not Orthogonal \n");
     }

     angle=acos((inp)/(nrm1*nrm2));//calculate the angle in radians //

     printf("Angle between two vectors in radians= %f \n",angle);

     angle1=(float)(angle*(180/3.1427)); //calculate angle in degree //
     printf("Angle between two vectors in degree= %f ",angle1);

     if(angle==0)
     {
         printf("Given Two vectors are Orthogonal \n");
     }
     else
     {
         printf("Given Two vectors Are not Orthogonal \n");
     }

     getch();
     return 0;

}
