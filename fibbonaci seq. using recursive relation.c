#include<stdio.h>
#include<conio.h>
#include<math.h>
int call_rec();

main()
{
    int i,ol=1,temp=0,cr;
    printf("Program to find the Fibonacci sequence using recursive function.\n");

    printf("How many terms do you want to find.:-- \n");
    scanf("%d",&i);
    printf("0\t 1");

    call_rec(i,ol,cr,temp);
    getch();
    return 0;
}

int call_rec(i,ol,cr,temp)
{
    if(i<2||i==2)
    {
        return 0;
    }
    else
    {
        cr=ol+temp;
        temp=ol;
        ol=cr;
        printf("\t %d",cr);
        i--;

    call_rec(i,ol,cr,temp);
    }
}
