#include<stdio.h>
#include<conio.h>

int bin();  //we will use This function to convert Decimal number into Binary //
int oct();  //we will use This function to convert Decimal number into Octal //
int hex();  //we will use This function to convert Decimal number into Hexadecimal  //

main()
{
    printf("Program to Convert Decimal number into Binary,Octal & Hexadecimal number system \n");

    int num;

    printf("Enter the number which you want to convert - \n");
    scanf("%d",&num);   //Takes the input from user as decimal number//

    bin(num);   //function call to bin function //
    oct(num);   //function call to oct function //
    hex(num);   //function call to hex function //

    getch();
    return 0;
}

int bin(int num)     //function definition of bin function //
{
    int x=0,i,a[1000],temp=num;

    for(i=0;num>0;i++)
    {
        a[x]=num%2;   //store the remainder when number is get divided by 2 in array //
        num=num/2;    //Divide num  by 2 to use use it in next calculation under same loop //
        x++;
    }
    printf("Binary conversion of %d= ",temp);

    for(x=--x;x>=0;x--)
    {
        printf("%d",a[x]);   //print the converted Decimal number as binary //
    }
    return 0;
}

int oct(int num)
{
    int x=0,i,a[1000],temp=num;

    for(i=0;num>0;i++)
    {
        a[x]=num%8;  //store the remainder when number is get divided by 8 in array //
        num=num/8;   //Divide num  by 8 to use use it in next calculation under same loop //
        x++;
    }
    printf("\nOctal conversion of %d= ",temp);

    for(x=--x;x>=0;x--)
    {
        printf("%d",a[x]);  //print the converted Decimal number as Octal //
    }
    return 0;
}

int hex(int num)
{
    //ASCII values are use to find the Corresponding Hexadecimal Digit //
 int x=0,i,temp=num,k;
 char a[1000];

    for(i=0;num>0;i++)
    {
        k=num%16;  //Find the remainder when number is get divided by 16 //
        if(k<10)
        {
            a[x]=k+48;   //if remainder is less than 10 then to find corresponding Hexadecimal number 48 is added in k//
        }
        else
        {
            a[x]=k+55;     //if remainder is greater  than 9 then to find corresponding Hexadecimal number 55 is added in k//
        }

        num=num/16;
        x++;
    }
    printf("\nHexadecimal conversion of %d= ",temp);

    for(x=--x;x>=0;x--)
    {
        printf("%c",a[x]);  //print the Hexadecimal number //
    }
    return 0;
}
