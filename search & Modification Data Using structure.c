#include<stdio.h>
#include<conio.h>
#include<string.h>

void modify();  // To perform Modification //
void search(); // function to search by roll number or by name  //
void grt_thn_60();//function to find Roll number & name of students having percentage greater than 60//
void maxper();  //function to find Details of student having maximum percentage //
void display(); //function to display DATA of all student //
void modify_name(); //function to Modify Name //
void modify_roll_no(); //Function To Roll Number //
void modify_marks(); //Function To modify Marks of student //


//student is a structure which stores the data of all student //
struct student
{
    int roll_no;
    char name[25];
    int sub1,sub2,sub3;
    float percent;
};

main()
{
    printf("Program to perform menu driven program \n");

    int size,i,j=0,x;

    printf("\nHow many students in your class- ");
    scanf("%d",&size);

    struct student s[size];

    printf("\nStart Entering the data -\n");

    for(i=0;i<size;i++) // For loop to Accept The data of student //
    {
        printf("\n*****************************************");
        printf("\nEnter the DATA of student- %d\n",++j);

        printf("\nRoll Number- ");
        scanf("%d",&s[i].roll_no);

        printf("Name- ");
        scanf("%s",&s[i].name);

        printf("Enter the Marks of 3 subjects- ");
        scanf("%d%d%d",&s[i].sub1,&s[i].sub2,&s[i].sub3);

        s[i].percent=(float)(s[i].sub1+s[i].sub2+s[i].sub3)*(1.0/3.0);

    }
loop:
    {
        printf("Enter 0 if you Want to Exit\n"); //If Operation On Data is Done then to Exit from program //
        printf("Enter 1 for Search. \n");
        printf("Enter 2 for Modification.\n");
        printf("Enter 3 for To display Data of all student. \n");
        printf("Enter 4 To Find the students having percentage greater than 60.\n");
        printf("Enter 5 to find the name of student having maximum percentage. \n");

        scanf("%d",&x);

        switch(x)
        {
        case 0:
            return 0;
        case 1:search(size,s); //function call to search in DATA//
            break;
        case 2:modify(size,s); //function call if user want to modify DATA //
            break;
        case 3: display (size,s); //function call to Display All the DATA //
            break;
        case 4:grt_thn_60(size,s);  //function Call to Find the Name of student having percentage greater than 60 //
            break;
        case 5: maxper(size,s);  //function call to Find the name of student having maximum percentage //
            break;
        default:
            printf("Enter valid number");
            break;
        }
    }
    goto loop;
}
void modify(int size,struct student a[])
{
    int x,i;
    loop1:
    {

    printf("\nEnter 1 if you want to Modify Name \n");
    printf("Enter 2 if you want to Modify Roll number\n");
    printf("Enter 3 if you want to Modify Marks\n");
    printf("Enter 0 if your Modification Is done\n");
    scanf("%d",&x);

  switch(x)
  {
  case 0:
    return 0;
    break;
  case 1:modify_name(size,a); // To modify name //
    break;
  case 2:modify_roll_no(size,a);  //to modify roll number //
    break;
  case 3:modify_marks(size,a); //To Modify Marks //
    break;
  default:
    printf("\nPlease Enter the Valid Input");
  }
}
    goto loop1;
}

void modify_marks(int size,struct student a[]) //function Definition To modify marks //
{
    int rollno,i;
    printf("\nEnter the Roll Number Of student Whose Marks To be modify");
    scanf("%d",&rollno);

    for(i=0;i<size;i++)
        {
            if(rollno==a[i].roll_no)
            {
                  printf("\nEnter The Modified Marks of subject 1- ");
                  scanf("%d",&a[i].sub1);

                  printf("\nEnter The Modified Marks of subject 2- ");
                  scanf("%d",&a[i].sub2);

                  printf("\nEnter The Modified Marks of subject 1- ");
                  scanf("%d",&a[i].sub3);

                  printf("\nModified Marks- sub1=%d,sub2=%d,sub3=%d",a[i].sub1,a[i].sub2,a[i].sub3);

                  a[i].percent=(float)(a[i].sub1+a[i].sub2+a[i].sub3)*(1.0/3.0);

                  printf("\nModified Percentage- %f",a[i].percent);

            }
        }
}
void modify_name(int size,struct student a[])  //Function Definition To Modify Name //
{
     int rollno,i;
      printf("\nEnter the Roll number of student whose Name is To be Modify- ");
      scanf("%d",&rollno);
      for(i=0;i<size;i++)
      {
          if(rollno==a[i].roll_no)
          {
              printf("\nEnter The Modified Name- ");
              scanf("%s",&a[i].name);

              printf("\nThe Modified Name is - %s\n",a[i].name);
          }
      }
}
void modify_roll_no(int size,struct student a[]) //Function Definition to Modify Roll number //
{
    int i;
    char sname[20];
        printf("\nEnter the Name of student whose Roll Number is To be Modify-");
        scanf("%s",&sname);
        for(i=0;i<size;i++)
        {
            if(0==strcmp(sname,a[i].name))
            {
                printf("\nEnter Modified Roll Number-");
                scanf("%d",&a[i].roll_no);

                printf("\nYour Modified Roll number of student %s =%d\n",a[i].name,a[i].roll_no);
            }
        }
}

void search(int size,struct student a[]) //To search the DATA //
{
    int x,y,i;
    loop:
    {
    printf("\nEnter 1 to search by Roll Number.\n");
    printf("Enter 2 to search by name.\n");
    printf("Enter 0 If your search is complete\n");
    scanf("%d",&x);
    if(x==0)
    {
        return 0;
    }

    if(x==1) //search by Roll number //
    {
        printf("Enter Roll Number of student whose DATA is you want to search\n");
        scanf("%d",&y);
        for(i=0;i<size;i++)
        {
            if(y==a[i].roll_no)
            {
                printf("Name-%s\n",a[i].name);
                printf("Marks of 3 subjects Sub1=%d, Sub2=%d,Sub3=%d",a[i].sub1,a[i].sub2,a[i].sub3);
                printf("\nPercentage=%f",a[i].percent);
            }

        }
    }
     else //Search By Name //
    {
        char sname[20];
        printf("Enter the name of student whose DATA you want to search\n");
        scanf("%s",sname);
            for(i=0;i<size;i++)
                {
                   if(0==strcmp(a[i].name,sname))
                   {
                       printf("\nRoll Number- %d",a[i].roll_no);
                       printf("\nMarks of 3 subject sub1=%d, Sub2=%d, Sub3=%d",a[i].sub1,a[i].sub2,a[i].sub3);
                       printf("\nPercentage=%f",a[i].percent);
                   }
                }
    }
    }
    goto loop;
}
void grt_thn_60(int size,struct student a[]) //to find the names of student having percentage greater than 60 //
{
    int i,j=0;

    for(i=0;i<size;i++)
    {
        if(a[i].percent>60)
        {
            printf("\n Name-%s percentage- %f\n",a[i].name,a[i].percent);
            j++;
        }
    }
    if(j==0)
    {
        printf("\nNo one student have percentage greater than 60\n");
    }
}
void maxper(int size,struct student a[]) //function to display maximum percentage //
{
    int i;
    float max=0;
    for(i=0;i<size;i++)
    {
        if(max<a[i].percent)
        {
            max=a[i].percent;
        }
    }

    for(i=0;i<size;i++)
    {
        if(max==a[i].percent);
        {
            printf("Roll No.-%d   Name- %s",a[i].roll_no,a[i].name);
            printf("\n Max. percent=%f\n",max);
            break ;

        }
    }

}

void display(int size,struct student a[]) //function to display DATA of all students //
{
    printf("\nDisplaying The DATA of students  \n");

    int i;

    for(i=0;i<size;i++)
    {
        printf("******************************************");
        printf("\nRoll No.-%d \n",a[i].roll_no);
        printf("Name-%s\n",a[i].name);
        printf("Marks of 3 subjects- %d, %d, %d \n",a[i].sub1,a[i].sub2,a[i].sub3);
        printf("Percentage- %f\n",a[i].percent);
    }
}
