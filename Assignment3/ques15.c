#include<stdio.h>
main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num>0)
        printf("positive");
    if(num<0)
        printf("negative");
    if(num==0)
        printf("zero");
    return 0;
}
