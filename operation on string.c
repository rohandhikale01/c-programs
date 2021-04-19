#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void call_length();
void call_copy();
void call_concatenation();
void call_compare();

main()
{
    int i;

    printf("Program to perform operation on string.\n");

    printf("Enter 1 to find length of string.\n");
    printf("Enter 2 to copy string.\n");
    printf("Enter 3 to concatenate of string.\n");
    printf("Enter 4 to compare the string.\n");

    printf("Enter your input.:  \n");
    scanf("%d",&i);

    switch(i)
    {
        case 1: call_length();
        break;

        case 2:call_copy();
        break;

        case 3:call_concatenation();
        break;

        case 4:call_compare();
        break;

        default:
        printf("Enter valid input.\n");
        break;

    }

}

void call_length(str1)
{    int len;
    char str[100];
    printf("Enter the string.\n");
    scanf("%s",str);

    len=strlen(str);

    printf("Length of %s is %d",str,len);

    return 0;
}

void call_copy()
{
    char str1[100],str2[100];

    printf("Enter the first string.:  \n");
    scanf("%s",&str1);

    printf("Enter the second string.:  \n");
    scanf("%s",&str2);

    printf(" first string before copy is %s & second string is %s \n",str1,str2);

    strcpy(str1,str2);

    printf("First string after copy is %s & second string is %s",str1,str2);

    return 0;
}

void call_concatenation()
{
    char str1[100],str2[100];

    printf("Enter the first string.:  \n");
    scanf("%s",&str1);

    printf("Enter the second string.:  \n");
    scanf("%s",&str2);

    strcat(str1,str2);

    printf("string after concatenation is=%s",str1);
    return 0;

}

void call_compare()
{
    int diff;
    char str1[100],str2[100];

    printf("Enter first string.:  \n");
    scanf("%s",&str1);

    printf("Enter second string.:   \n");
    scanf("%s",&str2);

    diff=strcmp(str1,str2);

    if(diff==0)
    {
        printf("Two strings are same.\n");
    }
    else
    {
        printf("Two strings are not same");
    }
    return 0;
}
