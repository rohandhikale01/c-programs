#include<stdio.h>
#include<conio.h>
main()
{
    float x,y;
    printf("Program to find quadrant of given point.");
    printf("\nEnter the point.:  \n");
    scanf("%f%f",&x,&y);

    if(x==0&&y==0)
    {
       printf("given point is at origin.");

    }
    if(x==0)
    {
        if(y>0)
        {
            printf("Given point is on positive y-axis.");
        }
        if(y<0)
        {
            printf("given point is on negative y-axis");
        }
    }
    if(y==0)
    {
        if(x>0)
        {
            printf("given point is on positive x-axis");
        }
        if(x<0)
        {
            printf("Given point is on negative x-axis");
        }
    }
    if(x>0&&y>0)
    {
        printf("Given point is in 1st quadrant.");
    }
    if(x>0&&y<0)
    {
        printf("Given number is in 4th quadrant");
    }
    if(x<0&&y>0)
    {
        printf("Given point is in 2nd quadrant.");
    }
    if(x<0&&y<0)
    {
        printf("Given point is in 3rd quadrant.");
    }

}
