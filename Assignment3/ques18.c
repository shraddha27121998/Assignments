#include<stdio.h>
main()
{
int n;
    printf("enter the month number");
    scanf("%d",&n);
    if((n==1)||(n==3)||(n==5)||(n==7)||(n == 8)||(n == 10)||(n == 12))
     {
    printf("month has 31 days\n");
    }
    else if(n==2)
    {
    printf("month has 28/29 days\n");
    }
    else
    {
        printf("month has 30 days");
    }
    return 0;
}
