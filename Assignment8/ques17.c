#include<stdio.h>
main()
{
    int i ,j;
    for(i=0;i<1;i++)
    {
        for(j=1;j<=9;j++)
        {
           printf(" * ");
        }
        printf("\n");
    }
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=8;j++)
        {
            if((j==1+i)||(j==9-i))
                printf(" * ");
                else
                    printf("   ");
        }
        printf("\n");
    }
    return 0;
}
