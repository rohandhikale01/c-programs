#include<stdio.h>
#include<conio.h>

struct student {  //student is structure //

    int roll_no;
    char name[20];

};

main()
{
    printf("Program to make an array of structure & print it \n");

    int i,j=0,size;

  printf("How many students in your class-");
  scanf("%d",&size);

  struct student s[size];

    printf("\nEnter the Data of your students- \n");

    for(i=0;i<size;i++)
    {
        printf("\nEnter the details of student-%d ",++j);

        printf("\nEnter student%d Roll number: ",i);
        scanf("%d",&s[i].roll_no);

        printf("\nEnter the student%d Name: ",i);
        scanf("%s",&s[i].name);

    }
    j=0;
    for(i=0;i<size;i++)
    {
        printf("\nDisplaying Details of student-%d\n",++j);

        printf("\nRoll No.-%d Name- %s",s[i].roll_no,s[i].name);
    }
}
