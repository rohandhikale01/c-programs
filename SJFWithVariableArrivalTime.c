#include<stdio.h>
#include<conio.h>

main()
{
    printf("Program to perform SJF With Variable arrival Time\n");

    int size=0;
    printf("How many process do you want to execute : ");
    scanf("%d",&size);

    int BT[size],AT[size],TAT[size],WT[size],Seq[size],temp[size];

    printf("Enter the Arrival & Burst Time of processes : ");
    printf("\nPro.  AT  BT\n");

    for(int i=0;i<size;i++)
    {
        printf("P%d \t",(i+1));
        scanf("%d%d",&AT[i],&BT[i]);
        temp[i]=BT[i];
    }

    int currentTime=0,tempTime=0;
    for(int i=0;i<size;i++)
    {
        Seq[i]=getProcessIndex(currentTime,size,AT,BT);
        BT[Seq[i]]=(-1)*BT[Seq[i]];
    }
    for(int i=0;i<size;i++)
    {

        printf("\n%d   ",Seq[i]);
    }
}

int getProcessIndex(int currentTime,int size,int AT[],int BT[])
{
    int index=0,ATkey=0,BTkey=0;
    for(int i=0;i<size;i++)
    {
        if(ATkey>AT[i]&&AT[i]>=currentTime&&BTkey>BT[i]&&BT[i]>=0)
        {
            ATkey=AT[i];
            BTkey=BT[i];
            index=i;
        }
    }
    return index;
}
