#include<stdio.h>
main()
{
    int n,i,f=0;
    printf("enter a number");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    printf("number is prime");
    else printf("not prime");
        return 0;
    }
