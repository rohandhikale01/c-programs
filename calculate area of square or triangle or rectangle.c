#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int a,l,b,h,x;
    printf("Program to find area of different shape according to user.\n");
    printf("Enter 1 for area of square.\n Enter 2 for area of rectangle\n Enter 3 for area of triangle.\n");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        {
            printf("Enter the side of square.:  \n");
            scanf("%d",&a);
            printf("Area of square=%d\n ",a*a);
        }
        break;
    case 2:
        {
            printf("Enter the width & length of rectangle.\n");
            scanf("%d%d",&b,&l);
            printf("Area of rectangle=%d",l*b);
        }
        break;
    case 3:
        {
            printf("\n Enter the base & height of triangle.: ");
            scanf("%d%d",&b,&h);
            printf("Area of triangle=%f",(1.0/2)*b*h);
        }
        break;

    default:
        printf("\n please Enter valid  digit");
        break;

    }
    getch();
    return 0;
}
