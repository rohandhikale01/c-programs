#include<stdio.h>
#include<conio.h>

void push();
void display();
void pop();
int isempty();
int isfull();

#define N 5
int stack[N],top=-1;

main()
{
    printf("Stack implantation Using Array(Static).\n");

    int x,key=1;

    while(key=1)
    {
        printf("\nEnter 0 if you are done.:");
        printf("\nEnter 1 to push element in a stack.:");
        printf("\nEnter 2 to pop element from stack.:");
        printf("\nEnter 3 to check whether stack is empty or not.:");
        printf("\nEnter 4 to check whether stack is full or not.:");
        printf("\nEnter 5 to print the elements of stack.:");
        scanf("%d",&x);

        switch(x)
        {
            case 0: getch();
                    return 0;
                break;

            case 1:push();
                break;

            case 2:pop();
                break;

            case 3:isempty();
                break;

            case 4:isfull();
                break;

            case 5:display();
                break;

            default:printf("\nEnter Valid number.\n");
            break;
        }
    }
}

int isempty()
{
    if(top==(-1))
    {
        printf("\nStack is Empty.\n");
    }
    else
    {
        printf("\nStack is nonempty.\n");
    }
}

int isfull()
{
    if(top==(N-1))
    {
        printf("\nStack is Overflow.\n");
    }
    else
    {
        printf("\nStack is Not overflow.\n");
    }
}

void pop()
{
    if(top==(-1))
   {
       printf("\nStack is Empty.\n");
   }

    else
    {
        printf("\nTop Element %d is pop successfully.\n",stack[top]);
        int item=stack[top];
        top--;
    }
}
void push()
{
    int x;

    if(top==(N-1))
    {
        printf("\nStack is Overflow.\n");
    }
    else
    {
        printf("\nEnter the element.: ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
        printf("\nYou successfully pushed element in stack.\n");
    }
}

void display()
{
    if(top==(-1))
    {
        printf("\nStack is empty.\n");
    }
    else
    {
    printf("\nElements of Stack from top to bottom.: ");
    for(int i=top;i>=0;i--)
    {
        printf("\t%d",stack[i]);
    }
    }
}
