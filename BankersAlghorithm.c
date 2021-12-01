#include<stdio.h>
#include<conio.h>


main()
{
    printf("Program to perform Bankers Algorithm.\n ");

    //finding Number Of recourses & Processes
    int P=0,R=0;

    printf("\n***********************************************************\n");

    printf("Enter the Number Of Processes s : ");
    scanf("%d",&P);
    printf("Enter the Number Of Resource :");
    scanf("%d",&R);

     printf("\n***********************************************************\n");

    int Allo[P][R],Max[P][R],Avail[R],Need[P][R],finish[P];


    // Accepting Allocation Matrix
    printf("\nEnter The Allocated Resource Matrix:  \n");
    printf("P ");
    for(int i=0;i<R;i++)
    {
        printf(" R%d",(i+1));
    }
    for(int i=0;i<P;i++)
    {
        printf("\nP%d ",(i+1));
        for(int j=0;j<R;j++)
        {
            scanf("%d",&Allo[i][j]);
        }
        finish[i]=0;

    }

     printf("\n***********************************************************\n");
    //Accepting Resource Matrix
    printf("\nEnter The Maximum Resource Matrix:  \n");
    printf("P ");
    for(int i=0;i<R;i++)
    {
        printf(" R%d",(i+1));
    }
    for(int i=0;i<P;i++)
    {
        printf("\nP%d ",(i+1));
        for(int j=0;j<R;j++)
        {
            scanf("%d",&Max[i][j]);
            Need[i][j]=Max[i][j]-Allo[i][j];
            if(Need[i][j]<0)
                Need[i][j]*=Need[i][j];
        }
    }

     printf("\n***********************************************************\n");
    //Accepting Available Matrix
    printf("\n Enter the Available Resources: \n ");
    for(int i=0;i<R;i++)
    {
        printf(" R%d",(i+1));
    }
    printf("\n");
    for(int i=0;i<R;i++)
    {
        scanf("  %d",&Avail[i]);
    }

     printf("\n***********************************************************\n");
    //printing Need Matrix
        for(int i=0;i<R;i++)
    {
        printf("  R%d",(i+1));
    }
    for(int i=0;i<P;i++)
    {
        printf("\nP%d ",(i+1));
        for(int j=0;j<R;j++)
        {
            printf("%d  ",Need[i][j]);
        }

    }

     printf("\n***********************************************************\n");
    printf("\n Your Safe Sequence is: ");
    int flag=1,temp;


    //to find the Safe Sequence
    while(flag)
    {

        flag=0;
        for(int i=0;i<P;i++)
        {
            int Count=0;
            for(int j=0;j<R;j++)
            {
                if((finish[i]==0)&&Need[i][j]<=Avail[j])
                {
                    Count++;

                if(Count==R)
                {
                    for(int k=0;k<R;k++)
                    {
                        Avail[k]+=Allo[i][j];  //Creating New Available
                        finish[i]=1;
                        flag=1;
                    }
                     printf("P%d->",(i+1));
                      if(finish[i]==1)
                      {
                        i=P;
                      }
                }
                }
            }
        }
    }

    int newcount=0;
    for(int i=0;i<P;i++)
    {
    if(finish[i]==1)
    {
    newcount++;
    }
    else
    {
    printf("P%d->",(i+1));
    }
    }
    if(newcount==P)
    {
    printf("\n The system is in safe state");
    }
    else
    {
    printf("\n Process are in dead lock");
    printf("\n System is in unsafe state");
    }
 printf("\n***********************************************************\n");

}

