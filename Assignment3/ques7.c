#include<stdio.h>
main()
{
    double a,b,c,discriminat;
    printf("enter the values a,b,c");
    scanf("%lf%lf%lf",&a,&b,&c);
    discriminat=(b*b-4*a*c);
    if(discriminat>0)
        printf("roots are real");
    else if(discriminat==0)
        printf("roots are equal");
    else
        printf("roots are imaginary");
    return 0;
}
