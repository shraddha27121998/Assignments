#include<stdio.h>
main()
{
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=1;j<=9;j++)
        {
            if((j>=5-i)&&(j<=5+i))
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
    for(i=0;i<=4;i++)
    {
        for(j=1;j<=9;j++)
            {
                if((j>=1+i)&&(j<=9-i))
                    printf(" * ");
                else
                    printf("   ");
            }
            printf("\n");
    }
    return 0;
}
