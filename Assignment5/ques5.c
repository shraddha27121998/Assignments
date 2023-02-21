#include<stdio.h>
main()
{
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    if(n%2==1)
    for(i=n;i>=1;i=i-2)
    {
    printf("%d",i);
    }
    else
    for(i=n-1;i>=1;i=i-2)
        {
        printf("%d",i);
    }
    return 0;
}
