#include<stdio.h>
main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n&1==1)
        {
            printf("Position of lsb is = %d",n);
            break;
        }
        else
            n=n>>1;;
    }
    return 0;
}
