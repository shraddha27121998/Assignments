#include<stdio.h>
main()
{

    int a=0,b=1,c,n,count=3;
    printf("enter a number");
    scanf("%d",&n);
    while(count<=n)
    {
        c=a+b;
        a=b;
        b=c;
        count++;
    }
    printf("nth term of fibonici series = %d",b);
    return 0;
}
