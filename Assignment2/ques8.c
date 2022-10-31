#include<stdio.h>
main()
{
    int a,x;
    float b;
    char c;
    double d;
   x= sizeof(a);
    printf("%d",x);
    printf("\n");
    x= sizeof(b);
    printf("%d",x);
    printf("\n");
    x= sizeof(c);
    printf("%d",x);
    printf("\n");
    x= sizeof(d);
    printf("%d",x);
    return 0;
}
