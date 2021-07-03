#include<stdio.h>
#include<conio.h>
#define max 5

void enqueue();
void dqueue();
void display();
void first_element();

int queue[max],front=-1,rear=-1;

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

        case 4:first_element();
        break;

        default:printf("Enter valid number.");
        break;
    }
    }
}
void enqueue()
{
    if(rear==(max-1))
    {
        printf("\nqueue is full");
    }
    else
    {
        int num;
        printf("\nEnter number: ");
        scanf("%d",&num);

        if(front==(-1)&&rear==(-1))
      {
        front++;
        rear++;
        queue[rear]=num;
      }
      else
      {
        rear++;
        queue[rear]=num;

      }
      printf("\nElement is inserted successfully.\n");

    }
}
void dqueue()
{
    if(front==(-1)&&rear==(-1))
    {
        printf("\nqueue is Empty.");
    }

    else
    {
        if(front==rear)
        {
            printf("\nElement %d is remove successfully.\n",queue[front]);
            front=rear=-1;
        }
        else
        {
            printf("\nElement %d is remove successfully.\n",queue[front]);
            front++;
        }
    }

}
void display()
{
    if(front==(-1)&&rear==(-1))
    {
        printf("\nqueue is Empty.");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("\nNumber: %d",queue[i]);
        }
    }
}
void first_element()
{
    printf("\nFirst Element: %d \n",queue[rear]);
}
