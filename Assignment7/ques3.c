#include<stdio.h>
main()
{
    int a=0,b=1,c,n,flag=0,count=2;
    printf("enter a number");
    scanf("%d",&n);
    for(count=2;count<=n;count++)
    {
        c=a+b;
        if(n==c)
            flag=1;
        a=b;
        b=c;
    }
        if(flag==1)
        printf("yes present");
        else
        printf("not present");
    return 0;
}


