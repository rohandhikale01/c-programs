#include<stdio.h>
#include<conio.h>
int create();
void display();
void add();


struct node
{
    int cft;
    int exp;
    struct node *next;
};

int size1=0,size2=0;
struct node *head1,*head2,*temp,*newnode;

main()
{
    int a=1,b=2;
    printf("Program to perform addition of two polynomial using link list.\n");

    printf("\nEnter first polynomial: \n");
    head1=create(a);
    printf("\nFirst polynomial:");
    display(head1);

    printf("\nEnter second polynomial: ");
    head2=create(b);
    printf("\nSecond polynomial:");
    display(head2);

    printf("\nAddition of Two polynomial: ");
    printf("\n");
    add();
    getch();
    return 0;
}
void add()
{
    struct node *temp1=head1,*temp2=head2;

    while(1)
    {
        if((temp1->exp)==(temp2->exp))
        {
            int key;
            key=(temp1->cft)+(temp2->cft);
          if(key>=0)
          {
           printf(" +%dx^%d",key,temp1->exp);
          }
        else
          {
            printf(" %dx^%d",key,temp1->exp);
          }
          temp1=temp1->next;
          temp2=temp2->next;
        }

         else if((temp1->exp)>(temp2->exp))
          {
            if((temp1->cft)>=0)
           {
           printf(" +%dx^%d",temp1->cft,temp1->exp);
           }
          else
           {
            printf(" %dx^%d",temp1->cft,temp1->exp);
           }
          temp1=temp1->next;
          }

          else if((temp1->exp)<(temp2->exp))
          {
             if((temp2->cft)>=0)
          {
           printf(" +%dx^%d",temp2->cft,temp2->exp);
          }
         else
          {
            printf(" %dx^%d",temp2->cft,temp2->exp);
          }
        temp2=temp2->next;
          }
       if(temp1==0)
        {
            break;
        }
        if(temp2==0)
        {
            break;
        }
    }

    if(temp1!=0)
    {
        while(temp1!=0)
        {
            if((temp1->cft)>=0)
          {
           printf(" +%dx^%d",temp1->cft,temp1->exp);
          }
        else
          {
            printf(" %dx^%d",temp1->cft,temp1->exp);
          }
        temp1=temp1->next;
        }
    }
    if(temp2!=0)
    {
        while(temp2!=0)
        {
            if((temp2->cft)>=0)
          {
           printf(" +%dx^%d",temp2->cft,temp2->exp);
          }
        else
          {
            printf(" %dx^%d",temp2->cft,temp2->exp);
          }
        temp2=temp2->next;

        }
    }

}
void display(struct node *head)
{
    temp=head;
    while(temp!=0)
    {
        if(temp->cft>0)
        {
           printf(" +%dx^%d",temp->cft,temp->exp);
        }
        else
        {
            printf(" %dx^%d",temp->cft,temp->exp);
        }
        temp=temp->next;
    }
    printf("\n");
}

int create(int a)
{
    struct node *head;
    int x=1;
    head=0;
    while(x)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter coefficient with sing: ");
    scanf("%d",&newnode->cft);
    printf("Enter power: ");
    scanf("%d",&newnode->exp);

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
    if(a==1)
    {
        size1++;
    }
    else
    {
        size2++;
    }
    printf("\nEnter 0 if your polynomial completed: ");
    printf("\nEnter 1 to add next term: ");
    scanf("%d",&x);
    }
    return head;
}
