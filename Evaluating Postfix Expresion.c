#include<stdio.h>
#include<conio.h>
#include<ctype.h>

#define max 25
char postfix[max],stack[max];
int top=-1;
int pop();
void push();

void solve(char ch)
{
    int a=pop(); //pops first digit//
    int b=pop(); //pops second(top) digit //

    switch(ch)
    {
        case '/':push(b/a);
        break;

        case '*':push(b*a);
        break;

        case '+':push(b+a);
        break;

        case '-':push(b-a);
        break;
    }
}

main()
{
    int i=0;
    printf("Program to solve Postfix Expression.\n");
    printf("Enter the postfix expression.: ");
    scanf("%s",&postfix);

    char x=postfix[i];
    while(x!='\0') //loop runs until last \0 occur //
    {
         x=postfix[i];

        if(isdigit(x))
           {
               push(x-48); //to push the integer value //
           }
        else if(x=='/'||x=='*'||x=='-'||x=='+')
        {
            solve(x); //
        }
        i++;
        x=postfix[i];
    }
   int  result=pop(); //pop final answer//

   printf("Ans= %d",result);

   getch();
   return 0;

}

int pop() //to pop first element //
{
    int temp=stack[top];
    top--;
    return temp;
}


void push(int x) //push element //
{
    if(top==(max-1))
    {
        printf("\nStack Overflow.");
    }
    else
    {   top++;
        stack[top]=x;
    }
}
