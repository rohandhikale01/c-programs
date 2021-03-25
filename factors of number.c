#include<stdio.h>
main()
{
    int a,b;
    printf("Program to find factors of number.\n");
    printf("Enter the number.:  \n");
    scanf("%d",&a);
    printf("Factors of given number are.: ");
    for(b=1;b<=a;b++)
    {
      if(a%b==0)
        printf("\t %d",b);
    }
}
