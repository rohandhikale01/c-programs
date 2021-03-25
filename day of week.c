#include<stdio.h>
main()
{
    int d;
    printf("Program to find a day of week \n Enter the number.:  \n");
    scanf("%d",&d);
    switch(d)
    {
    case 1:
        printf("It's sunday ");
        break;

    case 2:
        printf("It's Monday");
        break;

    case 3:
        printf("it's Tuesday ");
        break;

    case 4:
        printf("It's Wednesday");
        break;

    case 5:
        printf("It's Thursday ");
        break;

    case 6:
        printf("It's Friday ");
        break;

    case 7:
        printf("it's Saturday");
        break;

    default:
        printf("Please Enter The valid number");
        break;
    }
}
