#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}

main()
{
    int num ,ra;
    printf("enter the value of num and ra");
    scanf("%d%d",&num,&ra);
    printf("combination is = %d",comb(num ,ra));
}
