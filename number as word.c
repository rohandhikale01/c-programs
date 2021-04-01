#include<stdio.h>
#include<conio.h>
#include<math.h>
call(int x);
main()
{
    int a,b,e=0,x;
    printf("Program to check Whether given number is palindrome.\n");
    printf("Enter the number.:  \n");
    scanf("%d",&a);

    for(;a>0;)
    {
        b=a%10;
        e=e*10+b;
        a=a/10;
    }
    for(;e>0;)
    {
        x=e%10;
        call(x);
        e=e/10;
    }
}
call(int x)
{
    switch(x)
    {
        case 0: printf("\tZero");
        break;

        case 1: printf("\tOne");
        break;

        case 2: printf("\tTwo");
        break;

        case 3: printf("\tThree");
        break;

        case 4: printf("\tFour");
        break;

        case 5:printf("\tFive");
        break;

        case 6: printf("\tSix");
        break;

        case 7: printf("\tSeven");
        break;

        case 8: printf("\tEight");
        break;

        case 9: printf("\tNine");
        break;

        default:
        printf("Some thing is wrong");
        break;
    }
    return 0;
}

