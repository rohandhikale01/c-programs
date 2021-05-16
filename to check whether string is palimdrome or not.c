#include<stdio.h>
#include<conio.h>
#include<string.h>

int check();

int main()
{
    printf("Program to check whether given string is palindrome or not \n ");

    int size,ans;

    printf("What is the length of your string-  \n");
    scanf("%d",&size);  //takes input as size of a string //

   ans=check(size);   //calling function with actual parameter size //

    if(ans==1)
    {
        printf("Given string is Palindrome \n");
    }
    else
    {
        printf("Given string is no Palindrome \n");
    }
    getch();
    return 0;
}

int check(int n)
{
    int y;
    char str[n],rev[n];

    printf("Enter your string- \n");  //takes string as input
    scanf("%s",&str);

   strcpy(rev,str);  //copy input string in rev //

   y=strcmp(str,strrev(rev));  //compare original string with reverse string and return value o if strings are same//



  if(0==y)
  {
     return 1;
  }
else
  {
      return 0;
  }

}

