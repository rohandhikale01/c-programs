#include<stdio.h>
#include<conio.h>

main()
{
    int size1,size2,size3,i,j,k;
    printf("Program to find intersection of two integer set.\n");
    printf("How many elements in first set \n");
    scanf("%d",&size1);

    printf("How many elements in second set.\n");
    scanf("%d",&size2);
    if(size1>size2)
    {
        size3=size2;
    }
    else if(size1<size2)
    {
        size3=size1;
    }
    else
    {
        size3=size2;
    }



    int ar1[size1],ar2[size2],ar3[size3];

    printf("Enter the elements of first set.:  \n");
    for(i=0;i<size1;i++)//scans element of first set//
    {
        scanf("%d",&ar1[i]);
    }


    printf("Enter the element of second set\n");
    for(i=0;i<size2;i++)//scans element of second set//
    {
        scanf("%d",&ar2[i]);
    }
    k=0;
    for(i=0;i<size1;i++) //find the common elements//
    {
        for(j=0;j<size2;j++)
        {
            if(ar1[i]==ar2[j])
            {
                ar3[k]=ar1[i];
                k++;
            }
        }
    }
    if(k==0)// if no element is common//
    {
        printf("The intersection of two set is empty.\n");
    }

   else
    {
     printf("Intersection of two set.\n");
    for(i=0;i<k;i++)//prints common element //
    {
        printf("\t %d",ar3[i]);
    }
   }
}



