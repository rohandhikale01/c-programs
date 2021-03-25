#include<stdio.h>

main()
{
    char a;
    printf("program to print ASCII value of Given character");
    printf("\nEnter single character whose ASCII value do you want to find:  ");//if you enter more than one character  it will print ASCII value only for first//

    scanf("%c",&a);

    printf("\n %c=%d",a,a);
}
