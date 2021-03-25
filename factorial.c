#include<stdio.h>

main()
{
    int a,b,fact;
    printf("Program to find factorial of number.\n");
    printf("Enter the number.:  ");
    fact=1;
    scanf("%d",&b);
  for(a=1;a<=b;a++)
  {
      fact=fact*a;

  }
  printf("\nFactorial of %d =%d",b,fact);
  return 0;
}
