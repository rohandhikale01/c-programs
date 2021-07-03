#include<stdio.h>
#include<conio.h>

struct node
{
    int num;
    struct node *next;
};

struct node *temp,*newnode,*front=0,*rear=0;
int size=0;

void enqueue()
{
    newnode=(struct node *)malloc(sizeof(struct node));

    printf("\nEnter number: ");
    scanf("%d",&newnode->num);
    newnode->next=0;

    if(front==0&&rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
    size++;
    printf("\nElement Inserted Successfully. \n");
}

void display()
{

    if(size==0)
    {
        printf("\nQueue is Empty.");
    }

  else
    {
        temp=front;
        while(temp!=0)
    {
        printf("\nNumber: %d",temp->num);
        temp=temp->next;
    }
    }
}

void dqueue()
{
    if(size==0)
    {
        printf("\nQueue is Empty.");
    }
    else
    {
        printf("\nElement %d is removed successfully.",front->num);
        temp=front;
        front=front->next;
        free(temp);
        size--;

    }

}
main()
{
    printf("Program to create enqueue.");

    int x;

    while(1)
    {
    printf("\nEnter 0 if you are done.");
    printf("\nEnter 1 to insert element in an queue.");
    printf("\nEnter 2 to remove first element.");
    printf("\nEnter 3 to display queue.: ");
    scanf("%d",&x);

    switch(x)
    {
        case 0: getch();
        return 0;

        case 1:enqueue();
        break;

        case 2:dqueue();
        break;

        case 3:display();
        break;

        default:printf("Enter valid number.");
        break;
    }
    }
}
