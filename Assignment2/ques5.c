#include<stdio.h>
main()
{
    int num,add;
    printf("enter the value");
    scanf("%d",&num);
   add=num%10;
   num=num/10;
    num=(num%10)+(num/10)+add;
    printf("sum of the digit sis %d",num);
    return 0;
    }
