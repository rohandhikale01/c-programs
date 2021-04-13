#include<stdio.h>
#include<conio.h>

main()
{
    int n,ar1[n],ar2[n],i;

    printf("Program to scan & print n numbers using array\n");

    printf("How many numbers do you want to scan.:-   \n");
    scanf("%d",&n);  //n is used to know how many numbers will be user want to scan & print //

    printf("Start Entering the numbers.:--  \n");


    for(i=0;i<n;i++)//for loop to scan the n numbers using array//
    {
        scanf("%d",&ar1[i]);
        ar2[i]=ar1[i];
    }
    printf("Reversing the Numbers. -  \n");

    for(i=--n;i>=0;i--) // for loop to print the n numbers using array//
    {
        printf("%d\t",ar2[i]);
    }

    getch();
    return 0;

}
