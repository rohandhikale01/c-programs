#include<stdio.h>
#include<conio.h>

int create();
void display();
void merge();
void sort();

struct node
{
    int num;
    struct node *next;
};

int size1=0,size2;

struct node *head1=0,*head2=0,*temp,*newnode,*nextnode;

main()
{
    printf("Program to sort two link list.\n");

    int a=1,b=2;

    printf("\nStart Entering first list: ");
    head1=create(a);
    printf("\nYour First list: ");
    display(head1);
    printf("\nSize of first list: %d",size1);

    printf("\nstart Entering second list: ");
    head2=create(b);
    printf("\nYour Second list: ");
    display(head2);
    printf("\nSize of second list: %d",size2);

    merge();
    printf("\nList After Merging & before sorting: ");
    display(head1);

    sort(head1);
    printf("\nList after Sorting: ");
    display(head1);
    printf("\nYour List is sorted Successfully.");

}
void sort(struct node *head)
{
    struct node *key;
    int myvalue;
    key=head;


    for(int i=1;i<=(size1+size2);i++)
    {   temp=key;
        nextnode=temp->next;
        while(temp->next!=0)
        {
            if(temp->num>nextnode->num)
            {
                myvalue=temp->num;
                temp->num=nextnode->num;
                nextnode->num=myvalue;
            }
            temp=temp->next;
            nextnode=temp->next;
        }
    }
}
void display(struct node *head)
{
    temp=head;
    while(temp!=0)
    {
        printf("%d\t",temp->num);
        temp=temp->next;
    }
    printf("\n");
}
void merge()
{
    temp=head1;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=head2;
}
int create(int x)
{
    struct node *head=0;
    int flag=1;
    while(flag)
    {

    newnode=(struct node*)malloc(sizeof(struct node));

    printf("\nEnter number: ");
    scanf("%d",&newnode->num);

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
    if(x==1)
    {
        size1++;

    }
    else
    {
        size2++;
    }
    printf("\nEnter 0 to stop adding element.: ");
    printf("\nEnter 1 to insert element.: ");
    scanf("%d",&flag);

    }
    return head;
}
