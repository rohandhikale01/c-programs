#include<stdio.h>
#include<conio.h>
#include<math.h>
void call();  //function prototype //
main()
{

    int H,M,S1,S2;


    printf("Program to perform increment in time with respect to change in Seconds.\n");

    printf("Enter current value of Hours.:-  \n");
    scanf("%d",&H);//scans current value of Hour & store in H //

    printf("Enter current value of Min.:-  \n");
    scanf("%d",&M); //scans current value of min & store in M//

    printf("Enter the current value of seconds.:-  \n");
    scanf("%d",&S1); //scans current value of seconds & store in S1//

    printf("Enter how many seconds do you want to increment.:-   \n");
    scanf("%d",&S2);  //the number by which we have to update the time//

    call(H,M,S1,S2);

}

void call(int H, int M, int S1, int S2)
{
    S2=S1+S2;//add old value of seconds & incremented value of seconds //

    if(S2>S1)
    {

        S1=S2%60;  //Updated value of seconds //
        printf("updated value of seconds=%d\n",S1);

        int a=S2/60; //min increased by a//

        int m=M+a; //old value of Min. & incremented min //

        M=m%60;   //updated value of Min//
        printf("Updated value of Minutes=%d\n",M);

        if(m>=60)
        {
            int b=m/60;//Hours should be increased by b//

            H=H+b;
            printf("Updated value of Hours=%d",H);
        }

    }
    printf("\n Hours=%d   Minuets=%d  Seconds=%d ",H,M,S1);
}
