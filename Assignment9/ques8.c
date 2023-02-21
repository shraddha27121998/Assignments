
#include<stdio.h>
main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    switch(n>0)
    {
case 1:
    printf("%d",-n);
    break;
case 0:
    printf("%d",-n);
    }
    return 0;
    }
