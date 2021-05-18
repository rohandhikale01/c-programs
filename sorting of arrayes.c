#include<stdio.h>
main()
 {
     printf("Program to sort two sorted array- \n");
     int i,size1,size2,j=0,temp;

     printf("Enter size of an array1\n");
     scanf("%d",&size1);

     printf("Enter size of an array2\n");
     scanf("%d",&size2);

     int a[size1],b[size2],c[size1+size2];
     printf("Enter numbers for array 1\n");

     for(i=0;i<size1;i++)
        {
            scanf("%d",&a[i]);
        }

      printf("Enter numbers for array 2\n");

      for(i=0;i<size2;i++)
      {
          scanf("%d",&b[i]);
    }

     //merging//
     for(i=0;i<size1;i++)
    {
       c[j]=a[i];
       j++;
    }
     for(i=0;i<size2;i++)
        { c[j]=b[i];
          j++;
        }
     printf("\nArray after merging\n");
     for(i=0;i<size1+size2;i++)
        {
            printf("%d\t",c[i]);
        }
      //Sorting //
     for(i=0;i<size1+size2;i++)
        {
            for(j=i+1;j<size1+size2;j++)
              {
                  if(c[i]>c[j])
                  {
                      temp=c[i];
                      c[i]=c[j];
                      c[j]=temp;
                  }
              }
        }

        printf("\nArray afetr sorting the merged array\n");
        for(i=0;i<size1+size2;i++)
            {
                printf("%d\t",c[i]);
            }
}
