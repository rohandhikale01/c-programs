#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int m,y;
    printf("Program to find a days in a month.");
    printf("\n Enter the month number.:  \n");
    scanf("%d",&m);
    switch(m)
    {
    case 1 :
        printf("It's January and it has 31 days");
        break;

    case 2 :
      {
          printf("Please Enter the full year.");
        scanf("%d",&y);
        if(y%4==0)
        {
            printf("It's leap year , February month with 29 days. ");
        }
        else
            printf("It's not a leap year hence February month has only 28 days");
            break;
      }

    case 3 :
        printf("It's March with 31 days");
        break;

    case 4 :
        printf("It's April with 30 days");
        break;

    case 5 :
        printf("It's may with 31 days");
        break;

    case 6 :
        printf("It's June with 30 days");
        break;

    case 7 :
        printf("it's July with 31 days ");
        break;

    case 8 :
        printf("It is August with 31 ays");
        break;
    case 9 :
        printf("It's September with 30 days");
        break;

    case 10 :
        printf("it's October with 31 days");
        break;

    case 11 :
        printf("it's November with 30 days");
        break;

    case 12 :
        printf("it's December with 31 days");
        break;
    default:
        printf("Number is not valid");
        break;

    }

}
