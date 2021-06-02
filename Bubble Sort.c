#include<stdio.h>
#include<conio.h>
int count=0,swap=0;

main()
{
    printf("Program to perform BUBLLE Sorting \n");

    int size,i,j,temp,k;

    printf("Enter the size of your array- "); //scanning the size of array //
    scanf("%d",&size);

    int a[size];

    printf("\nStart Entering the elements- ");

    count=count+6;
    for(i=0;i<size;i++)  //accepting the elements of array //
    {
        scanf("%d",&a[i]);
        count=count+2;
    }
    count++;

    printf("\nEnter 1 to print elements in Ascending order-  ");
    printf("\nEnter 2 to print elements in Descending order-  \n");
    scanf("%d",&k);

    count=count+3;

    switch(k)
    {
    case 1: for(j=0;j<(size-1);j++)
            {
              count++;
              for(i=0;i<(size-1-j);i++)
              {
                count++;
                if(a[i]>a[i+1]) //swapping of elements //
               {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swap++;
                count=count+4;
               }
              }
             }
              printf("Elements in Descending order- \n");
              count++;
        break;
    case 2:for(j=0;j<(size-1);j++)
            {
              count++;
              for(i=0;i<(size-1-j);i++)
              {
                count++;
                if(a[i]<a[i+1]) //swapping of elements //
               {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                swap++;
                count=count+4;
               }
              }
             }
             printf("Elements in Descending order- \n");
             count++;
        break;
    default:
        printf("Enter the valid number.");
    }
    count++;

    for(i=0;i<size;i++)
    {
        printf("\t%d",a[i]);
        count=count+2;
    }

   printf("\nStep Count=%d & swap count=%d",count,swap);
}
