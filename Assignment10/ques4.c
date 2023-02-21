#include<stdio.h>
void natural_number(int n)
{
int i;
for(i=1;i<=n;i++)
    printf("%d",i);
}
main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    natural_number(num);
    return 0;
}
