#include<stdio.h>
main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    num=(num%10)*100+(num/10);
    printf("value of after rotation is %d",num);
    return 0;
}
