#include<stdio.h>
main()
{
    int sum=0,i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
        printf("%d",sum);
    return 0;
    }
