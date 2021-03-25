#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,result;
    char operator;
    printf("Enter any two integer");
    scanf("%d%d",&a,&b);
    printf("Enter arithmetic operation \n ");
    operator=getch();
    switch(operator)
    {
        case '+':result=a+b;
        printf("Sum=%d",result);
        break;

        case '-':result=a-b;
        printf("Subtraction=%d",result);
        break;

        case '*':result=a*b;
        printf("product=%d",result);
        break;

        case '/':result=a/b;
        printf("result=%d",result);
        break;

        default: printf("\n The operation is not defined In Above Case ");

    }
}
