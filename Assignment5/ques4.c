#include<stdio.h>
main()
{
    int n,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i=1;n>=i;i=i+2)
    {
        printf("%d",i);
    }
    return 0;

}
