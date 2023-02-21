#include<stdio.h>
void odd(int n)
{
    int i;
    for(i=1;i<=n;i=i+2)
        printf("%d",i);
}
main()
{
 int num;
 printf("enter n number");
 scanf("%d",&num);
    odd(num);
    return 0;
}
