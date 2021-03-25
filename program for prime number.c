#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int i,a;
    printf("Program for prime Number\n");
    printf("Enter the Natural Number");
    scanf("%d",&i);
    for(a=2;a<=i;a++)
    {
        if(i%a==0)
    {
        if(a==i)
        {
        printf("\n Given Number i=%d is prime",i);
        }
        else
            printf("Given Number i=%d is not prime",i);
        break;
    }
    }
}

