#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int v;
    float r,l,w,h,b, Area,pi;
    pi=(22.0/7);
    printf("Program to find area of circle, rectangle & triangle in one program.\n");
    printf("Enter '1' to find area of circle\nEnter '2' to find area of rectangle \nEnter '3' to find Area of triangle.\n ");
    scanf("%d",&v);
    switch(v)
    {
        case 1: printf("To find Area of circle Enter the radius of circle.\n");
                scanf("%f",&r);
                printf("Area of circle=%f",pi*r*r);
                break;
        case 2: printf("To find Area of rectangle Enter length & width respectively .\n");
                scanf("%f%f",&l,&w);
                printf("Area of rectangle = %f",l*w);
                break;
        case 3: printf("To find Area of rectangle please Enter hight & bidth of triangle.\n");
                scanf("%f%f",&h,&b);
                printf("The area of triangle is=%f",(1.0/2)*h*b);
                break;
        default:
                printf("Please Enter the valid number, your input should be between 1 to 3 including 1&3");



    }
}
