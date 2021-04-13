#include<stdio.h>
#include<conio.h>

int linear_search();

main()
{
    int ans,i=0;
    printf("Program to find the position of key using array & function.\n");

    ans=linear_search();

    if(ans==(-1))
    {
        printf("No key  found\n");
    }
    else
    {
        printf("position of Key is =%d",ans);

    }


    getch();
    return 0;

}

int linear_search()
{
    int i,n,ar[n],key;

    printf("How many elements in the set.:-- \n");
    scanf("%d",&n); //scans how many elements in set //

    printf("Enter the elements.:--- \n");
    for(i=0;i<n;i++) // scanning of elements //
    {
        scanf("%d",&ar[i]);
    }

    printf("Enter the key whose position Do you want to find.:   \n");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==ar[i]) //checking of whether element is equal to entered key//
        {
            return ++i; // returns position of key ++i is  used  because array starts from 0//
        }
    }

    return -1;// returns -1 if no such a key found //
}
