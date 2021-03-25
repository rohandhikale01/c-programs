#include<stdio.h>
#include<conio.h>
int even_or_odd(int a); //prototype//
int main()
{
    int a;
    printf("Program to check whether number is even or odd using functions.\n");
    printf("Enter the number which you want to check.:  \n");
    scanf("%d",&a);   //input
    even_or_odd(a);  //function call
    getch();

}

int even_or_odd(a)  //function definition//
{
    if(a%2==0)
        printf("%d is even number.",a);
    else
        printf("%d is odd number.",a);
    return 0;
}
