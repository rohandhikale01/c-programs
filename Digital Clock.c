#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

int H,M,S;
int clk();
int alrm();

main()
{
    int k;
    printf("Enter 1 to Use Clock- \n");
    printf("Enter 2 to Use Alarm- \n");
    scanf("%d",&k);

    switch(k)
    {
        case 1:clk();
        break;

        case 2:alrm();
        break;

        default:
            printf("Entre the valid input ");

    }
}

int clk()
{
    system("cls");

    printf("Enter the Current Time as HH:MM:SS- ");
    scanf("%d%d%d",&H,&M,&S);

    fflush(stdin);

    if(H>=24||M>=60||S>=60)
    {
        printf("Error...!");
        return 0;
    }
start:

  {
      while(H<24)
    {
        while(M<60)
        {
            for(S;S<60;S++)
            {
                sleep(1);
                system("cls");
                printf("Clock: \n%02d:%02d:%02d ",H,M,S);
                if(H<12)
                {
                    printf(" AM");
                }
                else{
                    printf(" PM");
                }
            }
            S=0;
            M++;
        }
        H++;
        M=0;
        printf("\a") ;// To produce Beep Sound After Each Hour //

    }H=0;
  }
  goto start;

}

int alrm()
{
    int i,j,k,l;
    system("cls");
    printf("Set the time as HH:MM:SS-  ");
    scanf("%d%d%d",&H,&M,&S);

    fflush(stdin);

    if(H>=24||M>=60||S>=60)
    {
        printf("\n Error...! Your Time is not correct-  \n");
        return 0;
    }

    for(i=H;i>=0;i--)
    {
        for(j=M;j>=0;j--)
        {
            for(k=S;k>=0;k--)
            {
                sleep(1);
                system("cls");
                printf("Remaining time- \n%02d:%02d:%02d ",i,j,k);
                if(i==0&&j==0&&k==0)
                {
                    printf("\a");
                    Beep(1000,1111);
                    printf("\a");
                }
            }
            S=59;
        }
        M=59;
    }



}
