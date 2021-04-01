#include<stdio.h>
main()
{
    int a,b;
    printf("Program to print reverse number.\n");
    printf("Enter the number which you want to reverse.:  \n");
    scanf("%d",&a);
    for(a=a;a>0;)
    {
        b=a%10;
        printf("%d",b);
        a=a/10;
    }
}
