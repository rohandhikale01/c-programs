#include<stdio.h>
main()
{
    int y;
    printf(" programTo check whether given year is leap or not\n Enter the year.:  \n");
    scanf("%d",&y);
    if(y%4==0||y%100==0||y%400==0)
        printf("It's leap year");
    else
        printf("It's not leap year");

}
