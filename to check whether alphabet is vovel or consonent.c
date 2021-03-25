#include<stdio.h>
#include<conio.h>
main()
{
    char x;
    printf("Program to check whether given alphabet is vowel or consonant.");
    printf("\n please Enter the alphabet.:   \n");
    scanf("%c",&x);

   if(x>='a'&&x<='z')
    {if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
    {
        printf("Given alphabet is vowel.");
    }
    else
    {
        printf("Given alphabet is consonant.");
    }
    }
    else if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
    {
        printf("Given alphabet is vowel.");
    }
    else
    {
        printf("It's not an alphabet.");
    }

}
