#include<stdio.h>
main()
{

    int a=0,b=1,c,n,count=2;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d \n%d \n",a,b);
    while(count<=n)
    {
        c=a+b;
        a=b;
        b=c;


    printf("%d \n",c,b,a);
     count++;
    }
    return 0;
}

