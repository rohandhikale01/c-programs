#include<stdio.h>
#include<ctype.h>
#include<conio.h>
main()
{
    char ch;
    printf("Program to find the type of character using standard library function.\n");
    printf("Enter the character.:  \n");
    scanf("%c",&ch);

    if(isalpha(ch))
    {
        printf("Given character is Alphabet & it is ");
        if(isupper(ch))
        {
            printf("UPPERCASE.\n");
            ch=tolower(ch);
            printf(" lowercase of above character is%c",ch);
        }
        else
        {
            printf("lowercase.\n");
            ch=toupper(ch);
            printf("UPPERCASE of above character is %c",ch);
        }
    }
   else if(isdigit(ch))
    {
        printf("\n It's digit.");
    }
    else if(ispunct(ch))
    {
        printf("It's punctuation symbol.");
    }
    else
    {
        printf("Character %c is neither alphabet ,digit nor punctuation .");

    }
    getch();
    return 0;

}
