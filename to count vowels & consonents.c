#include<stdio.h>
#include<conio.h>
main()
{

int vow=0,con=0,i=0;
char str[]="Team India";
printf("Program to find number of vowels & consonant in string\n");

for(i=0;str[i]!='\0';i++)
{
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='O'||str[i]=='I'||str[i]=='U')
    {
        vow=vow+1;
    }
    else
    {
        con=con+1;
    }
}
printf("Number of Vowels=%d & number of consonants including space=%d",vow,con);
}
