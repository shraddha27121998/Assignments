#include<stdio.h>
#include<math.h>
main()
{
    int a,b,c,d;
    float x1,x2;
    printf("enter the value of a,b and c");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    printf("discriminat is = %d",d);
    switch(d>0)
    {
    case 1:
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1=%f and x2=%f",x1,x2);
        printf("roots are real and distinct");
        break;
    case 0:
        switch(d < 0)
        {
        case 1:
            printf("\n roots are imaginary ");
            break;
        case 0:
            x1=-b/(2*a);
            printf("x1=x2=%f",x1);
            printf("roots are real and equal");
            break;
        }
    }
    return 0;
}
