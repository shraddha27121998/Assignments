#include<stdio.h>
main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n<=999)
        printf("three digits number");
    else
        printf("not a three digits number");
    return 0;
}
