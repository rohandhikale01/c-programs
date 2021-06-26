#include<stdio.h>
#include<conio.h>

void create();
void display();
void insert();
void insert_start();
void insert_position();
void insert_last();
void search();
void remove_by_value();
void remove_element();
void remove_first();
void remove_position();
void remove_last();


struct node{
    int num;
    char name[25];
    struct node *next;
};

int size=0;
struct node *head=0,*newnode,*temp,*prv;

main()
{
    printf("Program to study link list. \n");
    int x;

    loop:
    {
    printf("\nEnter 0 if you are done.:\n");
    printf("Enter 1 to create link list:\n");
    printf("Enter 2 to insert element in link list:\n");
    printf("Enter 3 to display link list:\n");
    printf("Enter 4 to search element in link list:\n");
    printf("Enter 5 to delete(by value) element in link list:\n");
    printf("Enter 6 to delete(by position) element in link list:\n");
    scanf("%d",&x);

    switch(x)
    {
        case 0: return 0;
            break;

        case 1:create();
            break;

        case 2:insert();
            break;

        case 3:display();
            break;

        case 4:search();
            break;

       case 5:remove_by_value();
            break;

        case 6:remove_element();
            break;

            default:printf("\nEnter valid input...!\n");
            break;

    }
    }
    goto loop;
}

void create()  //to create list //
{
    int key=1;
    while(key)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the number:- ");
    scanf("%d",&newnode->num);
    fflush(stdin);
    printf("\nEnter the name:- ");
    gets(newnode->name);

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
    size++;

    printf("\nEnter 0 to stop adding:- ");
    printf("\nEnter 1 to add element:- ");
    scanf("%d",&key);
}
}
void insert() //To choose where user want to insert number //
{
    int x;
    printf("Enter 1 to add element at starting \n");
    printf("Enter 2 to add element at any position \n");
    printf("Enter 3 to add element at last \n");
    scanf("%d",&x);

    switch(x)
    {
    case 1:insert_start();
        break;

    case 2:insert_position();
        break;

   case 3:insert_last();
        break;

        default:printf("\nEnter valid number \n");
        break;
    }

}
void display() //to display list //
{
    temp=head;
    if(size==0)
    {
        printf("\nYour list is empty\n");
    }
    else
    {
    while(temp!=0)
    {
        printf("\nNumber=%d",temp->num);
        printf("\nName=%s",temp->name);
        temp=temp->next;
    }
    }
}
void insert_start() //to insert at starting //
{
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    head=newnode;
    newnode->next=temp;
    printf("\nEnter number-");
    scanf("%d",&newnode->num);
    fflush(stdin);
    printf("Enter name- ");
    gets(newnode->name);
    size++;
}

void insert_last() //To insert element at last of list //
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter number- ");
    scanf("%d",&newnode->num);
    fflush(stdin);
    printf("\nEnter name- ");
    gets(newnode->name);
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=0;
    size++;

}
void insert_position() //To insert element at user defined position //
{
    int x;
    printf("\nEnter the position where you want add element \n");
    scanf("%d",&x);
    if(x==1)
    {
        insert_start();
        return 0;
    }
   else if(x>size)
    {
        printf("Error...! your position is not valid.\n");
    }
    else if(x==size)
    {
        insert_last();
        return 0;
    }
    else
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the number:- ");
        scanf("%d",&newnode->num);
        fflush(stdin);
        printf("\nEnter name- ");
        gets(newnode->name);

        temp=head;
        for(int i=1;i<(x-1);i++)
        {
            temp=temp->next;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        size++;

    }

}
void search()  //To perform Searching operation in list //
{
    int x,i=0;
    temp=head;

    printf("\nEnter number whose details to be search.:- ");
    scanf("%d",&x);

    temp=head;

    while(temp!=0)
    {
        if(x==temp->num)
        {
            printf("\nName- %s",temp->name);
            i++;
            break;
        }
        temp=temp->next;
    }
    if(i==0)
    {
        printf("\nYour input number is not exist in list \n");
    }
}

void remove_by_value()
{
    int i=1,key,x=0;

    printf("\nEnter number whose details do you want to delete:- ");
    scanf("%d",&key);

    temp=head;

    while(temp!=0)
    {
        if(key==temp->num)
        {
            x++;
            //calling function remove_posotion with parameters position of key //
           break;
        }
        i++;
        temp=temp->next;
    }
    if(x==0)
    {
        printf("\nNo Such a number found \n");
    }
    else if(i==1)
    {
        remove_first(i);

    }
    else if(i==size)
    {
        remove_last(i);
    }
    else
    {
        remove_position(i);
    }

}


void remove_element() //To decide which element is to be deleted //
{
    int x;
    printf("\nEnter 1 to delete starting element: ");
    printf("\nEnter 2 to delete element at any position: ");
    printf("\nEnter 3 to delete last element: ");
    scanf("%d",&x);

    switch(x)
    {
    case 1:remove_first();
        break;

    case 2:{ int i;
            printf("\nEnter the position where you want to delete node: ");
            scanf("%d",&i);
            remove_position(i);
            }
    break;

    case 3:remove_last();
        break;

        default:printf("\nError...! please Enter valid number.\n");
        break;
    }
}
void remove_first() //To delete first element //
{
    if(size==0)
    {
        printf("\nYour list is empty.\n");
        return 0;
    }
    temp=head;
    head=head->next;
    free(temp);
    size--;
    printf("\nYour first element is deleted successfully. \n");
}
void remove_position( int i) // To delete node according to user defined position or Using  defined key //
{
    struct node *nextnode;
    if(i==1)
    {
        remove_first();
        return 0;
    }
    else if(i==size)
    {
        remove_last();
        return 0;
    }
     else if(i>size)
    {
        printf("\nYour Enter position is not valid. \n");
    }
    else
    {
        temp=head;
        for(int j=1;j<(i-1);j++)
        {
            temp=temp->next;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);
        printf("\n your element at position %d is deleted \n",i);
        size--;
    }

}
void remove_last() //To delete last element of link list //
{
    prv=temp=head;
    temp=head;
   while(temp->next!=0)
   {
       prv=temp;
       temp=temp->next;
   }
   if(temp==head)
   {
       head=0;
   }
   else
   {
       prv->next=0;
   }
   free(temp);

   printf("\nYour last Element is deleted\n");
   size--;
}
