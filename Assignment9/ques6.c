#include<stdio.h>
main()
{
    int year,fyear;
    printf("enter a year");
    scanf("%d",&year);
    fyear=(((year%4==0)&&(year%400==0)||(year%100!=0)));
    switch(fyear)
    {
    case 1:
        printf("leap year");
        break;
        case 0:
            printf("not leap year");
            break;
        default:
            printf("invalid");
    }
    return 0;
}
