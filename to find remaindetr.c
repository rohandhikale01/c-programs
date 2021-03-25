#include<stdio.h>
#include<math.h>

main()
{
    int a,b,c,r;
    printf(" Program to remainder without using remainder operation ");
    printf("\n Enter dividend the divisor numbers respectivly: ");

    scanf("%d%d",&a,&b);
    c=a/b;
    r=a-c*b;
    printf("\n remainder=%d",r);

}
