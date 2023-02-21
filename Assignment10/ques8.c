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
int perm(int n,int r)
{
    return fact(n)/(fact(n-r));
}
main()
{

  printf("permutation is = %d",perm(10,2));
}
