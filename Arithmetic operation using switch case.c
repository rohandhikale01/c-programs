#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int a,b,mod,x;


    printf(" program to perform arithmetic operation using switch case.\n");
    printf("Enter the two integer.:  \n");
    scanf("%d%d",&a,&b);
    printf("Enter the operation which you want to perform.\n ");
    scanf("%d",&x);
    switch(x)
    {

    case '+':
        printf("Addition=%d",a+b);
        break;
    case '-' :
        printf("Subtraction=%d",a-b);
        break;
    case '*':
        printf("Multiplication=%d",a*b);
        break;
    case '/':
        printf("Division=%f",(float)(a/b));
        break;
    case '%' :
        printf("Modulo=%d",a%b);
    default:
        printf("Please Enter valid Arithmetic operation.");
    }
}
