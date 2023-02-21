#include<stdio.h>
main()
{
    int i,n,n1=8,next,flag;
    next=n1+1;
    for(n=next;n<=next+1;next++,n++)
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
         {
           printf("Next prime number is = %d",n);

              break;
         }
    }
    return 0;
}
