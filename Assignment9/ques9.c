#include<stdio.h>
main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 1:
            printf("upper nearest odd no. is =%d",n+1);
        break;
        case 0:
            printf("upper nearest odd no. is =%d",n);
    }
    return 0;
}
