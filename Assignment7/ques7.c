#include<stdio.h>
main()
{
    int i,n,n1,n2,flag;
    printf("enter two numbers");
    scanf("%d%d",&n1,&n2);
    for(n=n1;n<=n2;n++)
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
