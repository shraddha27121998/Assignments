#include<stdio.h>
main()
{
    int i,j;
    for(i=0;i<=2;i++)
    {
        for(j=1;j<=19;j++)
        {
            if(((j>=3-i)&&(j<=7+i))||((j>=13-i)&&(j<=17+i)))
                printf(" * ");
                else
                    printf("   ");
        }
            printf("\n");
    }
     for(i=0;i<=9;i++)
    {
        for(j=1;j<=19;j++)
        {
            if((j>=1+i)&&(j<=19-i))
                    printf(" * ");
                    else
                        printf("   ");
        }
                printf("\n");
    }
    return 0;
}
