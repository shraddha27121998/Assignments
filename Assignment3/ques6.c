#include<stdio.h>
main()
{

    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    if(a>b)
      {
        printf("greater number is %d",a);
    }
    else if(a=b)
    {
        printf("both are equal %d",b);
    }
    else
        printf("greater number is %d",b);
    return 0;
}
