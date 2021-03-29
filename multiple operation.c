#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int x,y,z,c;
    printf("Program to perform multiple operation on two numbers\n");
    printf("Enter the two numbers.:   \n");
    scanf("%d%d",&x,&y);

    if(x==y)
    {
        printf("Given Numbers are equal\n");
    }
    if(x<y)
    {
        printf("\n Remainder=%d",x%y);
        printf("\n quotient=%d",x/y);
    }
    printf("\nEnter the number to find Range.:  \n");
    scanf("%d",&z);
    if(z>=x&&y>=z)
    {
        printf("%d lies between %d & %d",z,x,y);
    }
    else
    {
        printf("Given Number %d does not lie between %d & %d",z,x,y);
    }
    c=x;
    x=y;
    y=c;
    printf("\n after swap x=%d & y=%d",x,y);
    getch();
    return 0;
}
