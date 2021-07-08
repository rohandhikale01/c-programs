#include<stdio.h>
#include<conio.h>

#define max 5
int que[max];
int first=-1,last=-1;

void enqueue() //to insert an element at last //
{
    int num;
    printf("\nEnter the number: ");
    scanf("%d",&num);

    if(first==-1&&last==-1) //inserts element at 0 th position if queue is empty //
    {
        first=0;
        last=0;
        que[last]=num;
        printf("\nNumber %d is inserted successfully.\n",num);
    }
     else if(((last+1)%max)==first)
    {
        printf("\nQueue is full.\n");
    }

    else //insert element at last position //
    {
        last=((last+1)%max);
        que[last]=num;
        printf("\nNumber %d is inserted successfully.\n",num);
    }


    }


void dqueue() //to remove first element //
{
    if(first==-1&&last==-1) //to check whether queue is empty or not //
    {
        printf("\nQueue is empty.\n");
    }
    else if(first==last) //if their is only one element in queue then after deleting it queue is become empty //
    {
        printf("\nElement %d is removed successfully.",que[first]);
        first=last=-1;
    }
    else
    {
        printf("\nElement %d is removed successfully.",que[first]);
        first=((first+1)%max);
    }
}

void display() //to display list//
{


    if(first==-1&&last==-1) //if queue is empty //
    {
        printf("\nList is empty");
    }

    else
    {
    int temp=first;

    while(temp!=last) //print until last number is occurred //
    {
        printf("\nNumber= %d",que[temp]);
        temp=((temp+1)%max);
    }
     printf("\nNumber= %d",que[temp]); //prints last number //
    }
}
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
