
#include<stdio.h>
main()
{
    int n,i,rem,rev=0;
    for(i=1;i<=1000;i++)
    {
        n=i;
        while(n>0)
        {
              rem=n%10;
              rev=rev+(rem*rem*rem);
              n=n/10;
        }
        if(i==rev)
        printf("%d\n",rev);
        rev=0;
    }
return 0;
}


