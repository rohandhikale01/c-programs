#include<stdio.h>
#include<conio.h>
main()
{
    char ch='o',s[]="good luck";
    int i=0,count=0;
    printf("Program to fins the count of character in given string\n");

    for(;s[i]!='\0';i++)
    {
        if(s[i]==ch)
        {
            count++;
        }
    }
    printf("character %c occurs %d times in %s",ch,count,s);
}
