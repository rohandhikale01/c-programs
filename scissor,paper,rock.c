#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

main()
{
    int cmp,ply,x=0;

   printf("Enter 1 for scissor\n");
    printf("Enter 2 for paper\n");
    printf("Enter 3 for rock\n");
    scanf("%d",&ply);

    srand(time(0));
    cmp=rand()%3;
    cmp++;


   switch(ply)
    {
        case 1: if(cmp==1)
                {

                printf("computer's input is scissor & Game is Draw");
                }
                else if(cmp==2)
                {
                    printf("computer's input is paper & you won");

                }
                else
                {
                     printf("computer's input is rock & you loss");
                }
                break;
        case 2:if(cmp==1)
                {

                printf("computer's input is scissor & you loss");
                }
                else if(cmp==2)
                {
                    printf("computer's input is paper & game is draw");

                }
                else
                {
                     printf("computer's input is rock & you won");
                }
                break;

        case 3: if(cmp==1)
                {
                printf("computer's input is scissor & you won");
                }
                else if(cmp==2)
                {
                    printf("computer's input is paper & game is loss");
                }
                else
                {
                     printf("computer's input is rock & game draw");
                }
                break;

    }

    getch();
    return 0;

}
