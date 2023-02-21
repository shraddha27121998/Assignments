#include<stdio.h>
main()
{
    int d;
    printf("enter a number");
    scanf("%d",&d);
    if(d%3==0&&d%2==0)
        printf("number divisible by 3 and 2");
    else
        printf("number is not divisible by 3  and 2");
    return 0;

}
