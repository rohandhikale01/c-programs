#include<stdio.h>
#include<conio.h>
main()
{
    int a=1,b;
    printf("Enter How Many  First Even Number you want to print: ");
    scanf("%d",&b);
    b=2*b;
    while(a<=b)
    {
        if(a%2==0)
        {
            printf("\n %d",a);
        }
        a++;
    }

}
