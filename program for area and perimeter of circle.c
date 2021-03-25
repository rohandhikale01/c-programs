#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int r;
    float pi,area,perimeter;
    pi=(22.0/7);
    printf("Program To find Area & Perimeter of Circle");
    printf("\nEnter The Radius Of Circle in CM: ");
    scanf("%d",&r);

     area=pi*r*r;
     printf("\nArea of Circle =%f Sq.CM",area);
     perimeter=2*pi*r;
     printf("\nPerimeter of Circle =%f CM",perimeter);
}
