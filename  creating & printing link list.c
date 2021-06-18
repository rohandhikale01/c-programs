#include<stdio.h>
#include<conio.h>

main()
{
    printf("Program to create your link list & print it \n");

    struct node
    {
        int data;
        struct node *next;
    };

    int key=1;

    struct node *head,*newnode,*temp;
    head=0;
while(key)
    {
    newnode=(struct node *)malloc(sizeof(struct node));

    printf("Enter the number:- ");
    scanf("%d",&newnode->data);
    newnode->next=0;

    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
    }
    printf("\nEntre 1 to add node & 0 to stop adding nodes ");
    scanf("%d",&key);
    }
    temp=head;

    while(temp!=0)
    {
        printf("\nNumber- %d",temp->data);
        temp=temp->next;
    }

    getch();
    return 0;
}
