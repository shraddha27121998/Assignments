#include<stdio.h>
main()
{
    int i,n,flag;
    for(n=1;n<=100;n++)
    {
        flag=0;
        for(i=2;i<=n/2;i++)
        {
        if(n%i==0)
        {
          flag=1;
          break;
        }
        }
        if((flag==0)&&(n!=1))
        printf("%d \n",n);

    }
    return 0;
}
