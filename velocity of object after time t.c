#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float u,t,a,V;//initial velocity=u & acceleration=a//
    printf("program to find velocity of object after time t");
    printf("\n Enter the value of initial velocity(m/s),acceleration(m/s^2) & time(sec) respectivly: ");
    scanf("%f%f%f",&u,&a,&t);

    V=u+a*t;

    printf("\n Velocity after time %f sec.is=%f(m/s)",t,V);



}
