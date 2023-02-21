#include<stdio.h>
main()
{
    int i,n,rev=0,rem,num;
    printf("enter a number ");
    scanf("%d",&num);
     n=num;
    while(num>0)
    {
    rem=num%10;
    rev=rev+(rem*rem*rem);
    num=num/10;
    }
    printf("%d\n",rev);
    if(n==rev)
    {
        printf("number is an armstrong");
    }
    else
        {
        printf("number is not armstrong");
    }
    return 0;
}
