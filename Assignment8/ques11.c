#include<stdio.h>
main()
{
    int i,j;
    char a='A';
    for(i=0;i<=4;i++)
    {
        for(j=0,a='A';j<=8;j++)
        {
            if((j>=4-i)&&(j<=4+i))
            {
                printf(" %c ",a);

                if(j>=4)
                    a--;
                else
                    a++;
            }
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}
