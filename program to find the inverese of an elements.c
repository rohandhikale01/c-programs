#include<stdio.h>
#include<conio.h>

main()
{
    printf("Program to find the multiplicative inverse of an element \n");

    int a,m,i,x,y=0;

    printf("Enter value of modulo- \n");
    scanf("%d",&m);

    printf("Enter the number whose inverse do you want find \n");
    scanf("%d",&a);

    for(i=0;i<m;i++)
    {

        if((a*i)%m==1)
        {
            printf("Inverse of %d is %d for mod %d",a,i,m);
            y++;
            break ;

        }
    }
    if(y==0)
    {
        printf("The gcd of %d & %d is not 1 hence multiplicative inverse dose not exist",m,a);
    }
    getch();
    return 0;
}
