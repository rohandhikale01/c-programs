#include<stdio.h>
#include<conio.h>

int check();
int main()
{
    printf("Program to Count Even & Odd number is an array \n");

    int size,i,var1=0,var2=0;

    printf("Enter the size of your array- \n");
    //Takes input from user as size of array //
    scanf("%d",&size);

    //creates array of size which is defined by user //
    int a[size];

    printf("Enter the elements- \n");

     //scanning of elements of array //
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    //calling a function with actual parameters  size of array,array & address of var1,var2 //
    check(size,a,&var1,&var2);

    //printing total number of even & odd elements of array //
    printf("Total even elements in an array- %d \n",var1);
    printf("Total Odd elements in an array- %d",var2);

    getch();
    return 0;

}
int check(int size,int b[],int *pvar1,int *pvar2) //*pvar1 & *pvar2 are integer pointer which are used to store address of var1 & var2 respectively//
{
    int i,temp1=0,temp2=0; //temp1 & temp2 stores total number of even & odd elements in an array //
    for(i=0;i<size;i++)
    {
      if(b[i]%2==0)
      {
          temp1++;  //if number is even then temp1 is incremented by 1 //
      }
      else
      {
          temp2++;  //if number is odd then temp2 is incremented by 1//
      }
    }

    *pvar1=temp1;  //value of var1 is get updated according to value of temp1//
    *pvar2=temp2;  //value of var2 is get updated according to value of temp2//

}
