#include<stdio.h>
#include<conio.h>
int swap_count=0;step_count=0; //we start with swap & step count as 0//
main()
{
    printf("Program to Print the sorted Array using insertion sort\n");
    step_count++;

    int i,j,k,temp,key,size;
    step_count++;

    printf("Enter the size of your array- ");
    step_count++;
    scanf("%d",&size); //size of an array as input //
    step_count++;

    int a[size];  //creating array with user defined size //
    step_count++;

    printf("\nEnter the Elements of array- ");
    step_count++;

    for(i=0;i<size;i++) //scanning the elements of an array //
    {
        step_count++;
        scanf("%d",&a[i]);
        step_count++;
    }
    step_count++;

    for(i=1;i<size;i++)
    {
        step_count++;
        key=a[i]; //key element whose position to be decided //
        step_count++;

        for(j=0;j<i;j++)
        {
            step_count++;
            if(key>a[j])
            {
                step_count++;

                for(k=i;k>j;k--) //swapping to place element at correct place //
                {
                   step_count++;

                   a[k]=a[k-1];
                   swap_count++;
                   step_count++;
                }
                step_count++;

                a[j]=key;
                step_count++;

                step_count++;
               break;
            }

        }
        step_count++;
    }
    step_count++;

    printf("Elements of an array in descending  order:- ");
    step_count++;

    for(i=0;i<size;i++) //printing the elements //
    {
        step_count++;
        printf("\t%d",a[i]);
        step_count++;
    }
    step_count++;
    step_count+2;
    printf("\nStep count:- %d & swap count:-%d",step_count,swap_count);
    getch();
    return 0;

}

