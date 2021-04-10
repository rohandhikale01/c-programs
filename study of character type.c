#include<stdio.h>
#include<conio.h>
#include<ctype.h>

int check(char ch);
main()
{
    int a=0,b=0,c=0,ans,i,j;
    char ch;
    printf("Program to find the character type\n");
    printf("Enter * when you want to stop\n");

loop:
{
    printf("Enter the input.:  \n");
    ch=getch();
    printf("%c\n",ch);

    i=ch;
       if(i==42)
        {
            printf("\n Alphabet occurs %d times,Digit %d times & special symbol %d times.",a,b,c);
            return 0;
        }
       else{     ans=check(ch);

    if(ans==1)
    {
        printf("Character is Alphabet\n");
        a++;

    }
    else if(ans==2)
    {
        printf("Character is digit\n");
        b++;
    }
    else if(ans==3)
    { printf("character is special symbol\n");
    c++;
    }}
}
    goto loop;
    getch();
    return 0;
}
int check(char ch)
{
    if(isalpha(ch))
    {
        return 1;
    }
    if(isalnum(ch))
    {
        return 2;
    }
    if(ispunct(ch))
    {
        return 3;
    }
}
