#include<stdio.h>
main()
{
    int n,rev=0,rem=0;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        }
        printf("revers number is %d ",rev);
                return 0;
}
