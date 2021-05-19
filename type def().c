#include<stdio.h>
#include<conio.h>
typedef int mynum; //In this program the variables under data type mynum are consider as int variable //
main()
{
   mynum a,b,c;

   printf("Enter the value of Two Integer.- ");
   scanf("%d%d",&a,&b);

   printf("Sum=%d \n ",c=a+b);

   //typedef for array //

   typedef int array[5]; //In this program the variable array is used as int array of size 5//

   array list={1,2,3,4,5};

   for(int i=0;i<5;i++)
   printf("%d\t",list[i]);
}


