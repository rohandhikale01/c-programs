#include<stdio.h>

int swap();
main()
{
    int a,b;

    printf("Program to perform Call by references \n");

    printf("Enter any value to a & b \n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);

    printf("Value after function call (Swapping)-%d & %d",a,b);

    getch();
    return 0;
}

int swap(int *ptra,int *ptrb)
{
    int temp;
    temp=*ptra;
    *ptra=*ptrb;
    *ptrb=temp;
}
