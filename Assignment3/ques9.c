#include<stdio.h>
main()
{
    int a,b,c;
    printf("enter the numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
        printf("greater number is %d",a);
   else if(b>a&&b>c)
        printf("greater number  is %d",b);
   else if(c>a&&c>b)
        printf("greater number is %d ",c);
   else if ((a==b)||(b==c)||(c==a))
    printf("number is repeated");

    return 0;
}

