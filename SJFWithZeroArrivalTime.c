#include<stdio.h>
#include<conio.h>
main()
{
    printf("Program to perform SJF :  \n");

    printf("\n*********************************************************\n");
    int size=0;
    printf("How many Process Do you want to execute:  ");
    scanf("%d",&size);

    int BT[size],WT[size],TAT[size],CT[size],temp[size];
    printf("Enter the Burst Time of Prepossess:   \n");
    for(int i=0;i<size;i++)
    {
        printf("P%d : ",(i+1));
        scanf("%d",&BT[i]);
        temp[i]=BT[i];
    }
    printf("\n*********************************************************\n");

        //to arrange process according to time required to Execute

     int key;
      for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
              {
                  if(BT[i]>BT[j])
                  {
                      key=BT[i];
                      BT[i]=BT[j];
                      BT[j]=key;
                  }
              }
        }


        //Calculating Completion.TurnAround,Waiting Time of Processes
        int  CurrentTime=0;
        float T_WT=0,T_TAT=0;
        for(int i=0;i<size;i++)
        {
            CT[i]=CurrentTime+BT[i];
            CurrentTime=CT[i];
            TAT[i]=CT[i];
            T_TAT=T_TAT+TAT[i];
            WT[i]=TAT[i]-BT[i];
            T_WT=T_WT+WT[i];
        }

    printf("Gantt Chart: ");
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                if(BT[i]==temp[j])
                {
                    printf(" P%d |",(j+1));
                    temp[j]=(-1)*temp[j];
                }

            }

        }


        printf("\n\t    0");
        for(int i=0;i<size;i++)
        {
            printf("    %d",CT[i]);
        }

        printf("\n*********************************************************\n");
        printf("\nProcess  BT   CT  TAT   WT\n");
        for(int i=0;i<size;i++)
        {

            for(int j=0;j<size;j++)
            {
                if(BT[i]==(-1)*temp[j])
                {
                    printf("P%d\t %d     %d    %d    %d\n",(j+1),(-1)*temp[j],CT[i],TAT[i],WT[i]);
                }

            }
        }

        printf("\n*********************************************************\n");
        printf("\nAvg. Waiting Time: %f\n",(T_WT/size));
        printf("Avg. TurnAroundTime Time: %f\n",(T_TAT/size));

        printf("\n*********************************************************\n");

}
