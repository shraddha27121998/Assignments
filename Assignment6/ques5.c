#include<stdio.h>
main()
{
    int sum=0,cube,n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cube=i*i*i;
        sum=sum+cube;
    }
    printf("sum of cube is = %d",sum);
    return 0;
}
