#include<stdio.h>
main()
{
    int i,j;
    for(i=0;i<=4;i++)
    {
        for(j=1;j<=9;j++)
            {
                if((j>=i+1)&&(j<=9-i))
                   printf(" * ");
                   else
                    printf("   ");
            }
            printf("\n");
    }
    return 0;
}
