#include<stdio.h>
#include<conio.h>

main()
{
    printf("Program to perform Selection Sort\n");

    int size,i,j,min,temp,x=0,position,k=0;

    printf("How many elements in your array- ");
    scanf("%d",&size); // Takes The size of array as input //

    int a[size];

    printf("\nStart Entering The Elements-");

    //scans the elements of array //
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<size;i++)
    {
        min=a[i]; //consider i th element as minimum //

    for(j=k;j<size;j++)
    {
        if(a[j]<=min)
        {
            min=a[j]; //find i th original min element //
            position=j;  //stores the position min of elements //
        }
    }
        temp=min; // temp is used to store min element //
        a[position]=a[i]; //replace the i th element with the position of minimum element //
        a[i]=min; //minimum element is store at i th position /
        k++; // To start sorting after k th element //
    }

    printf("Elements of array in Ascending Sorted list- \n");

    // To print the sorted array //
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }

    getch();
    return 0;

}
