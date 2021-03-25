#include<stdio.h>
#include<conio.h>
int factorial (int);
int main()
{

    int fact,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("factorial of %d = %d",n,fact);
    return 0;

}
int factorial(int n)
{
    int temp;
    if(n==0)
        return 1;
    else
        temp=n*factorial(n-1);
    return temp;
}
