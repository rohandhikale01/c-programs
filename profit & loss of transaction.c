#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    int cp,sp,amt;// cp=cost price & sp= selling price.
    printf("Program to find profit or loss amount .");
    printf("\n Enter the value of cost price & selling price respectively.:   \n");
    scanf("%d%d",&cp,&sp);

    amt=sp-cp;
    if(amt<0)
    {
        printf("Your loss amount is=%d rupees ",(-1)*amt);
    }
    else if(amt>0)
    {
        printf("Your profit amount =%d rupess",amt);
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}
