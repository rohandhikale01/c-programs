#include<stdio.h>
#include<conio.h>

struct node
{
    int num;
    struct node *next;
};

int size=0; //to know length of queue //
struct node *temp,*first=0,*last=0,*newnode;

void dqueue();
void enqueue();
void display();

main()
{
    printf("Program to implement circular queue using array.\n");

    int key;
    while(1)
    {
        printf("\n 0 to stop operations.");
        printf("\n 1 to insert element at last.");
        printf("\n 2 to delete first element.");
        printf("\n 3 to display queue.");
        printf("\n Enter your choice: ");
        scanf("%d",&key);

        switch(key)
        {
            case 0: getch();
                    return 0;

            case 1: enqueue();
                break;

            case 2:dqueue();
                break;

            case 3:display();
                break;

            default:printf("\nEnter valid number.\n");
                break;
        }
    }

}

void enqueue() //to insert element at last position//
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter number: ");
    scanf("%d",&newnode->num);
    //newnode->next=0;
    if(first==0&&last==0) //if queue is empty //
    {
        first=last=newnode;
    }
    else //if queue is not empty //
    {
       last->next=newnode;
       last=newnode;
    }
     newnode->next=first;
     size++;

     printf("\nElement %d is added successfully. \n",newnode->num);
}


void dqueue() //to remove first element //
{
    if(size==0)
    {
      printf("\nQueue is empty.\n");
    }
    else if(size==1) //if queue is contains only one element then first & last pointers are set to 0//
    {
        temp=first;
        first=0;
        last=0;
        printf("\nNumber %d is deleted successfully.",temp->num);
        size--;
        free(temp);
    }
    else //if queue has more than one element //
    {
        temp=first;
        first=first->next;
        last->next=first;
        printf("\nNumber %d is deleted successfully.",temp->num);
        size--;
        free(temp);
    }


}
void display() //to display queue //
{
    if(size==0)
    {
        printf("\nQueue is empty.\n");
    }
    else
    {
        temp=first;

        do
        {
            printf("\nNumber: %d",temp->num);
            temp=temp->next;
        }
        while(temp!=first);
}
}
