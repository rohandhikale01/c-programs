#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c;
    printf("Enter the 3 Numbers:  ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>=b&&a>=c)
    {
        printf("Greatest Number is =%d",a);
    }
    if(b>=a&&b>=c)
    {
        printf("Greatest Number is =%d",b);
    }
    if(c>=a&&c>=b)
        printf("Greatest Number is =%d",c);
}
