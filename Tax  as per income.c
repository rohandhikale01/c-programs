#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int income;
    float  tax;
    printf("Program to calculate Tax as per Employ Income.\n");
    printf("Please Enter the income of An Employ.\n");
    scanf("%d",&income);
    if(income<150000)
    {
        printf("Congratulation. You Do Not Have to pay Any tax.\n");
    }
    else if(income>=150000&&income<=300000)
    {
        tax=income*0.20;
        printf("You have to pay 20% tax & it's Amount is=%f",tax);
    }
    else
    {
        tax=income*0.30;
        printf("You have to pay 30% tax & it's amount is=%f",tax);
    }
    getch();
    return 0;
}
