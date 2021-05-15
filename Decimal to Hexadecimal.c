#include<stdio.h>
#include<conio.h>

main()
{
    printf("Program to convert Decimal number into Hexadecimal number system \n");

    int num,i,x=0,b,temp;
    char a[10];

    printf("Enter the number which you want to convert\n");
    scanf("%d",&num);    //take input number from user which want to convert //

    for(i=0;num>0;i++)   //for loop runs until number is greater than zero //
    {
        temp=num%16;     //find the remainder when number is get divided by 16//
        if(temp>=0&&temp<10)
        {
            a[x]=temp+48;   // a[x] stores ASCII value of Hexadecimal Digit if  remainder is between  0 to 9 including both 0& 9//

        }
        else if(temp>=10&&temp<16)
        {
            a[x]=temp+55;    //a[x] stores ASCII value of Hexadecimal digit if remainder is greater than 9 and less than 16 //

        }
        num=num/16;
        x++;
    }
    for(x=--x;x>=0;x--)
    {
        printf("%c",a[x]);   //print Hexadecimal code //
    }

    getch();
    return 0;

}
