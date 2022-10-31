#include<stdio.h>
main()
{
    int num,digit,add;
    printf("enter a number");
    scanf("%d",&num);
    printf("enter a digit");
    scanf("%d",&digit);
    num=(num+10)*10;
    add=(num-100)+digit;
    printf("number is %d",add);
    return 0;

}
