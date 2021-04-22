#include<stdio.h>
#include<conio.h>

main()
{
    printf("Program to find  value of 3*3 determinant  \n");

    int i;
    float a[9],ans;

    printf("Enter the elements (first row ,Second Row , Third row) -  \n");

    for(i=0;i<9;i++)
    {
        scanf("%f",&a[i]);
    }

    ans=(float)((a[0]*(a[4]*a[8]-a[5]*a[7]))-(a[1]*(a[3]*a[8]-a[5]*a[6]))+(a[2]*(a[3]*a[7]-a[4]*a[6])));

    printf("Ans=%f",ans);

    getch();
    return 0;

}
