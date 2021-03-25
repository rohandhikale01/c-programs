#include<stdio.h>
#include<conio.h>
#include<math.h>
int l=2,k=5;//declaration with intiallizations//
const r=9,t=5;

void add(int a,int b); // function prototype//
void sub(int p,int q);
void mult();
void div();
main()
{
    int m,n;
    printf("Program to study of function.\n");
    printf("Enter the value of m & n to perform operation.");
    scanf("%d%d",&m,&n);
    add(m,n);// function call//
    printf("\n Back to main\n");
    sub(m,n);
    printf("\n back to main after sub.\n");
    mult(m,n);
    printf("back to main after mult.");

    printf("\n Value of r & t before div=%d & %d",r,t);

    div(m,n);
    printf("\n Inside main After div.");
    return 0;

}

void add(int a,int b) // function definition//
{
    printf("\n Inside add");
    printf("\n a=%d &b=%d",a,b);
    printf("\n add=%d",a+b);
    return 0;
}
void sub(int x,int y)
{
    printf("\n Inside sub");
    printf("\n x=%d & y=%d",x,y);
    printf("\n Sub=%d",x-y);
    return 0;
}
void mult(m,n)
{    l=m;
     k=n;
    printf("\n inside mult");
    printf("\n l=%d & k=%d",l,k);
    printf("\n mult=%d",l*k);
    return 0;
}
void div(int s,int t)
{
    printf("\n Inside div");
    printf("\n r=%d & t=%d",r,t);
    printf("\n div=%d",r/t);
    return 0;
}
