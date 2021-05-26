#include<stdio.h>
#include<conio.h>
#include<string.h>

void search_by_name(); //function to search by name //
void search_by_id(); //Function to search by ID //
void display(); //To Display the DATA of all Employ //
void sal_grt_thn_2_lakh(); //To find the Details of Employ having Salary greater than 200000 //
void max_sal(); //To find the Details of Employ having maximum salary //

// emp is a structure which stores the id ,name, salary of employ //
struct emp
{
    int id,sal;
    char name[20];
};

main()
{
    printf("Program To Search & Display The DATA Of Employee \n");

    int i,size,j=1,x;

    printf("How Many Employee In your Company- ");
    scanf("%d",&size); //Scans Number of employ in company //

    struct emp a[size];

    printf("\nEnter the DATA of your Employee \n");

    for(i=0;i<size;i++)
    {
        printf("\nEnter The DATA of Employee %d\n",j++);

        printf("Name-  ");
        scanf("%s",&a[i].name);

        printf("ID- ");
        scanf("%d",&a[i].id);

        printf("Salary- ");
        scanf("%d",&a[i].sal);

    }

    loop:
        {
            printf("\nEnter 0 If your Search Is done- ");
            printf("\nEnter 1 to Search By Name.- ");
            printf("\nEnter 2 to search By ID- ");
            printf("\nEnter 3 to Display The all DATA- ");
            printf("\nEnter 4 to Display all employees having salary>2,00,000- ");
            printf("\nEnter 5 to Display employee having maximum salary- ");

            scanf("%d",&x);

            switch(x)
            {
            case 0: return 0;
                break;
            case 1:search_by_name(size,a); //calling function to search by name //
                break;
            case 2:search_by_id(size,a //calling Function to search by ID //
                break;
            case 3:display(size,a);// calling function To Display the DATA of all Employ //
                break;
            case 4:sal_grt_thn_2_lakh(size,a); //calling function To find the Details of Employ having Salary greater than 200000 //
                break;
            case 5:max_sal(size,a); // calling function To find the Details of Employ having maximum salary //
                break;
            default:
                printf("\nEnter the Valid Number.\n");
                break;
            }

        }
        goto loop;
}
void search_by_name(int size,struct emp a[]) //Function to search by ID //
{
    char ename[20];

    printf("\nEnter the name of employ- \n",ename);
    scanf("%s",&ename);

    for(int i=0;i<size;i++)
    {
        if(0==strcmp(a[i].name,ename))
        {
            printf("\nID- %d",a[i].id);
            printf("\nSalary- %d\n",a[i].sal);
        }
    }
}
void search_by_id(int size,struct emp a[]) //function to search by name //
{
    int i,temp;
    printf("\nEnter ID of Employ Whose DATA to be search-");
    scanf("%d",&temp);

    for(i=0;i<size;i++)
    {
        if(temp==a[i].id)
        {
            printf("\nID- %d",a[i].id);
            printf("\nName-%s",a[i].name);
            printf("\nSalary- %d\n",a[i].sal);
        }
    }
}

void display(int size,struct emp a[]) //To find the Details of Employ having Salary greater than 200000 //
{
    int i;
    printf("\nDisplaying The DATA of All Employs \n");
    for(i=0;i<size;i++)
    {
        printf("\nName- %s",a[i].name);
        printf("\nID- %d",a[i].id);
        printf("\nSalary- %d\n",a[i].sal);
    }
}

void sal_grt_thn_2_lakh(int size,struct emp a[]) //To find the Details of Employ having Salary greater than 200000 //
{
    int i,x=0;

    for(i=0;i<size;i++)
    {
        if(a[i].sal>200000)
        {
            printf("\nName- %s",a[i].name);
            printf("\nID- %d",a[i].id);
            printf("\nSalary-%d \n",a[i].sal);
            x++;
        }
    }
    if(x==0)
    {
        printf("\nNo one Employ Have Salary greater then 200000\n ");
    }
}

void max_sal(int size,struct emp a[]) //Function to find the maximum salary // //
{
    int i,max_sal=0;

    for(i=0;i<size;i++)
    {
        if(max_sal<a[i].sal)
        {
            max_sal=a[i].sal;
        }
    }

    for(i=0;i<size;i++)
    {
        if(max_sal==a[i].sal)
        {
           printf("\nName- %s\n",a[i].name);
           printf("ID-%d",a[i].id);
            printf("\nMaximum Salary- %d\n",max_sal);
        }
    }
}
