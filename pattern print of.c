#include<stdio.h>
#include<conio.h>

main()
{
    int i,j,num1,num2;

    printf("How many rows do you want to print.:-  \n");
    scanf("%d",&num1);

    printf("How many columns do you want to print.:-  \n");
    scanf("%d",&num2);

    for(i=0;i<num1;i++)
    {
        printf("\n");
        for(j=0;j<num2;j++)
        {
            printf("\t*");

        }
    }
    getch();
    return 0;
}
