#include<stdio.h>
main()
{
    int temp;
    printf("Program to print the message depending on temp.\n");
    printf("Please enter the temp.:  \n");
    scanf("%d",&temp);

    if(temp<0)
      {
        printf("Freezing weather.");
      }
    if(0<temp&&temp<10)
       {
        printf("Very cold weather.");
       }
    if(10<=temp&&temp<20)
       {

        printf("The cold weather.");
}
    if(20<=temp&&temp<30)
        {

        printf("normal temp.");
    }
    if(30<=temp&&temp<40)
        {printf("Its hot.");
        }
    if(40<=temp)
       {

        printf("its very hot.");
       }
}
