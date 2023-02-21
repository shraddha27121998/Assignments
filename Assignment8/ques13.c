#include<stdio.h>
main()
{
    int i,j;
    char a='A';
    for(i=0;i<=6;i++)
    {
        for(j=0,a='A';j<=12;j++)
        {
            if((j<=6-i)||(j>=6+i))
                printf(" %c ",a);
                else
                printf("   ");

                if(j<6)

                    a++;
                else
                    a--;
        }
            printf("\n");
    }

    return 0;
}
