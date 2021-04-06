#include<stdio.h>
#include<conio.h>
int isEven(int a);//function prototype //
main()
{
    int a,b,i,j,ans;
    printf("Program to Check whether number is even or odd for n numbers \n");
    printf("How many numbers do you want to check.:   \n");
    scanf("%d",&b);    //b is how many number do you want to check//
    for(i=1;i<=b;i++)
    {
        printf("Enter the number.:  \n");
        scanf("%d",&a);     // a is the number which you want to check//
       ans=isEven(a);//function call//
        if(ans==1)
        {
            printf("Number is Even\n");
        }
        else
        {
         printf("Number is odd \n");
        }
    }
    getch();
    return 0;
}
int isEven(a)  //function definition//
{

    if(a%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
