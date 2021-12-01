#include<stdio.h>
#include<conio.h>

main()
{
  printf("Program to perform FCFS with Different Arrival Time\n");
  printf("How many process do you want to Execute: ");

  int size;
  scanf("%d",&size);
  printf("*******************************************************");
  printf("\nEnter the Arrival time & Burst Time of Processes's respectively: ");

  int AT[size],BT[size],CT[size],TAT[size],WT[size],temp,P[2*size],myarr[size]; //AT=arrival Time , BT=Burst Time,CT=complication time, TAT=Turn Around Time ,WT=waiting Time

  for(int i=0;i<size;i++)
  {
      printf("\n P%d  ",(i+1));
      scanf("%d  %d",&AT[i],&BT[i]);
      myarr[i]=AT[i];
  }
   printf("******************************************************* \n");

   //to sort according to their arrival time
      int key1,key2;
      for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
              {
                  if(AT[i]>AT[j])
                  {
                      key1=AT[i];
                      AT[i]=AT[j];
                      AT[j]=key1;


                      key2=BT[i];
                      BT[i]=BT[j];
                      BT[j]=key2;

                  }
              }
        }
   temp=AT[0];
   for(int i=0;i<size;i++)
   {
       if(temp<AT[i])
       {
         CT[i]=AT[i]+BT[i];
       }
       else
       {
         CT[i]=temp+BT[i];
       }

       temp=CT[i];

       TAT[i]=CT[i]-AT[i];
       WT[i]=TAT[i]-BT[i];
   }

   printf("Process Arrival Time     Burst Time    Completion Time    Turnaround Time  Waiting Time\n");
   float WaitingTime=0,TurnAroundTime=0;
   int myNum;
   for(int i=0;i<size;i++)
   {
       for(int j=0;j<size;j++)
       {
           if(AT[i]==myarr[j])
           {
               myNum=(j+1);
               myarr[j]=-1;
               break;
           }
       }
        printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",myNum,AT[i],BT[i],CT[i],TAT[i],WT[i]);
        WaitingTime=WaitingTime+WT[i]; //calculating Total Waiting time
        TurnAroundTime=TurnAroundTime+TAT[i]; //Calculating Total TurnAround Time

   }
   printf("******************************************************* \n");

   printf("Total Waiting Time: %f\nTotal Turn Around Time: %f\n",WaitingTime,TurnAroundTime);

   printf("Average Waiting Time: %f\nAverage Turn Around Time: %f",(float)(WaitingTime/size),(float)(TurnAroundTime/size));
   printf("\n******************************************************* \n");


}
