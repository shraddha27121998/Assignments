#include<stdio.h>
main()
{
    int d;
    printf("enter a number");
    scanf("%d",&d);
    if(d%7==0||d%3==0)
        printf("number divisible by 3 and 7");
    else
        printf("number is not divisible by 3  and 7");
    return 0;

}

