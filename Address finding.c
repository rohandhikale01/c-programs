#include<stdio.h>

main()
{
    int a=10,*ptr_a;
    char ch='x',*ptr_ch;
    float f=3.142,*ptr_f;

    ptr_a=&a;
    ptr_ch=&ch;
    ptr_f=&f;

    printf("Value of a=%d & address of a is=%d \n",*ptr_a,&a);

    printf("Value of ch=%c & address of ch is=%d \n",*ptr_ch,&ch);

    printf("Value of f=%f & Address of f is=%d ",*ptr_f,&f);
}
