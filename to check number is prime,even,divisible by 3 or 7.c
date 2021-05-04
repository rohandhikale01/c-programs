#include<stdio.h>
#include<conio.h>

int isprime();                        //function to check whether number is prime or not //
int check();

main()
{
    printf("Program to check whether given number is even,prime,divisible by 3 or 7\n");

    int num,flag1,flag2,flag3;         //we are defining one number and three flags//

    int *pflag1,*pflag2,*pflag3;      //we are defining three integer pointer to point 3 flags//
    pflag1=&flag1;                    //assigning the address of first flag //
    pflag2=&flag2;                    //assigning the address of second flag//
    pflag3=&flag3;                    //assigning the address of third flag //

    printf("Enter the number which you want to check-  \n");
    scanf("%d",&num);                    //accepting the number from user //

    check(num,&flag1,&flag2,&flag3);   //calling the function check with actual parameters num and address of flag1,flag2,flag3//

    if(flag1==1)                       //if flag1 is 1 then gives print as it's even number  otherwise not even//
    {
        printf("Number %d is Even \n",num);
    }
    else
    {
        printf("Value of flag1 is=%d and number is not even\n",*pflag1);
    }

    if(flag2==1)                       //if flag2 is 1 then print number is prime otherwise not prime //
    {
        printf("The number %d is prime\n",num);
    }
    else
    {
        printf("Value of second flag2 is %d and it's not prime\n",*pflag2);
    }

    if(flag3==1)                      //if flag3 is 1 then print number is divisible by 3 or 7 otherwise not //
    {
        printf("The number %d is divisible by 3 or 7\n",num);
    }
    else
    {
        printf("The value of flag3 is %d and it's not divisible by 3 or 7\n",*pflag3);
    }

    getch();
    return 0;

}

int check(int num,int *pflag1,int *pflag2,int *pflag3)
{
    if(num%2==0)                    //check whether number is even or odd //
    {
        *pflag1=1;
    }
    else
    {
        *pflag1=0;
    }

    *pflag2=isprime(num);          //it's calling function to check whether

    if(num%3==0||num%7==0)
    {
        *pflag3=1;
    }
    else
    {
        *pflag3=0;
    }
}
int isprime(int num)           //function definition to check whether number is prime or nor //
{
    int i,x=0;

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            x++;
        }
    }
    if(x==2)               //if prime number has exactly two divisors the flag3  becomes 1 otherwise 0//
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
