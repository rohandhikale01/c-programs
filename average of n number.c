#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int n,i;
    printf("Program to find average of n number.\n");
    printf("Enter number of elements.:  \n");
    scanf("%d",&n);
    i=n-1;//because array start from 0 which calculate  consider one element more//
    int sum=0,a[i];
    float avg;

    for(i=0;i<n;i++)
    {
        printf("Enter the number %d",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];

    }
    avg=(float)(sum/n);
    printf("Average of given numbers is=%f",avg);
    getch();

}
