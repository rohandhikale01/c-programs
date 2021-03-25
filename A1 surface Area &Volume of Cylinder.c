#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float r,h,a,v,pi;
    printf("Program To find the surface area & volume of cylinder");
    printf("\n Enter The Radius & Height of Cylinder Respectively: ");
    scanf("%f%f",&r,&h);

    pi=(22.0/7);//if does not use 22.0 then pi only store 3 not 3.142...//

    a=(2*pi*r*r)+(2*pi*r*h);

    v=(pi*r*r*h);
    printf("\nArea=%f",a);
    printf("\nVolume=%f",v);
}
