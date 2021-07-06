#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

#define max 30

int top=-1;
char stk[max],prefix[max],rev[max];

void push(int num)
{
    top++;
    stk[top]=num;
}

int pop()
{
    return stk[top--];
}

void solve(char x)
{
   int b=pop();
   int a=pop();
   int temp;

   switch(x)
   {
       case '+':temp=(b+a);
       break;

       case '-':temp=(b-a);
       break;

       case '*':temp=b*a;
       break;

       case '/':temp=b/a;
       break;
   }
   push(temp);
}


main()
{
    printf("Program to evaluate prefix equation.\n");

    printf("\nEnter prefix equation: ");
    scanf("%s",&prefix);

    strcpy(prefix,strrev(prefix));

    printf("rev= %s",prefix);

    int i=0;
    char x,ch;

    x=prefix[i];

    while(x!='\0')
    {
        if(isalnum(x))
        {
            push(x-48);
        }
        else if(x=='/'||x=='*'||x=='+'||x=='-')
        {
            solve(x);
        }

        i++;
        x=prefix[i];
    }

    int result=pop();

    printf("\n Ans=%d",result);
}


