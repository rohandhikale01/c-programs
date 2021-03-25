#include<stdio.h>
#include<conio.h>
main()
{
    char x;
    printf("Program to description of grade.");
    printf("\n Enter the grade .:  \n");
    scanf("%c",&x);
    switch(x)
    {
        case'E':
        printf("Excellent.");
        break;
        case'V':
        printf("Very good.");
        break;
        case'G':
        printf("Good");
        break;
        case'A':
        printf("average. ");
        break;
        case'F':
        printf("fail");
        break;
        default:
        printf("Invalid grade");
        break;
    }
}
