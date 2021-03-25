#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("Program to find gcd of two number.\n");
    printf("Enter the two number.:  \n");
    scanf("%d%d",&a,&b);

    if(a==b)
    {
        printf("gcd of given number is =%d",a);
    }
    else if(a<b)
    {

        for(c=a;1<=c;c--)
        {
            if(a%c==0&&b%c==0)
            {
                printf("gcd of given %d & %d= %d",a,b,c);
                break;
            }
        }
    }
    else
    {
        for(d=b;1<=d;d--)
         {
        if(a%d==0&&b%d==0)
        {
            printf("\n gcd of %d & %d= %d",a,b,d);
            break;
        }
         }
    }
}

