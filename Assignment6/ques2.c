#include<stdio.h>
main()
{
    int sum=0,i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        sum=sum+i;
    }
    printf("sum of even natural numbers is = %d",sum);
    return 0;
}
