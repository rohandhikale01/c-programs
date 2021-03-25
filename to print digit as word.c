#include<stdio.h>
#include<conio.h>
main()
{

    int a;
    printf("Program to print digit as word\n");
    printf("Please Enter the  digit.:  \n");
    scanf("%d",&a);
    switch(a)
 {
     case 0:
        printf("0=zero");
        break;
     case 1:
             printf("1=one");
             break;
     case 2:
         printf("2=Two");
         break;

     case 3:
        printf("3=Three");
        break;

     case 4:
        printf("4=Four");
        break;

     case 5:
        printf("5=Five");
        break;

     case 6:
        printf("6=six");
        break;

     case 7:
        printf("7=Seven");
        break;

     case 8:
        printf("8=Eight");
        break;

     case 9:
        printf("9=Nine");
        break;

     default:
        printf("It's not valid digit");
        break;

 }
}
