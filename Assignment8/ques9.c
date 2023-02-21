#include<stdio.h>
main()
{
    int c=1,i,j;
    for(i=0;i<=3;i++)
    {
        for(j=0,c=1;j<=6-i;j++)
        {
            if(j>=i)
                {
                 printf("%d",c);
                if(j>=3)
                    c--;
                else
                    c++;
                }
                else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
