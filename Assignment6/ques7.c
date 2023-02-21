#include<stdio.h>
main()
{
    int n,i=0;
    printf("enter a number");
    scanf("%d",&n);
    do{
      n=n/10;
      ++i;
    }
    while(n!=0);
        printf("digits in number %d",i);
    return 0;
}
