#include<stdio.h>
 int main()
 {
     int fact=1,i=1,n=4;

    for(i=1;i<=n;++i)
    {

    fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}
