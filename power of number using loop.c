#include<stdio.h>
main()
{
    int a,b,c,pow;
    printf("Program to find the power of number using loop.\n");
    printf("Enter the number & power you want to find.:   \n");
    scanf("%d%d",&a,&b);
    pow=1;
    for(c=1;c<=b;c++)
    {
        pow=pow*a;
    }
    printf("\n %d",pow);
}
