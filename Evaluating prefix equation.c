#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

#define max 30

int Top=-1;
char stk[max],prefix[max];

void solve(char x)
{
   int b=stk[Top--];
   int a=stk[Top];
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
   stk[Top]=temp;
}


main()
{
    printf("Program to evaluate prefix equation.\n");

    printf("\nEnter prefix equation: ");
    scanf("%s",&prefix);

    strcpy(prefix,strrev(prefix));

    int i=0;
    char x,ch;

    x=prefix[i];

    while(x!='\0')
    {
        if(isalnum(x))
        {
             stk[++Top]=(int)(x-48);
        }
        else if(x=='/'||x=='*'||x=='+'||x=='-')
        {
            solve(x);
        }

        i++;
        x=prefix[i];
    }

    printf("\n Ans=%d",stk[0]);
}


