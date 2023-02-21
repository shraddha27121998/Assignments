#include<stdio.h>
main()
{
    int sum=0,square,n,i;
    printf("enter a number ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        square=i*i;
    sum=sum+square;
    }
    printf("sum of squares is = %d ",sum);
}
