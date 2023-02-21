#include<stdio.h>
main()
{
    int j,i;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<=4;j++)
        {
            if((j>=i+1)||(j>=i-1))
                printf(" * ");
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}
