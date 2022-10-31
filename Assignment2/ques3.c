#include<stdio.h>
main()
{
    int a,b;
    printf("enter the value of a,b");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swap value is %d and %d",a,b);
    return 0;
}

