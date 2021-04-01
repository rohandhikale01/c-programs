#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int a,b,c=1,d,e=0;
    printf("Program to check Whether given number is palindrome.\n");
    printf("Enter the number.:  \n");
    scanf("%d",&a);
    b=a;
    for( ;a>0;)
    {
        d=a%10;
        e=e*10+d;
        a=a/10;


    }
    if(e==b)
    {
        printf("%d is palindrome ",e);
    }
    else
    {
        printf("%d is not palindrome.",b);
    }
}
