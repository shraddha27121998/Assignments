#include<stdio.h>
main()
{
    int n,y;
    printf("enter a number");
    scanf("%d",&n);
   y=n&1?printf("odd"):printf("even");
   return 0;
}
