#include<stdio.h>
int check(int number ,int digit)
{
    while(number)
    {
    if(number%10==digit)
        return 1;
    number=number/10;
    }
    return 0;
}
main()
{
    int d,num;
    printf("enter the value of d and num");
    scanf("%d%d",&num,&d);
    if(check(num ,d))
        printf("yes");
    else
        printf("no");



    }
