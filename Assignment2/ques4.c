#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter the value of a,b");
    scanf("%d%d",&a,&b);
    c=a+b;
    b=c-b;
    a=c-b;
    printf("swap value is %d and %d",a,b);
    return 0;
}

