#include<stdio.h>

main()
{
    int a;
    char x;
    printf("program to find previous & next character of Enter character");
    printf("\nEnter character: "); //Try to enter alphabet or number which is easy to check o/p of program//
    scanf("%c",&x);
    printf("\n %c=%d",x,x);

    printf("\n Enter above integer number: ");
    scanf("%d",&a);
    a=a-1;
    printf("\n previous=%c",a);
    a=a+2;
    printf("\n next=%c",a);


}
