#include<stdio.h>
#include<conio.h>

main()
{
    printf("Program to find the residue r with integer a and modulo m \n");

    int a,m,R,r,b;

    printf("Enter the integer a and modulo m \n");
    scanf("%d%d",&a,&m);

    if(a<0)
    {
        b=(-1)*a;
        R=b%m;
    }
    else
    {
        b=a;
        R=b%m;
    }

    if(a>=0)
    {
        r=R;
        printf("Value of residue r=%d",r);
    }
    else if(a<0&&R!=0)
    {
        r=m-R;
        printf("Value of residue r=%d",r);
    }
    else if(a<0&&R==0)
    {
        r=0;
        printf("Value of r=%d",r);
    }
    getch();
    return 0;
}
