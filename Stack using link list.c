#include<stdio.h>
#include<conio.h>

void push();
void pop();
void display();


struct node{
 int num;
 struct node *next;
};

struct node *top=0,*newnode,*temp;
int size=0;

main()
{
   printf("Program to create dynamic Stack.\n");

   int x;

   while(1)
   {
       printf("\nEnter 0 if you are done.:");
       printf("\nEnter 1 to push element into the stack.:");
       printf("\nEnter 2 to pop element from stack.:");
       printf("\nEnter 3 to Check Whether Stack is Empty or not.:");
       printf("\nEnter 4 to display stack.:");
       scanf("%d",&x);

       switch(x)
       {
           case 0:getch();
                  return 0;
             break;

           case 1:push();
             break;

           case 2:pop();
             break;

           case 3:{
                    if(size==0)
                        printf("\nStack is Empty.\n");

                    else
                    printf("\nStack is Non empty.\n");
                  }
             break;

           case 4:display();
             break;

             default: printf("\nEnter valid number.");
             break;
       }
   }
}
void display()
{

    if(size==0)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        temp=top;
        printf("\nStack elements from top to bottom: ");
        while(temp!=0)
        {
            printf("\t%d",temp->num);
            temp=temp->next;
        }
    }
    printf("\n");
}


void pop()
{
    if(size==0)
    {
        printf("\nStack is empty.\n");
    }
    else
    {
        temp=top;
        printf("\nPop Element: %d \n",top->num);
        top=top->next;
        free(temp);
        size--;
    }
}

void push()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter number: ");
    scanf("%d",&newnode->num);

    newnode->next=top;
    top=newnode;
    size++;
    printf("\nElement pushed successfully.\n");
}
